#pragma once

#include <string>
#include <vector>
#include <map>
using std::string;
using std::vector;
using std::map;

namespace name_ST {
    enum SymbolType {
        ILLEGAL,            
        FINISH,             

        PROCEDURE,          
        FUNCTION,           
        CONST,                
        VAR,                
        //ARRAY,              
        OF,                 
        INTEGER,            
        //CHAR,               
        BEGIN,              
        END,                
        FOR,                
        DO,                 
        WHILE,              
        IF,                 
        THEN,               
        ELSE,               
        //READ,               
        //WRITE,              
        TO,                 
        //DOWNTO,             

        IDENTIFIER,         
        NUMBER,              
        //STRING,             
        //CHARATER,           

        LEFT_BRACKET,       
        RIGHT_BRACKET,      
        LEFT_SQUARE,        
        RIGHT_SQUARE,       
        //SINGLE_QUOTE,                             
        //DOUBLE_QUOTE,       
        COMMA,              
        SEMICOLON,          
        //PERIOD,             
        PLUS,               
        MINUS,              
        ASTERISK,           
        SLASH,              
        COLON,              
        EQUAL,              
        ASSIGN,             
        LESS,               
        LESS_EQUAL,         
        GREATER,            
        GREATER_EQUAL,      
        INEQUAL             
    };
}




namespace name_IT {
    enum IdentifierType {
        ADDR,
        VAR,
        CONST,
//        ARRAY,
        PROCEDURE,
        FUNCTION
    };
}


namespace name_BT {
    enum BasicType {
        INTEGER,
        CHAR
    };
}



namespace name_OP {
    enum Operator {
        ADD,    
        SUB,    
        MUL,    
        DIV,    
        NEG,    
        ASS,  // назначение (assign) 
        GA,   // get address  
        ASTA, // assign something to address  
        ASFA, // assign something from address  
        FAS,  // assign return value to function to something  
        CUT,  // Truncate an integer into a character type (преобразование int to char)
        LAB,  // label   
        CMP,  // compare   
        JG,     
        JGE,    
        JL,     
        JLE,    
        JE,     
        JNE,    
        JMP,    
        CALP, // call procedure  
        CALF, // call function  
        RTN,  // return  
        PUSH,   
        RI,   // read int  
        RC,   // read char  
        WS,   // write string  
        WI,   // write int  
        WC,   // write char   
        NL    // new line  
    };
}

using name_ST::SymbolType;
using name_IT::IdentifierType;
using name_BT::BasicType;
using name_OP::Operator;


struct Argument {
    string name;    
    BasicType type; 
    bool vary;      

    
    Argument(const string& n, BasicType t, bool v) : name(n), type(t), vary(v) {}
};


struct STE {
    string name;                    
    IdentifierType type;            
    BasicType valueType;            
    
    int multiInt;                   
    
    
    int level;          
    int location;                   
    vector<Argument>* arguments;                    
    
private:    
    STE* father;                    
    map<string, STE*>* childs;     
    friend class SymbolTableManager;
    
public:
    STE() : arguments(NULL),
        childs(NULL),
        location(0),
        father(NULL) {}     
    ~STE() {
        delete childs;      
        delete arguments;
    }                       

    STE(const STE& ste) {
        name = ste.name;
        type = ste.type;
        valueType = ste.valueType;
        multiInt = ste.multiInt;
        level = ste.level;
        location = ste.location;
        
        arguments = ste.arguments == NULL ? NULL :
            new vector<Argument>(*ste.arguments);
        
        father = NULL;
        childs = NULL;
    }                       
};

static string stringPlusInt(const string& str, int n) {
    string newstr;
    //char num[20];
    newstr = str;
    //sprintf(num, "%d", n);

    newstr.append(std::to_string(n));
    return newstr;
}