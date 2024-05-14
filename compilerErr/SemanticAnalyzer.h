#pragma once

#include "SymbolTableManager.h"
//#include "ErrorHandler.h"
#include "Quadruples.h"
//#include "LexicalAnalyzer.h"

class SemanticAnalyzer {
public:

    static SemanticAnalyzer& initialSemanticAnalyzer(
        SymbolTableManager&, Quadruples&);

    //void constDeclareSkip();
    //void charSkip();
    //void stringSkip();

    void constDefine(const string&, BasicType, int value);
    string& stringDefine(const string&);
    void varDefine(vector<string>& names, BasicType bType, int* value);
    //void arrayDefine(vector<string>&, BasicType, int limit);
    void procedureDefine(const string& procname, vector<Argument>& args);
    void functionDefine(const string& funcname, vector<Argument>& args, BasicType type);
    void formalParameterAdd(vector<string>& names, BasicType type,
        bool vary, vector<Argument>&);
    void getAddress(const string& base, const string& offset, string& addr);
    void getContent(const string& base, string& value);
    void assignFromAddress(const string& addr, const string& value,
        BasicType addrType, BasicType valueType);
    void assignToAddress(const string& addr, const string& value,
        BasicType addrType, BasicType valueType);
    void assignToArray(const string& arrname, const string& offset, const string& value,
        BasicType arraytype, BasicType valuetype);
    void assign(const string& name, const string& value,
        BasicType nametype, BasicType valuetype);
    void negative(const string& oper1, string& dest);
    void addition(const string& oper1, const string& oper2, string& dest);
    void subtraction(const string& oper1, const string& oper2, string& dest);
    void multiplicatioin(const string& oper1, const string& oper2, string& dest);
    void division(const string& oper1, const string& oper2, string& dest);
    void intToString(int n, string& str);
    void callFunction(const string& name, string& value);
    void callProcedure(const string& name);
    void functionAssign(const string& name, const string& value,
        BasicType functype, BasicType valuetype);
    void label(const string& lab);
    void funcprocStart();
    void funcprocReturn();
    void push(const string& value);
    void passParameter(const string& value, BasicType formaltype, BasicType realtype);
    void passAddress(const string& addr, BasicType formaltype, BasicType realtype);
    void compare(const string& value1, const string& value2);
    void dissatisfyJump(SymbolType op, const string& lab);
    void satisfyJump(SymbolType op, const string& lab);
    void jumpAnyway(string lab);
    string& newLabel();
    string& newLabel(const string& forehead);
    void readChar(const string& name);
    void readInteger(const string& name);
    void writeString(const string& name);
    void writeInteger(const string& value);
    void writeChar(const string& ch);
    void newline();

    int getTemporaryCount() { return temporaryCount; }

private:

    SymbolTableManager& table;
    Quadruples& quadruples;

    int temporaryCount;
    string newTemporary();

    int labelCount;

    void cut(BasicType desttype, BasicType valuetype, string& value);

    SemanticAnalyzer(SymbolTableManager&, Quadruples&);
    SemanticAnalyzer(const SemanticAnalyzer&);
    //SemanticAnalyzer& operator= (const SemanticAnalyzer&);
};