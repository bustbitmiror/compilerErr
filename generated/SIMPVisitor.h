
// Generated from SIMP.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "SIMPParser.h"


namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by SIMPParser.
 */
class  SIMPVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SIMPParser.
   */
    virtual std::any visitSimpProgram(SIMPParser::SimpProgramContext *context) = 0;

    virtual std::any visitDeclSegment(SIMPParser::DeclSegmentContext *context) = 0;

    virtual std::any visitVarDeclList(SIMPParser::VarDeclListContext *context) = 0;

    virtual std::any visitFuncDeclList(SIMPParser::FuncDeclListContext *context) = 0;

    virtual std::any visitType(SIMPParser::TypeContext *context) = 0;

    virtual std::any visitTypeId(SIMPParser::TypeIdContext *context) = 0;

    virtual std::any visitVarDecl(SIMPParser::VarDeclContext *context) = 0;

    virtual std::any visitIdList(SIMPParser::IdListContext *context) = 0;

    virtual std::any visitOptionalInit(SIMPParser::OptionalInitContext *context) = 0;

    virtual std::any visitFuncDecl(SIMPParser::FuncDeclContext *context) = 0;

    virtual std::any visitParamList(SIMPParser::ParamListContext *context) = 0;

    virtual std::any visitRetType(SIMPParser::RetTypeContext *context) = 0;

    virtual std::any visitParam(SIMPParser::ParamContext *context) = 0;

    virtual std::any visitStmtList(SIMPParser::StmtListContext *context) = 0;

    virtual std::any visitStmt(SIMPParser::StmtContext *context) = 0;

    virtual std::any visitLetStmt(SIMPParser::LetStmtContext *context) = 0;

    virtual std::any visitReturnStmt(SIMPParser::ReturnStmtContext *context) = 0;

    virtual std::any visitBreakStmt(SIMPParser::BreakStmtContext *context) = 0;

    virtual std::any visitForStmt(SIMPParser::ForStmtContext *context) = 0;

    virtual std::any visitWhileStmt(SIMPParser::WhileStmtContext *context) = 0;

    virtual std::any visitAssignStmt(SIMPParser::AssignStmtContext *context) = 0;

    virtual std::any visitRValue(SIMPParser::RValueContext *context) = 0;

    virtual std::any visitRcallStmt(SIMPParser::RcallStmtContext *context) = 0;

    virtual std::any visitCallStmt(SIMPParser::CallStmtContext *context) = 0;

    virtual std::any visitIfStmt(SIMPParser::IfStmtContext *context) = 0;

    virtual std::any visitIfStmtTail(SIMPParser::IfStmtTailContext *context) = 0;

    virtual std::any visitExpr(SIMPParser::ExprContext *context) = 0;

    virtual std::any visitLeTerm(SIMPParser::LeTermContext *context) = 0;

    virtual std::any visitGeTerm(SIMPParser::GeTermContext *context) = 0;

    virtual std::any visitLtTerm(SIMPParser::LtTermContext *context) = 0;

    virtual std::any visitGtTerm(SIMPParser::GtTermContext *context) = 0;

    virtual std::any visitNeTerm(SIMPParser::NeTermContext *context) = 0;

    virtual std::any visitEqTerm(SIMPParser::EqTermContext *context) = 0;

    virtual std::any visitSubTerm(SIMPParser::SubTermContext *context) = 0;

    virtual std::any visitAddTerm(SIMPParser::AddTermContext *context) = 0;

    virtual std::any visitDivTerm(SIMPParser::DivTermContext *context) = 0;

    virtual std::any visitMulTerm(SIMPParser::MulTermContext *context) = 0;

    virtual std::any visitParnTerm(SIMPParser::ParnTermContext *context) = 0;

    virtual std::any visitConstant(SIMPParser::ConstantContext *context) = 0;

    virtual std::any visitExprList(SIMPParser::ExprListContext *context) = 0;

    virtual std::any visitLvalue(SIMPParser::LvalueContext *context) = 0;


};

}  // namespace antlrcpptest
