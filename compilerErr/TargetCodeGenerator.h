#pragma once

#include "SymbolTableManager.h"
#include "Quadruples.h"
#include "RegisterPool.h"
#include <fstream>
#include <string>
using std::ofstream;
using std::string;

class TargetCodeGenerator {
public:
    TargetCodeGenerator(ofstream&, Quadruples&, SymbolTableManager&);
    void generateCode();

private:
    ofstream& targetFile;
    StackManager stack;
    RegisterPool* registerPool;
    Quadruples& quadruples;
    SymbolTableManager& table;
    Quadruples::iterator qit;
    int level;
    int displayOffset;
    vector<Argument>* args;
    string procname;
    vector<string> parameters;


    void printAssembleHead();

    void getOper(const string& oldformat, string& newformat);

    void getDest(const string& oldformat, string& newformat, bool wantValue = false);

    void divInstruction();

    void threeOperatorInstruction(void (*func)(ofstream&,
        const string&, const string&));

    void negInstruction();

    void assInstruction();

    void gaInstructioin();

    void asfaInstruction();

    void astaInstruction();

    void fasInstruction();

    void cutInstruction();

    void labInstruction();

    void handleHead();

    void initialVariables();

    void cmpInstruction();
 
    void jumpInstruction(void (*func)(ofstream&, const string&));

    void buildDisplay(int destLevel);

    void passParameters();

    void calpInstruction();

    void calfInstruction();

    void rtnInstruction();

    void readOrWrite(const string& functionname,
        const string& formatString, const string& content);
    void readOrWriteInstruction(const string& function, const string& formatString);
    void nlInstruction();
};