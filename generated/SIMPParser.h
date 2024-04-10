
// Generated from SIMP.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  SIMPParser : public antlr4::Parser {
public:
  enum {
    KeywordMain = 1, KeywordBreak = 2, KeywordDo = 3, KeywordElse = 4, KeywordEnd = 5, 
    KeywordFor = 6, KeywordFunction = 7, KeywordIf = 8, KeywordIn = 9, KeywordLet = 10, 
    KeywordOf = 11, KeywordThen = 12, KeywordTo = 13, KeywordType = 14, 
    KeywordVar = 15, KeywordWhile = 16, KeywordEndif = 17, KeywordBegin = 18, 
    KeywordEnddo = 19, KeywordReturn = 20, KeywordInt = 21, KeywordFloat = 22, 
    BinOpPlus = 23, BinOpMinus = 24, BinOpTimes = 25, BinOpDivide = 26, 
    BinOpPower = 27, BinOpEq = 28, BinOpNeq = 29, BinOpLt = 30, BinOpGt = 31, 
    BinOpLeq = 32, BinOpGeq = 33, BinOpAnd = 34, BinOpOr = 35, OpAssign = 36, 
    Equals = 37, Colon = 38, Semicolon = 39, Comma = 40, LParen = 41, RParen = 42, 
    LBracket = 43, RBracket = 44, ID = 45, IntLit = 46, FloatLit = 47, Comment = 48, 
    Whitespace = 49
  };

  enum {
    RuleSimpProgram = 0, RuleDeclSegment = 1, RuleTypeDeclList = 2, RuleVarDeclList = 3, 
    RuleFuncDeclList = 4, RuleTypeDecl = 5, RuleType = 6, RuleTypeId = 7, 
    RuleVarDecl = 8, RuleIdList = 9, RuleOptionalInit = 10, RuleFuncDecl = 11, 
    RuleParamList = 12, RuleRetType = 13, RuleParam = 14, RuleStmtList = 15, 
    RuleStmt = 16, RuleLetStmt = 17, RuleReturnStmt = 18, RuleBreakStmt = 19, 
    RuleForStmt = 20, RuleWhileStmt = 21, RuleAssignStmt = 22, RuleRValue = 23, 
    RuleRcallStmt = 24, RuleCallStmt = 25, RuleIfStmt = 26, RuleIfStmtTail = 27, 
    RuleExpr = 28, RuleOrTerm = 29, RuleAndTerm = 30, RuleLeTerm = 31, RuleGeTerm = 32, 
    RuleLtTerm = 33, RuleGtTerm = 34, RuleNeTerm = 35, RuleEqTerm = 36, 
    RuleSubTerm = 37, RuleAddTerm = 38, RuleDivTerm = 39, RuleMulTerm = 40, 
    RulePowTerm = 41, RuleParnTerm = 42, RuleConstant = 43, RuleExprList = 44, 
    RuleLvalue = 45
  };

  explicit SIMPParser(antlr4::TokenStream *input);

  SIMPParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SIMPParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class SimpProgramContext;
  class DeclSegmentContext;
  class TypeDeclListContext;
  class VarDeclListContext;
  class FuncDeclListContext;
  class TypeDeclContext;
  class TypeContext;
  class TypeIdContext;
  class VarDeclContext;
  class IdListContext;
  class OptionalInitContext;
  class FuncDeclContext;
  class ParamListContext;
  class RetTypeContext;
  class ParamContext;
  class StmtListContext;
  class StmtContext;
  class LetStmtContext;
  class ReturnStmtContext;
  class BreakStmtContext;
  class ForStmtContext;
  class WhileStmtContext;
  class AssignStmtContext;
  class RValueContext;
  class RcallStmtContext;
  class CallStmtContext;
  class IfStmtContext;
  class IfStmtTailContext;
  class ExprContext;
  class OrTermContext;
  class AndTermContext;
  class LeTermContext;
  class GeTermContext;
  class LtTermContext;
  class GtTermContext;
  class NeTermContext;
  class EqTermContext;
  class SubTermContext;
  class AddTermContext;
  class DivTermContext;
  class MulTermContext;
  class PowTermContext;
  class ParnTermContext;
  class ConstantContext;
  class ExprListContext;
  class LvalueContext; 

  class  SimpProgramContext : public antlr4::ParserRuleContext {
  public:
    SimpProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KeywordMain();
    antlr4::tree::TerminalNode *KeywordLet();
    DeclSegmentContext *declSegment();
    antlr4::tree::TerminalNode *KeywordIn();
    antlr4::tree::TerminalNode *KeywordBegin();
    StmtListContext *stmtList();
    antlr4::tree::TerminalNode *KeywordEnd();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpProgramContext* simpProgram();

  class  DeclSegmentContext : public antlr4::ParserRuleContext {
  public:
    DeclSegmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeDeclListContext *typeDeclList();
    VarDeclListContext *varDeclList();
    FuncDeclListContext *funcDeclList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclSegmentContext* declSegment();

  class  TypeDeclListContext : public antlr4::ParserRuleContext {
  public:
    TypeDeclListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeDeclContext *> typeDecl();
    TypeDeclContext* typeDecl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDeclListContext* typeDeclList();

  class  VarDeclListContext : public antlr4::ParserRuleContext {
  public:
    VarDeclListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VarDeclContext *> varDecl();
    VarDeclContext* varDecl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclListContext* varDeclList();

  class  FuncDeclListContext : public antlr4::ParserRuleContext {
  public:
    FuncDeclListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FuncDeclContext *> funcDecl();
    FuncDeclContext* funcDecl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncDeclListContext* funcDeclList();

  class  TypeDeclContext : public antlr4::ParserRuleContext {
  public:
    TypeDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KeywordType();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *Equals();
    TypeContext *type();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDeclContext* typeDecl();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdContext *typeId();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  TypeIdContext : public antlr4::ParserRuleContext {
  public:
    TypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KeywordInt();
    antlr4::tree::TerminalNode *KeywordFloat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdContext* typeId();

  class  VarDeclContext : public antlr4::ParserRuleContext {
  public:
    VarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KeywordVar();
    IdListContext *idList();
    antlr4::tree::TerminalNode *Colon();
    TypeContext *type();
    OptionalInitContext *optionalInit();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclContext* varDecl();

  class  IdListContext : public antlr4::ParserRuleContext {
  public:
    IdListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdListContext* idList();

  class  OptionalInitContext : public antlr4::ParserRuleContext {
  public:
    OptionalInitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpAssign();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionalInitContext* optionalInit();

  class  FuncDeclContext : public antlr4::ParserRuleContext {
  public:
    FuncDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KeywordFunction();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LParen();
    ParamListContext *paramList();
    antlr4::tree::TerminalNode *RParen();
    RetTypeContext *retType();
    antlr4::tree::TerminalNode *KeywordBegin();
    StmtListContext *stmtList();
    antlr4::tree::TerminalNode *KeywordEnd();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncDeclContext* funcDecl();

  class  ParamListContext : public antlr4::ParserRuleContext {
  public:
    ParamListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamListContext* paramList();

  class  RetTypeContext : public antlr4::ParserRuleContext {
  public:
    RetTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RetTypeContext* retType();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *Colon();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamContext* param();

  class  StmtListContext : public antlr4::ParserRuleContext {
  public:
    StmtListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtListContext* stmtList();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfStmtContext *ifStmt();
    AssignStmtContext *assignStmt();
    RcallStmtContext *rcallStmt();
    CallStmtContext *callStmt();
    WhileStmtContext *whileStmt();
    ForStmtContext *forStmt();
    BreakStmtContext *breakStmt();
    ReturnStmtContext *returnStmt();
    LetStmtContext *letStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  LetStmtContext : public antlr4::ParserRuleContext {
  public:
    LetStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KeywordLet();
    DeclSegmentContext *declSegment();
    antlr4::tree::TerminalNode *KeywordIn();
    StmtListContext *stmtList();
    antlr4::tree::TerminalNode *KeywordEnd();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LetStmtContext* letStmt();

  class  ReturnStmtContext : public antlr4::ParserRuleContext {
  public:
    ReturnStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KeywordReturn();
    ExprContext *expr();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStmtContext* returnStmt();

  class  BreakStmtContext : public antlr4::ParserRuleContext {
  public:
    BreakStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KeywordBreak();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakStmtContext* breakStmt();

  class  ForStmtContext : public antlr4::ParserRuleContext {
  public:
    ForStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KeywordFor();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *OpAssign();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *KeywordTo();
    antlr4::tree::TerminalNode *KeywordDo();
    StmtListContext *stmtList();
    antlr4::tree::TerminalNode *KeywordEnddo();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStmtContext* forStmt();

  class  WhileStmtContext : public antlr4::ParserRuleContext {
  public:
    WhileStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KeywordWhile();
    ExprContext *expr();
    antlr4::tree::TerminalNode *KeywordDo();
    StmtListContext *stmtList();
    antlr4::tree::TerminalNode *KeywordEnddo();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStmtContext* whileStmt();

  class  AssignStmtContext : public antlr4::ParserRuleContext {
  public:
    AssignStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *OpAssign();
    RValueContext *rValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignStmtContext* assignStmt();

  class  RValueContext : public antlr4::ParserRuleContext {
  public:
    RValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RValueContext* rValue();

  class  RcallStmtContext : public antlr4::ParserRuleContext {
  public:
    RcallStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *OpAssign();
    antlr4::tree::TerminalNode *LParen();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *RParen();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RcallStmtContext* rcallStmt();

  class  CallStmtContext : public antlr4::ParserRuleContext {
  public:
    CallStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LParen();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *RParen();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallStmtContext* callStmt();

  class  IfStmtContext : public antlr4::ParserRuleContext {
  public:
    IfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KeywordIf();
    ExprContext *expr();
    antlr4::tree::TerminalNode *KeywordThen();
    StmtListContext *stmtList();
    IfStmtTailContext *ifStmtTail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStmtContext* ifStmt();

  class  IfStmtTailContext : public antlr4::ParserRuleContext {
  public:
    IfStmtTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KeywordEndif();
    antlr4::tree::TerminalNode *Semicolon();
    antlr4::tree::TerminalNode *KeywordElse();
    StmtListContext *stmtList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStmtTailContext* ifStmtTail();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrTermContext *orTerm();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  OrTermContext : public antlr4::ParserRuleContext {
  public:
    OrTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AndTermContext *> andTerm();
    AndTermContext* andTerm(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BinOpOr();
    antlr4::tree::TerminalNode* BinOpOr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrTermContext* orTerm();

  class  AndTermContext : public antlr4::ParserRuleContext {
  public:
    AndTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LeTermContext *> leTerm();
    LeTermContext* leTerm(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BinOpAnd();
    antlr4::tree::TerminalNode* BinOpAnd(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndTermContext* andTerm();

  class  LeTermContext : public antlr4::ParserRuleContext {
  public:
    LeTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GeTermContext *> geTerm();
    GeTermContext* geTerm(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BinOpLeq();
    antlr4::tree::TerminalNode* BinOpLeq(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LeTermContext* leTerm();

  class  GeTermContext : public antlr4::ParserRuleContext {
  public:
    GeTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LtTermContext *> ltTerm();
    LtTermContext* ltTerm(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BinOpGeq();
    antlr4::tree::TerminalNode* BinOpGeq(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeTermContext* geTerm();

  class  LtTermContext : public antlr4::ParserRuleContext {
  public:
    LtTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GtTermContext *> gtTerm();
    GtTermContext* gtTerm(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BinOpLt();
    antlr4::tree::TerminalNode* BinOpLt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LtTermContext* ltTerm();

  class  GtTermContext : public antlr4::ParserRuleContext {
  public:
    GtTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NeTermContext *> neTerm();
    NeTermContext* neTerm(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BinOpGt();
    antlr4::tree::TerminalNode* BinOpGt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GtTermContext* gtTerm();

  class  NeTermContext : public antlr4::ParserRuleContext {
  public:
    NeTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EqTermContext *> eqTerm();
    EqTermContext* eqTerm(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BinOpNeq();
    antlr4::tree::TerminalNode* BinOpNeq(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NeTermContext* neTerm();

  class  EqTermContext : public antlr4::ParserRuleContext {
  public:
    EqTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SubTermContext *> subTerm();
    SubTermContext* subTerm(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BinOpEq();
    antlr4::tree::TerminalNode* BinOpEq(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqTermContext* eqTerm();

  class  SubTermContext : public antlr4::ParserRuleContext {
  public:
    SubTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AddTermContext *> addTerm();
    AddTermContext* addTerm(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BinOpMinus();
    antlr4::tree::TerminalNode* BinOpMinus(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubTermContext* subTerm();

  class  AddTermContext : public antlr4::ParserRuleContext {
  public:
    AddTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DivTermContext *> divTerm();
    DivTermContext* divTerm(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BinOpPlus();
    antlr4::tree::TerminalNode* BinOpPlus(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddTermContext* addTerm();

  class  DivTermContext : public antlr4::ParserRuleContext {
  public:
    DivTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MulTermContext *> mulTerm();
    MulTermContext* mulTerm(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BinOpDivide();
    antlr4::tree::TerminalNode* BinOpDivide(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DivTermContext* divTerm();

  class  MulTermContext : public antlr4::ParserRuleContext {
  public:
    MulTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PowTermContext *> powTerm();
    PowTermContext* powTerm(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BinOpTimes();
    antlr4::tree::TerminalNode* BinOpTimes(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulTermContext* mulTerm();

  class  PowTermContext : public antlr4::ParserRuleContext {
  public:
    PowTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParnTermContext *> parnTerm();
    ParnTermContext* parnTerm(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BinOpPower();
    antlr4::tree::TerminalNode* BinOpPower(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PowTermContext* powTerm();

  class  ParnTermContext : public antlr4::ParserRuleContext {
  public:
    ParnTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RParen();
    LvalueContext *lvalue();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParnTermContext* parnTerm();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntLit();
    antlr4::tree::TerminalNode *FloatLit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  ExprListContext : public antlr4::ParserRuleContext {
  public:
    ExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprListContext* exprList();

  class  LvalueContext : public antlr4::ParserRuleContext {
  public:
    LvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LBracket();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LvalueContext* lvalue();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlrcpptest
