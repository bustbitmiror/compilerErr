
// Generated from SIMP.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "SIMPListener.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of SIMPListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SIMPBaseListener : public SIMPListener {
public:

  virtual void enterSimpProgram(SIMPParser::SimpProgramContext * /*ctx*/) override { }
  virtual void exitSimpProgram(SIMPParser::SimpProgramContext * /*ctx*/) override { }

  virtual void enterDeclSegment(SIMPParser::DeclSegmentContext * /*ctx*/) override { }
  virtual void exitDeclSegment(SIMPParser::DeclSegmentContext * /*ctx*/) override { }

  virtual void enterVarDeclList(SIMPParser::VarDeclListContext * /*ctx*/) override { }
  virtual void exitVarDeclList(SIMPParser::VarDeclListContext * /*ctx*/) override { }

  virtual void enterFuncDeclList(SIMPParser::FuncDeclListContext * /*ctx*/) override { }
  virtual void exitFuncDeclList(SIMPParser::FuncDeclListContext * /*ctx*/) override { }

  virtual void enterType(SIMPParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(SIMPParser::TypeContext * /*ctx*/) override { }

  virtual void enterTypeId(SIMPParser::TypeIdContext * /*ctx*/) override { }
  virtual void exitTypeId(SIMPParser::TypeIdContext * /*ctx*/) override { }

  virtual void enterVarDecl(SIMPParser::VarDeclContext * /*ctx*/) override { }
  virtual void exitVarDecl(SIMPParser::VarDeclContext * /*ctx*/) override { }

  virtual void enterIdList(SIMPParser::IdListContext * /*ctx*/) override { }
  virtual void exitIdList(SIMPParser::IdListContext * /*ctx*/) override { }

  virtual void enterOptionalInit(SIMPParser::OptionalInitContext * /*ctx*/) override { }
  virtual void exitOptionalInit(SIMPParser::OptionalInitContext * /*ctx*/) override { }

  virtual void enterFuncDecl(SIMPParser::FuncDeclContext * /*ctx*/) override { }
  virtual void exitFuncDecl(SIMPParser::FuncDeclContext * /*ctx*/) override { }

  virtual void enterParamList(SIMPParser::ParamListContext * /*ctx*/) override { }
  virtual void exitParamList(SIMPParser::ParamListContext * /*ctx*/) override { }

  virtual void enterRetType(SIMPParser::RetTypeContext * /*ctx*/) override { }
  virtual void exitRetType(SIMPParser::RetTypeContext * /*ctx*/) override { }

  virtual void enterParam(SIMPParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(SIMPParser::ParamContext * /*ctx*/) override { }

  virtual void enterStmtList(SIMPParser::StmtListContext * /*ctx*/) override { }
  virtual void exitStmtList(SIMPParser::StmtListContext * /*ctx*/) override { }

  virtual void enterStmt(SIMPParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(SIMPParser::StmtContext * /*ctx*/) override { }

  virtual void enterLetStmt(SIMPParser::LetStmtContext * /*ctx*/) override { }
  virtual void exitLetStmt(SIMPParser::LetStmtContext * /*ctx*/) override { }

  virtual void enterReturnStmt(SIMPParser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(SIMPParser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterBreakStmt(SIMPParser::BreakStmtContext * /*ctx*/) override { }
  virtual void exitBreakStmt(SIMPParser::BreakStmtContext * /*ctx*/) override { }

  virtual void enterForStmt(SIMPParser::ForStmtContext * /*ctx*/) override { }
  virtual void exitForStmt(SIMPParser::ForStmtContext * /*ctx*/) override { }

  virtual void enterWhileStmt(SIMPParser::WhileStmtContext * /*ctx*/) override { }
  virtual void exitWhileStmt(SIMPParser::WhileStmtContext * /*ctx*/) override { }

  virtual void enterAssignStmt(SIMPParser::AssignStmtContext * /*ctx*/) override { }
  virtual void exitAssignStmt(SIMPParser::AssignStmtContext * /*ctx*/) override { }

  virtual void enterRValue(SIMPParser::RValueContext * /*ctx*/) override { }
  virtual void exitRValue(SIMPParser::RValueContext * /*ctx*/) override { }

  virtual void enterRcallStmt(SIMPParser::RcallStmtContext * /*ctx*/) override { }
  virtual void exitRcallStmt(SIMPParser::RcallStmtContext * /*ctx*/) override { }

  virtual void enterCallStmt(SIMPParser::CallStmtContext * /*ctx*/) override { }
  virtual void exitCallStmt(SIMPParser::CallStmtContext * /*ctx*/) override { }

  virtual void enterIfStmt(SIMPParser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(SIMPParser::IfStmtContext * /*ctx*/) override { }

  virtual void enterIfStmtTail(SIMPParser::IfStmtTailContext * /*ctx*/) override { }
  virtual void exitIfStmtTail(SIMPParser::IfStmtTailContext * /*ctx*/) override { }

  virtual void enterWriteStmt(SIMPParser::WriteStmtContext * /*ctx*/) override { }
  virtual void exitWriteStmt(SIMPParser::WriteStmtContext * /*ctx*/) override { }

  virtual void enterExpr(SIMPParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(SIMPParser::ExprContext * /*ctx*/) override { }

  virtual void enterLeTerm(SIMPParser::LeTermContext * /*ctx*/) override { }
  virtual void exitLeTerm(SIMPParser::LeTermContext * /*ctx*/) override { }

  virtual void enterGeTerm(SIMPParser::GeTermContext * /*ctx*/) override { }
  virtual void exitGeTerm(SIMPParser::GeTermContext * /*ctx*/) override { }

  virtual void enterLtTerm(SIMPParser::LtTermContext * /*ctx*/) override { }
  virtual void exitLtTerm(SIMPParser::LtTermContext * /*ctx*/) override { }

  virtual void enterGtTerm(SIMPParser::GtTermContext * /*ctx*/) override { }
  virtual void exitGtTerm(SIMPParser::GtTermContext * /*ctx*/) override { }

  virtual void enterNeTerm(SIMPParser::NeTermContext * /*ctx*/) override { }
  virtual void exitNeTerm(SIMPParser::NeTermContext * /*ctx*/) override { }

  virtual void enterEqTerm(SIMPParser::EqTermContext * /*ctx*/) override { }
  virtual void exitEqTerm(SIMPParser::EqTermContext * /*ctx*/) override { }

  virtual void enterSubTerm(SIMPParser::SubTermContext * /*ctx*/) override { }
  virtual void exitSubTerm(SIMPParser::SubTermContext * /*ctx*/) override { }

  virtual void enterAddTerm(SIMPParser::AddTermContext * /*ctx*/) override { }
  virtual void exitAddTerm(SIMPParser::AddTermContext * /*ctx*/) override { }

  virtual void enterDivTerm(SIMPParser::DivTermContext * /*ctx*/) override { }
  virtual void exitDivTerm(SIMPParser::DivTermContext * /*ctx*/) override { }

  virtual void enterMulTerm(SIMPParser::MulTermContext * /*ctx*/) override { }
  virtual void exitMulTerm(SIMPParser::MulTermContext * /*ctx*/) override { }

  virtual void enterParnTerm(SIMPParser::ParnTermContext * /*ctx*/) override { }
  virtual void exitParnTerm(SIMPParser::ParnTermContext * /*ctx*/) override { }

  virtual void enterConstant(SIMPParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(SIMPParser::ConstantContext * /*ctx*/) override { }

  virtual void enterExprList(SIMPParser::ExprListContext * /*ctx*/) override { }
  virtual void exitExprList(SIMPParser::ExprListContext * /*ctx*/) override { }

  virtual void enterLvalue(SIMPParser::LvalueContext * /*ctx*/) override { }
  virtual void exitLvalue(SIMPParser::LvalueContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcpptest
