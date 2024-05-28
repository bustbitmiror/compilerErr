#include "TargetCodeGenerator.h"
#include "x86_instruction.h"
using namespace std;

#define pool (*registerPool)

TargetCodeGenerator::TargetCodeGenerator(ofstream& file, Quadruples& q,
    SymbolTableManager& stm) :
    targetFile(file), stack(file), quadruples(q),
    table(stm), qit(q.begin()), level(0) {
    table.home();
    vector<string> registerList;
#define INS(a) registerList.push_back(a)
    INS("eax");
    INS("ecx");
    INS("edx");
    INS("ebx");
    INS("esi");
    INS("edi");
    //! INS("ebp");     
#undef INS
    registerPool = new RegisterPool(registerList, stack, file);
}

void TargetCodeGenerator::getOper(const string& oldformat, string& newformat) {
    int offset;
    switch (oldformat[0]) {

    case 'v':

        table.decodeKey(oldformat);

        offset = table.ste->location;

        if (table.ste->level != level) {
            int baseoffset = displayOffset + table.ste->level;
            newformat = registerPool->getDest(oldformat, offset, baseoffset);

        }
        else
            newformat = registerPool->getDest(oldformat, offset);
        break;

    case 't':

        newformat = registerPool->getDest(oldformat);
        break;

    case 'n':

        newformat = oldformat.substr(2);
        break;

    default:
        break;
    }
}

void TargetCodeGenerator::getDest(const string& oldformat,
    string& newformat, bool wantValue) {
    int offset;
    switch (oldformat[0]) {

    case 'v':

        table.decodeKey(oldformat);

        offset = table.ste->location;

        if (table.ste->level != level) {
            int baseoffset = displayOffset + table.ste->level;
            newformat = registerPool->getDestRegister(oldformat, offset,
                baseoffset, wantValue);

        }
        else
            newformat = registerPool->getDestRegister(oldformat, offset, 0, wantValue);
        break;

    case 't':

        newformat = registerPool->getDestRegister(oldformat, wantValue);
        break;

    case 'n':

        newformat = registerPool->getRegister();
        MOV(targetFile, newformat, oldformat.substr(2));
        break;
    default:
        break;
    }
}

void TargetCodeGenerator::divInstruction() {
    string oper;
    getOper(qit->oper1, oper);
    if (oper != "eax") {
        registerPool->home("eax");
        MOV(targetFile, "eax", oper);
    }
    registerPool->lock("eax");
    registerPool->home("edx");
    registerPool->lock("edx");
    CDQ(targetFile);
    getDest(qit->oper2, oper, true);
    IDIV(targetFile, oper);
    registerPool->unlock("edx");
    getOper(qit->dest, oper);
    MOV(targetFile, oper, "eax");
    registerPool->unlock("eax");
}

void TargetCodeGenerator::threeOperatorInstruction(void (*func)(ofstream&,
    const string&, const string&)) {
    string dest, oper;
    getDest(qit->dest, dest);
    registerPool->lock(dest);
    getOper(qit->oper1, oper);
    MOV(targetFile, dest, oper);
    getOper(qit->oper2, oper);
    func(targetFile, dest, oper);
    registerPool->unlock(dest);
}

void TargetCodeGenerator::negInstruction() {
    string dest, oper;
    getDest(qit->dest, dest);
    registerPool->lock(dest);
    getOper(qit->oper1, oper);
    MOV(targetFile, dest, oper);
    NEG(targetFile, dest);
    registerPool->unlock(dest);
}

void TargetCodeGenerator::assInstruction() {
    string dest, oper;
    getOper(qit->dest, dest);
    if (dest[0] == 'e' || dest[0] == '[')
        registerPool->lock("ebp"); 
    
    if (dest[0] != 'e')
        getDest(qit->oper1, oper, true);

    else {
        getOper(qit->oper1, oper);
    }
    MOV(targetFile, dest, oper);
    registerPool->unlock("ebp");
}

void TargetCodeGenerator::gaInstructioin() {
    string dest;
    string offset;
    string tmp;
    getDest(qit->dest, dest);
    registerPool->lock(dest);
    table.decodeKey(qit->oper1);
    if (table.ste->level == level)
        stack.getLocationOnStack(dest, table.ste->location);
    else
        stack.getLocationOnStack(dest, table.ste->location,
            displayOffset + table.ste->level);
    if (qit->oper2 != "n_0") {
        tmp = registerPool->getRegister();
        registerPool->lock(tmp);
        getOper(qit->oper2, offset);
        MOV(targetFile, tmp, offset);
        SHL(targetFile, tmp, intToString(2));
        SUB(targetFile, dest, tmp);
        registerPool->unlock(tmp);
    }
    registerPool->unlock(dest);
}

void TargetCodeGenerator::asfaInstruction() {
    string dest, oper;
    getDest(qit->oper1, oper, true);
    registerPool->lock(oper);
    getDest(qit->dest, dest);
    MOV(targetFile, dest, "[" + oper + "]");
    registerPool->unlock(oper);
}

void TargetCodeGenerator::astaInstruction() {
    string dest, value;
    getDest(qit->oper1, value, true);
    registerPool->lock(value);
    getDest(qit->dest, dest, true);
    MOV(targetFile, "[" + dest + "]", value);
    registerPool->unlock(value);
}

void TargetCodeGenerator::fasInstruction() {
    string value, dest;
    table.decodeKey(qit->dest);
    if (table.ste->level != level) {
        int baseoffset = table.ste->level + displayOffset;
        dest = registerPool->getRegister();
        registerPool->lock(dest);
        string addr = stack.getAddress(dest, 1, baseoffset);
        getDest(qit->oper1, value, true);
        MOV(targetFile, addr, value);
        registerPool->unlock(dest);
    }
    else {
        dest = stack.getAddress("", 1);
        getDest(qit->oper1, value, true);
        MOV(targetFile, dest, value);
    }
}

void TargetCodeGenerator::cutInstruction() {
    string dest, oper;
    getDest(qit->dest, dest);
    registerPool->lock(dest);
    getOper(qit->oper1, oper);
    MOV(targetFile, dest, oper);
    AND(targetFile, dest, intToString(0xff));
    registerPool->unlock(dest);
}

void TargetCodeGenerator::labInstruction() {

    if (qit->oper1[0] == '_') {
        handleHead();
        initialVariables();
    }
    else if (qit->oper1[0] == 'p' && qit->oper1[1] == '_') {
        handleHead();
        initialVariables();
    }
    else if (qit->oper1[0] == 'f' && qit->oper1[1] == '_') {
        handleHead();
        stack.allocN(1);    
        initialVariables();
        
    }
    else {
        registerPool->home();
        LAB(targetFile, qit->oper1);
    }
}

void TargetCodeGenerator::handleHead() {
    parameters.clear();
    stack.initialStack();
    registerPool->initialRegisterPool();
    procname = qit->oper1;
    if (procname == "_main") {
        table.home();           
        LAB(targetFile, procname);
        args = NULL;
        level = 0;
    }
    else {
        PROC(targetFile, procname);
        table.decodeKey(procname);
        table.comeHere();       
        level = table.ste->level;
        args = table.ste->arguments;
    }
    if (args != NULL)
        displayOffset = 0 - level - args->size();
    else
        displayOffset = 0 - level;
    PUSH(targetFile, "ebp");
    MOV(targetFile, "ebp", "esp");
}

void TargetCodeGenerator::initialVariables() {
    map<string, STE*>* variables = table.getChilds();
    if (variables != NULL) {
        for (map<string, STE*>::iterator it = variables->begin();
            it != variables->end(); it++) {
            switch (it->second->type) {
            case IdentifierType::VAR:
            case IdentifierType::ADDR:
                if (it->second->location >= 0) {
                    stack.allocN(1);
                }
                break;
            /*case IdentifierType::ARRAY:
                if (it->second->multiInt > 0) {
                    stack.allocN(it->second->multiInt);
                }
                break;*/
            default:
                break;
            }
        }
    }
    
    registerPool->setLastOffset(stack.getOffset());
    stack.allocN(table.getTempcount());
}

void TargetCodeGenerator::cmpInstruction() {
    string oper1, oper2;
    registerPool->home();
    getOper(qit->oper1, oper1);
    if (oper1[0] != 'e') {
        string reg = registerPool->getRegister();
        MOV(targetFile, reg, oper1);
        oper1 = reg;
    }
    registerPool->lock(oper1);
    getOper(qit->oper2, oper2);
    CMP(targetFile, oper1, oper2);
    registerPool->unlock(oper1);
}

void TargetCodeGenerator::jumpInstruction(void (*func)(ofstream&, const string& label)) {
    registerPool->home();
    func(targetFile, qit->dest);
}

void TargetCodeGenerator::passParameters() {
    parameters.push_back(qit->oper1);
}

void TargetCodeGenerator::buildDisplay(int destLevel) {
    for (int i = 0; i < destLevel && i < level; i++)
        stack.push(stack.getAddress("", displayOffset + i));
    if (destLevel > level)
        stack.push("ebp");
}

void TargetCodeGenerator::calpInstruction() {
    string oper;
    string proc = qit->oper1;
    table.decodeKey(proc);
    int argnum = table.ste->arguments != NULL ? table.ste->arguments->size() : 0;
    int destLevel = table.ste->level;

    buildDisplay(destLevel);

    for (int i = 0; i < argnum; i++) {
        getOper(parameters.back(), oper);
        stack.push(oper);
        parameters.pop_back();
    }

    registerPool->home();

    CALL(targetFile, proc);

    stack.freeN(destLevel + argnum);
}

void TargetCodeGenerator::calfInstruction() {

    calpInstruction();

    registerPool->lock("eax");
    string dest;
    getOper(qit->dest, dest);
    MOV(targetFile, dest, "eax");
    registerPool->unlock("eax");
}

void TargetCodeGenerator::rtnInstruction() {
    
    if (procname == "_main") {
        stack.push(intToString(0));
        CALL(targetFile, "ExitProcess");
        LEAVE(targetFile);
        RET(targetFile);
        END(targetFile, procname);
        
    }
    else if (procname[0] == 'f') {
        MOV(targetFile, "eax", stack.getAddress("", 1));
        LEAVE(targetFile);
        RET(targetFile);
        ENDP(targetFile, procname);
        
    }
    else {
        LEAVE(targetFile);
        RET(targetFile);
        ENDP(targetFile, procname);
    }
    //!    table.goOut();          
}

void TargetCodeGenerator::readOrWrite(const string& functionname,
    const string& formatString, const string& content) {
    stack.push(content);
    stack.push("offset " + formatString);
    registerPool->home();
    CALL(targetFile, "crt_" + functionname);
    stack.freeN(2);
}

void TargetCodeGenerator::readOrWriteInstruction(const string& functionname,
    const string& formatString) {
    string oper;
    if (functionname == "scanf") {
        table.decodeKey(qit->dest);
        if (table.ste->type == IdentifierType::ADDR) {
            getOper(qit->dest, oper);
            readOrWrite(functionname, formatString, oper);
        }
        else {
            oper = registerPool->getRegister();
            registerPool->lock(oper);
            if (table.ste->level == level)
                stack.getLocationOnStack(oper, table.ste->location);
            else
                stack.getLocationOnStack(oper, table.ste->location,
                    table.ste->level + displayOffset);
            readOrWrite(functionname, formatString, oper);
            registerPool->unlock(oper);
        }
    }
    else {
        getOper(qit->oper1, oper);
        readOrWrite(functionname, formatString, oper);
    }

}

#define format_printf_int       "%d"
#define format_printf_char      "%c"
#define format_printf_string    "%s"
#define format_scanf_int        " %d"
#define format_scanf_char       " %c"

#define format_out(format) #format"\tdb \""format"\", 0"

