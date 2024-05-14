#pragma once

#include <string>
#include <fstream>
using std::string;
using std::ofstream;


class StackManager {
public:
    StackManager(ofstream& file);

    void initialStack();

    void push(const string& value);

    void pop(const string& registerName);

    void allocN(int count);
    void freeN(int count);

    int getOffset();
    
    string getAddress(const string& dest, int offset, int baseoffset = 0);
    
    void getLocationOnStack(const string& dest, int offset, int baseoffset = 0);

private:
    ofstream& targetFile;
    int pushCount;
};