
// Generated from Csimple.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  CsimpleParser : public antlr4::Parser {
public:
  enum {
    DeclSegment = 1, VarDeclList = 2, FuncDeclList = 3, Type = 4, TypeId = 5, 
    VarDecl = 6, IdList = 7, OptionalInit = 8, FuncDecl = 9, ParamList = 10, 
    RetType = 11, Param = 12, StmtList = 13, Stmt = 14, LetStmt = 15, ReturnStmt = 16, 
    BreakStmt = 17, ForStmt = 18, WhileStmt = 19, AssignStmt = 20, RValue = 21, 
    RcallStmt = 22, CallStmt = 23, IfStmt = 24, IfStmtTail = 25, Expr = 26, 
    OrTerm = 27, AndTerm = 28, LeTerm = 29, GeTerm = 30, LtTerm = 31, GtTerm = 32, 
    NeTerm = 33, EqTerm = 34, SubTerm = 35, AddTerm = 36, DivTerm = 37, 
    MulTerm = 38, PowTerm = 39, ParnTerm = 40, Constant = 41, ExprList = 42, 
    Lvalue = 43, To = 44, In = 45, Let = 46, Main = 47, Break = 48, Char = 49, 
    Const = 50, Continue = 51, Else = 52, Float = 53, For = 54, If = 55, 
    Int = 56, Return = 57, Void = 58, While = 59, Do = 60, Bool = 61, LeftParen = 62, 
    RightParen = 63, LeftBracket = 64, RightBracket = 65, LeftBrace = 66, 
    RightBrace = 67, Less = 68, LessEqual = 69, Greater = 70, GreaterEqual = 71, 
    Plus = 72, Minus = 73, Star = 74, Div = 75, Mod = 76, Power = 77, And = 78, 
    Or = 79, NotEq = 80, Equal = 81, Semi = 82, Comma = 83, Assign = 84, 
    Dot = 85, ID = 86, IntLit = 87, FloatLit = 88, Whitespace = 89, BlockComment = 90, 
    LineComment = 91
  };

  enum {
    RuleCProgram = 0
  };

  explicit CsimpleParser(antlr4::TokenStream *input);

  CsimpleParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CsimpleParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class CProgramContext; 

  class  CProgramContext : public antlr4::ParserRuleContext {
  public:
    CProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Main();
    antlr4::tree::TerminalNode *Let();
    antlr4::tree::TerminalNode *DeclSegment();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *StmtList();
    antlr4::tree::TerminalNode *RightBrace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CProgramContext* cProgram();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlrcpptest
