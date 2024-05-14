#pragma once

#include "StackManager.h"
#include <vector>
#include <map>
#include <fstream>
#include <set>
using std::set;
using std::vector;
using std::map;
using std::ofstream;


struct Temporary {
    int offset;             
    int baseoffset;         
    string registerName;    
};

class RegisterPool {
public:


    RegisterPool(const vector<string>& registers, StackManager& stack, ofstream& out);

    void initialRegisterPool();

    void home(const string& registerName);

    void home();

    string getDestRegister(const string& temporary, bool wantValue = false);
    string getDestRegister(const string& variable, int offset,
        int baseoffset = 0, bool wantValue = false);

    string getDest(const string& temporary);
    string getDest(const string& variable, int offset, int baseoffset = 0);

    string getRegister();

    void lock(const string& registerName);
    void unlock(const string& registerName);

    void setLastOffset(int);

private:

    int lastOffset;
    map<string, string>::iterator registerit;
    StackManager& stack;   
    ofstream& targetFile;   
    map<string, Temporary> temporaries; 
    map<string, string> registers;      
    set<string> lockedRegisters;        

    string getRegister(const string& variable);
};