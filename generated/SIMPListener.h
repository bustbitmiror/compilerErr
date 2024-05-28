
// Generated from SIMP.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "SIMPParser.h"


namespace antlrcpptest {

/**
 * This interface defines an abstract listener for a parse tree produced by SIMPParser.
 */
class  SIMPListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSimpProgram(SIMPParser::SimpProgramContext *ctx) = 0;
  virtual void exitSimpProgram(SIMPParser::SimpProgramContext *ctx) = 0;

  virtual void enterDeclSegment(SIMPParser::DeclSegmentContext *ctx) = 0;
  virtual void exitDeclSegment(SIMPParser::DeclSegmentContext *ctx) = 0;

  virtual void enterVarDeclList(SIMPParser::VarDeclListContext *ctx) = 0;
  virtual void exitVarDeclList(SIMPParser::VarDeclListContext *ctx) = 0;

  virtual void enterFuncDeclList(SIMPParser::FuncDeclListContext *ctx) = 0;
  virtual void exitFuncDeclList(SIMPParser::FuncDeclListContext *ctx) = 0;

  virtual void enterType(SIMPParser::TypeContext *ctx) = 0;
  virtual void exitType(SIMPParser::TypeContext *ctx) = 0;

  virtual void enterTypeId(SIMPParser::TypeIdContext *ctx) = 0;
  virtual void exitTypeId(SIMPParser::TypeIdContext *ctx) = 0;

  virtual void enterVarDecl(SIMPParser::VarDeclContext *ctx) = 0;
  virtual void exitVarDecl(SIMPParser::VarDeclContext *ctx) = 0;

  virtual void enterIdList(SIMPParser::IdListContext *ctx) = 0;
  virtual void exitIdList(SIMPParser::IdListContext *ctx) = 0;

  virtual void enterOptionalInit(SIMPParser::OptionalInitContext *ctx) = 0;
  virtual void exitOptionalInit(SIMPParser::OptionalInitContext *ctx) = 0;

  virtual void enterFuncDecl(SIMPParser::FuncDeclContext *ctx) = 0;
  virtual void exitFuncDecl(SIMPParser::FuncDeclContext *ctx) = 0;

  virtual void enterParamList(SIMPParser::ParamListContext *ctx) = 0;
  virtual void exitParamList(SIMPParser::ParamListContext *ctx) = 0;

  virtual void enterRetType(SIMPParser::RetTypeContext *ctx) = 0;
  virtual void exitRetType(SIMPParser::RetTypeContext *ctx) = 0;

  virtual void enterParam(SIMPParser::ParamContext *ctx) = 0;
  virtual void exitParam(SIMPParser::ParamContext *ctx) = 0;

  virtual void enterStmtList(SIMPParser::StmtListContext *ctx) = 0;
  virtual void exitStmtList(SIMPParser::StmtListContext *ctx) = 0;

  virtual void enterStmt(SIMPParser::StmtContext *ctx) = 0;
  virtual void exitStmt(SIMPParser::StmtContext *ctx) = 0;

  virtual void enterLetStmt(SIMPParser::LetStmtContext *ctx) = 0;
  virtual void exitLetStmt(SIMPParser::LetStmtContext *ctx) = 0;

