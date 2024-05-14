#include "SemanticAnalyzer.h"

SemanticAnalyzer& SemanticAnalyzer::initialSemanticAnalyzer(
    SymbolTableManager& stm, Quadruples& q) {
    static SemanticAnalyzer theSemanticAnalyzer(stm, q);
    return theSemanticAnalyzer;
}

SemanticAnalyzer::SemanticAnalyzer( SymbolTableManager& stm,
    Quadruples& q) :
    table(stm), quadruples(q) {
    temporaryCount = 0;
}


string SemanticAnalyzer::newTemporary() {
    temporaryCount++;
    return stringPlusInt("t_", temporaryCount);
}


void SemanticAnalyzer::constDefine(const string& id, BasicType type, int value) {
    table.ste = new STE;
    table.ste->name = id;
    table.ste->type = IdentifierType::CONST;
    table.ste->valueType = type;
    table.ste->multiInt = value;
    table.insert();
}



string& SemanticAnalyzer::stringDefine(const string& str) {
    static int count = 0;
    static string name;
    name = stringPlusInt("string_", ++count);
    table.addString(name, str);
    return name;
}


void SemanticAnalyzer::varDefine(vector<string>& names, BasicType bType, int* value = nullptr) {
    for (vector<string>::iterator it = names.begin(); it != names.end(); it++) {
        table.ste = new STE;
        table.ste->name = *it;
        table.ste->type = IdentifierType::VAR;
        if (value != nullptr) {
            table.ste->multiInt = *value;
        }
        table.ste->valueType = bType;
        table.insert();
    }
}

//void SemanticAnalyzer::arrayDefine(vector<string>& names, BasicType bType, int lim) {
//    for (vector<string>::iterator it = names.begin(); it != names.end(); it++) {
//        table.ste = new STE;
//        table.ste->name = *it;
//        table.ste->type = IdentifierType::ARRAY;
//        table.ste->valueType = bType;
//        table.ste->multiInt = lim;
//        table.insert();
//    }
//}

void SemanticAnalyzer::procedureDefine(const string& procname, vector<Argument>& args) {
    table.ste = new STE;
    table.ste->name = procname;
    table.ste->type = IdentifierType::PROCEDURE;
    table.insert();
    if (!args.empty())
        table.defineArguments(table.ste, args);        
}

void SemanticAnalyzer::functionDefine(const string& funcname,
    vector<Argument>& args, BasicType type) {
    table.ste = new STE;
    table.ste->name = funcname;
    table.ste->type = IdentifierType::FUNCTION;
    table.ste->valueType = type;
    table.insert();
    if (!args.empty())
        table.defineArguments(table.ste, args);         
}


void SemanticAnalyzer::formalParameterAdd(vector<string>& names, BasicType type,
    bool vary, vector<Argument>& args) {
    for (vector<string>::iterator it = names.begin(); it != names.end(); it++)
        args.push_back(Argument(*it, type, vary));
}


void SemanticAnalyzer::negative(const string& oper1, string& dest) {
    dest = newTemporary();
    quadruples.addTail(new Quadruple(Operator::NEG, oper1, "", dest));
}

void SemanticAnalyzer::addition(const string& oper1, const string& oper2, string& dest) {
    dest = newTemporary();
    quadruples.addTail(new Quadruple(Operator::ADD, oper1, oper2, dest));
}

void SemanticAnalyzer::subtraction(const string& oper1, const string& oper2, string& dest) {
    dest = newTemporary();
    quadruples.addTail(new Quadruple(Operator::SUB, oper1, oper2, dest));
}

void SemanticAnalyzer::multiplicatioin(const string& oper1, const string& oper2, string& dest) {
    dest = newTemporary();
    quadruples.addTail(new Quadruple(Operator::MUL, oper1, oper2, dest));
}

void SemanticAnalyzer::division(const string& oper1, const string& oper2, string& dest) {
    dest = newTemporary();
    quadruples.addTail(new Quadruple(Operator::DIV, oper1, oper2, dest));
}


void SemanticAnalyzer::intToString(int n, string& str) {
    str = stringPlusInt("n_", n);
}

void SemanticAnalyzer::callFunction(const string& name, string& value) {
    value = newTemporary();
    quadruples.addTail(new Quadruple(Operator::CALF, name, "", value));
}

void SemanticAnalyzer::callProcedure(const string& name) {
    quadruples.addTail(new Quadruple(Operator::CALP, name, "", ""));
}

void SemanticAnalyzer::cut(BasicType desttype, BasicType valuetype, string& value) {
    if (desttype == BasicType::CHAR && valuetype == BasicType::INTEGER) {
        string newValue = newTemporary();
        quadruples.addTail(new Quadruple(Operator::CUT, value, "", newValue));
        value = newValue;
    }
}

void SemanticAnalyzer::functionAssign(const string& name, const string& value,
    BasicType functype, BasicType valuetype) {
    if (functype == BasicType::CHAR && valuetype == BasicType::INTEGER) {
        string t = newTemporary();
        assign(t, value, functype, valuetype);
        quadruples.addTail(new Quadruple(Operator::FAS, t, "", name));
    }
    else
        quadruples.addTail(new Quadruple(Operator::FAS, value, "", name));
}

void SemanticAnalyzer::label(const string& lab) {
    quadruples.addTail(new Quadruple(Operator::LAB, lab, "", ""));
}

void SemanticAnalyzer::funcprocStart() {
    label(table.encodePosition());
}

void SemanticAnalyzer::funcprocReturn() {
    quadruples.addTail(new Quadruple(Operator::RTN, "", "", ""));
}

void SemanticAnalyzer::push(const string& value) {
    quadruples.addTail(new Quadruple(Operator::PUSH, value, "", ""));
}

void SemanticAnalyzer::passParameter(const string& value,
    BasicType formaltype, BasicType realtype) {
    if (formaltype == BasicType::CHAR && realtype == BasicType::INTEGER) {
        string t = newTemporary();
        assign(t, value, formaltype, realtype);
        push(t);
    }
    else
        push(value);
}

void SemanticAnalyzer::passAddress(const string& addr,
    BasicType formaltype, BasicType realtype) {
    if (formaltype == BasicType::CHAR && realtype == BasicType::INTEGER)
        //errorHandler.printWarning(ErrorType::INT_TO_CHAR, "Integer address to char address");
    push(addr);
}

void SemanticAnalyzer::compare(const string& value1, const string& value2) {
    quadruples.addTail(new Quadruple(Operator::CMP, value1, value2, ""));
}


void SemanticAnalyzer::dissatisfyJump(SymbolType op, const string& lab) {
    Operator jmpop;
    switch (op) {
    case SymbolType::LESS:
        jmpop = Operator::JGE;
        break;
    case SymbolType::LESS_EQUAL:
        jmpop = Operator::JG;
        break;
    case SymbolType::GREATER:
        jmpop = Operator::JLE;
        break;
    case SymbolType::GREATER_EQUAL:
        jmpop = Operator::JL;
        break;
    case SymbolType::EQUAL:
        jmpop = Operator::JNE;
        break;
    case SymbolType::INEQUAL:
        jmpop = Operator::JE;
        break;
    default:
        //ERROUT(ErrorType::NO_RELATION, "\a");
        exit(-2441);
        break;
    }
    quadruples.addTail(new Quadruple(jmpop, "", "", lab));
}

void SemanticAnalyzer::jumpAnyway(string lab) {
    quadruples.addTail(new Quadruple(Operator::JMP, "", "", lab));
}

string& SemanticAnalyzer::newLabel() {
    return newLabel("");
}

string& SemanticAnalyzer::newLabel(const string& forehead) {
    static string newlab;
    labelCount++;
    newlab = forehead;
    newlab += stringPlusInt("_label_", labelCount);
    return newlab;
}

void SemanticAnalyzer::satisfyJump(SymbolType op, const string& lab) {
    Operator jmpop;
    switch (op) {
    case SymbolType::LESS:
        jmpop = Operator::JL;
        break;
    case SymbolType::LESS_EQUAL:
        jmpop = Operator::JLE;
        break;
    case SymbolType::GREATER:
        jmpop = Operator::JG;
        break;
    case SymbolType::GREATER_EQUAL:
        jmpop = Operator::JGE;
        break;
    case SymbolType::EQUAL:
        jmpop = Operator::JE;
        break;
    case SymbolType::INEQUAL:
        jmpop = Operator::JNE;
        break;
    default:
        //ERROUT(ErrorType::NO_RELATION, "\a");
        exit(-2441);
        break;
    }
    quadruples.addTail(new Quadruple(jmpop, "", "", lab));
}

void SemanticAnalyzer::readChar(const string& name) {
    quadruples.addTail(new Quadruple(Operator::RC, "", "", name));
}

void SemanticAnalyzer::readInteger(const string& name) {
    quadruples.addTail(new Quadruple(Operator::RI, "", "", name));
}

void SemanticAnalyzer::writeString(const string& name) {
    quadruples.addTail(new Quadruple(Operator::WS, name, "", ""));
}

void SemanticAnalyzer::writeInteger(const string& value) {
    quadruples.addTail(new Quadruple(Operator::WI, value, "", ""));
}

void SemanticAnalyzer::writeChar(const string& ch) {
    quadruples.addTail(new Quadruple(Operator::WC, ch, "", ""));
}

void SemanticAnalyzer::newline() {
    quadruples.addTail(new Quadruple(Operator::NL, "", "", ""));
}

void SemanticAnalyzer::getAddress(const string& base, const string& offset, string& addr) {
    addr = newTemporary();
    quadruples.addTail(new Quadruple(Operator::GA, base, offset, addr));
}

void SemanticAnalyzer::getContent(const string& base, string& value) {
    value = newTemporary();
    quadruples.addTail(new Quadruple(Operator::ASFA, base, "", value));
}

void SemanticAnalyzer::assignFromAddress(const string& addr, const string& value,
    BasicType addrType, BasicType valueType) {
    quadruples.addTail(new Quadruple(Operator::ASFA, addr, "", value));
    string variable = value;
    cut(valueType, addrType, variable);
}

void SemanticAnalyzer::assignToAddress(const string& addr, const string& value,
    BasicType addrType, BasicType valueType) {
    string variable = value;
    cut(addrType, valueType, variable);
    quadruples.addTail(new Quadruple(Operator::ASTA, variable, "", addr));
}

void SemanticAnalyzer::assignToArray(const string& arrname,
    const string& offset, const string& value,
    BasicType arraytype, BasicType valuetype) {
    string variable = value;
    cut(arraytype, valuetype, variable);
    string tmp = newTemporary();
    quadruples.addTail(new Quadruple(Operator::GA, arrname, offset, tmp));
    quadruples.addTail(new Quadruple(Operator::ASTA, variable, "", tmp));
}

void SemanticAnalyzer::assign(const string& name, const string& value,
    BasicType nametype, BasicType valuetype) {
    string variable = value;
    cut(nametype, valuetype, variable);
    quadruples.addTail(new Quadruple(Operator::ASS, variable, "", name));

}