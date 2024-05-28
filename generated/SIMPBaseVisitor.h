
// Generated from SIMP.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "SIMPVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of SIMPVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SIMPBaseVisitor : public SIMPVisitor {
public:

  virtual std::any visitSimpProgram(SIMPParser::SimpProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclSegment(SIMPParser::DeclSegmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDeclList(SIMPParser::VarDeclListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDeclList(SIMPParser::FuncDeclListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(SIMPParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeId(SIMPParser::TypeIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDecl(SIMPParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdList(SIMPParser::IdListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionalInit(SIMPParser::OptionalInitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDecl(SIMPParser::FuncDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamList(SIMPParser::ParamListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRetType(SIMPParser::RetTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam(SIMPParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtList(SIMPParser::StmtListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt(SIMPParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLetStmt(SIMPParser::LetStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStmt(SIMPParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBreakStmt(SIMPParser::BreakStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStmt(SIMPParser::ForStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStmt(SIMPParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignStmt(SIMPParser::AssignStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRValue(SIMPParser::RValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRcallStmt(SIMPParser::RcallStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallStmt(SIMPParser::CallStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(SIMPParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmtTail(SIMPParser::IfStmtTailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWriteStmt(SIMPParser::WriteStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(SIMPParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLeTerm(SIMPParser::LeTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeTerm(SIMPParser::GeTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLtTerm(SIMPParser::LtTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGtTerm(SIMPParser::GtTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNeTerm(SIMPParser::NeTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqTerm(SIMPParser::EqTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubTerm(SIMPParser::SubTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddTerm(SIMPParser::AddTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDivTerm(SIMPParser::DivTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulTerm(SIMPParser::MulTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParnTerm(SIMPParser::ParnTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant(SIMPParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprList(SIMPParser::ExprListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLvalue(SIMPParser::LvalueContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpptest
