#pragma once

#include "type.h"

class SymbolTableManager {
public:
    STE* ste;    
    

    static SymbolTableManager& initialSymbolTableManager();    
    void home();
    void goIn(const string&);                                 
    void setTempcount(int count);                               

    int getTempcount();                                         
    void goOut();                                               
    void comeHere();                                            
    bool isHere(const string&);                                
    bool find(const string&);                                 

    void insert();                                             
    void defineArguments(STE* te, vector<Argument>& args);
    string& encodeKey();                                        
    string& encodePosition();                                   
    void decodeKey(const string&);                             
    void addString(const string& name, const string& str);      
    map<string, string>& getStringMap();                        
    map<string, STE*>* getChilds() { return position->childs; } 

private:
    STE* position;      
    int offset;         
    SymbolTableManager();                                       
    SymbolTableManager(const SymbolTableManager&);             
    SymbolTableManager& operator= (const SymbolTableManager&); 
};