  virtual void enterReturnStmt(SIMPParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(SIMPParser::ReturnStmtContext *ctx) = 0;

  virtual void enterBreakStmt(SIMPParser::BreakStmtContext *ctx) = 0;
  virtual void exitBreakStmt(SIMPParser::BreakStmtContext *ctx) = 0;

  virtual void enterForStmt(SIMPParser::ForStmtContext *ctx) = 0;
  virtual void exitForStmt(SIMPParser::ForStmtContext *ctx) = 0;

  virtual void enterWhileStmt(SIMPParser::WhileStmtContext *ctx) = 0;
  virtual void exitWhileStmt(SIMPParser::WhileStmtContext *ctx) = 0;

  virtual void enterAssignStmt(SIMPParser::AssignStmtContext *ctx) = 0;
  virtual void exitAssignStmt(SIMPParser::AssignStmtContext *ctx) = 0;

  virtual void enterRValue(SIMPParser::RValueContext *ctx) = 0;
  virtual void exitRValue(SIMPParser::RValueContext *ctx) = 0;

  virtual void enterRcallStmt(SIMPParser::RcallStmtContext *ctx) = 0;
  virtual void exitRcallStmt(SIMPParser::RcallStmtContext *ctx) = 0;

  virtual void enterCallStmt(SIMPParser::CallStmtContext *ctx) = 0;
  virtual void exitCallStmt(SIMPParser::CallStmtContext *ctx) = 0;

  virtual void enterIfStmt(SIMPParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(SIMPParser::IfStmtContext *ctx) = 0;

  virtual void enterIfStmtTail(SIMPParser::IfStmtTailContext *ctx) = 0;
  virtual void exitIfStmtTail(SIMPParser::IfStmtTailContext *ctx) = 0;

  virtual void enterWriteStmt(SIMPParser::WriteStmtContext *ctx) = 0;
  virtual void exitWriteStmt(SIMPParser::WriteStmtContext *ctx) = 0;

  virtual void enterExpr(SIMPParser::ExprContext *ctx) = 0;
  virtual void exitExpr(SIMPParser::ExprContext *ctx) = 0;

  virtual void enterLeTerm(SIMPParser::LeTermContext *ctx) = 0;
  virtual void exitLeTerm(SIMPParser::LeTermContext *ctx) = 0;

  virtual void enterGeTerm(SIMPParser::GeTermContext *ctx) = 0;
  virtual void exitGeTerm(SIMPParser::GeTermContext *ctx) = 0;

  virtual void enterLtTerm(SIMPParser::LtTermContext *ctx) = 0;
  virtual void exitLtTerm(SIMPParser::LtTermContext *ctx) = 0;

  virtual void enterGtTerm(SIMPParser::GtTermContext *ctx) = 0;
  virtual void exitGtTerm(SIMPParser::GtTermContext *ctx) = 0;

  virtual void enterNeTerm(SIMPParser::NeTermContext *ctx) = 0;
  virtual void exitNeTerm(SIMPParser::NeTermContext *ctx) = 0;

  virtual void enterEqTerm(SIMPParser::EqTermContext *ctx) = 0;
  virtual void exitEqTerm(SIMPParser::EqTermContext *ctx) = 0;

  virtual void enterSubTerm(SIMPParser::SubTermContext *ctx) = 0;
  virtual void exitSubTerm(SIMPParser::SubTermContext *ctx) = 0;

  virtual void enterAddTerm(SIMPParser::AddTermContext *ctx) = 0;
  virtual void exitAddTerm(SIMPParser::AddTermContext *ctx) = 0;

  virtual void enterDivTerm(SIMPParser::DivTermContext *ctx) = 0;
  virtual void exitDivTerm(SIMPParser::DivTermContext *ctx) = 0;

  virtual void enterMulTerm(SIMPParser::MulTermContext *ctx) = 0;
  virtual void exitMulTerm(SIMPParser::MulTermContext *ctx) = 0;

  virtual void enterParnTerm(SIMPParser::ParnTermContext *ctx) = 0;
  virtual void exitParnTerm(SIMPParser::ParnTermContext *ctx) = 0;

  virtual void enterConstant(SIMPParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(SIMPParser::ConstantContext *ctx) = 0;

  virtual void enterExprList(SIMPParser::ExprListContext *ctx) = 0;
  virtual void exitExprList(SIMPParser::ExprListContext *ctx) = 0;

  virtual void enterLvalue(SIMPParser::LvalueContext *ctx) = 0;
  virtual void exitLvalue(SIMPParser::LvalueContext *ctx) = 0;


};

}  // namespace antlrcpptest