void TargetCodeGenerator::nlInstruction() {
    stack.push(intToString('\n'));
    stack.push("offset format_printf_char");
    CALL(targetFile, "crt_printf");
    stack.freeN(2);
}

void TargetCodeGenerator::printAssembleHead() {
    targetFile << ".386" << endl;
    targetFile << ".model\tflat" << ", c" << endl;
    targetFile << "option\t" << "casemap: none" << endl << endl;
    targetFile << "includelib\t" << "\\masm32\\lib\\kernel32.lib" << endl;
    targetFile << "includelib\t" << "\\masm32\\lib\\msvcrt.lib" << endl;
    targetFile << "include\t" << "\\masm32\\include\\msvcrt.inc" << endl;
    targetFile << "include\t" << "\\masm32\\include\\kernel32.inc" << endl << endl;
    targetFile << ".data" << endl;
    targetFile << format_out(format_printf_char) << endl;
    targetFile << format_out(format_printf_int) << endl;
    targetFile << format_out(format_printf_string) << endl;
    targetFile << format_out(format_scanf_char) << endl;
    targetFile << format_out(format_scanf_int) << endl;
    map<string, string>& stringmap = table.getStringMap();
    map<string, string>::const_iterator smit = stringmap.begin();
    while (smit != stringmap.end()) {
        targetFile << smit->first << "\tdb \"" << smit->second << "\", 0" << endl;
        smit++;
    }
    targetFile << endl << ".code" << endl << endl;
}

void TargetCodeGenerator::generateCode() {
    printAssembleHead();
    string oper1, oper2, dest;
    for (qit = quadruples.begin(); qit != quadruples.end(); qit++) {
        switch (qit->op) {
        case Operator::ADD:    
            threeOperatorInstruction(ADD);
            break;
        case Operator::SUB:    
            threeOperatorInstruction(SUB);
            break;
        case Operator::MUL:    
            threeOperatorInstruction(IMUL);
            break;
        case Operator::DIV:    
            divInstruction();
            break;
        case Operator::NEG:    
            negInstruction();
            break;
        case Operator::ASS:    
            assInstruction();
            break;
        case Operator::GA:     
            gaInstructioin();
            break;
        case Operator::ASFA:   
            asfaInstruction();
            break;
        case Operator::ASTA:   
            astaInstruction();
            break;
        case Operator::FAS:    
            fasInstruction();
            break;
        case Operator::CUT:    
            cutInstruction();
            break;
        case Operator::LAB:    
            labInstruction();
            break;
        case Operator::CMP:    
            cmpInstruction();
            break;
        case Operator::JG:     
            jumpInstruction(JG);
            break;
        case Operator::JGE:    
            jumpInstruction(JGE);
            break;
        case Operator::JL:     
            jumpInstruction(JL);
            break;
        case Operator::JLE:    
            jumpInstruction(JLE);
            break;
        case Operator::JE:     
            jumpInstruction(JE);
            break;
        case Operator::JNE:    
            jumpInstruction(JNE);
            break;
        case Operator::JMP:    
            jumpInstruction(JMP);
            break;
        case Operator::CALP:   
            calpInstruction();
            break;
        case Operator::CALF:   
            calfInstruction();
            break;
        case Operator::RTN:    
            rtnInstruction();
            break;
        case Operator::PUSH:   
            passParameters();
            break;
        case Operator::RI:     
            readOrWriteInstruction("scanf", "format_scanf_int");
            break;
        case Operator::RC:     
            readOrWriteInstruction("scanf", "format_scanf_char");
            break;
        case Operator::WS:     
            readOrWrite("printf", "format_printf_string", "offset " + qit->oper1);
            break;
        case Operator::WI:     
            readOrWriteInstruction("printf", "format_printf_int");
            break;
        case Operator::WC:     
            readOrWriteInstruction("printf", "format_printf_char");
            break;
        case Operator::NL:     
            nlInstruction();
            break;
        default:
            break;
        }
    }
    targetFile << "end" << endl;
}