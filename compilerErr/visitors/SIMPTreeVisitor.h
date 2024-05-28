#pragma once
#include "SIMPVisitor.h"
#include "SIMPParser.h"

#include "ASTRoot.h"
#include "ASTLvalue.h"
#include "ASTReturnStmt.h"
#include "ASTBreakStmt.h"
#include "ASTFuncRcallStmt.h"
#include "ASTIfStmt.h"
#include "ASTForStmt.h"
#include "ASTWhileStmt.h"
#include "ASTFuncCallStmt.h"
#include "ASTLvalueExpr.h"
#include "ASTBinOpExpr.h"
#include "SIMPType.h"


#include "..\SymbolTableManager.h"
#include "..\SemanticAnalyzer.h"
#include "..\ErrorHandler.h"

using namespace antlrcpptest;
using namespace antlr4;


class ASTRoot;
class ASTDeclSegment;
class ASTTypeDeclList;
class ASTVarDeclList;
class ASTFuncDeclList;
class ASTTypeDecl;
class ASTVarDecl;
class ASTFuncDecl;
class ASTBlock;
class AbstractASTStmt;
class ASTLetStmt;
class ASTReturnStmt;
class ASTBreakStmt;
class ASTLvalue;
class ASTIfStmt;
class ASTFuncCallStmt;
class ASTFuncRcallStmt;
class ASTExpr;
class ASTAssignStmt;
class ASTWhileStmt;
class ASTForStmt;




class SIMPTreeVisitor{

public:

    SIMPTreeVisitor(SymbolTableManager&, SemanticAnalyzer&, ErrorHandler&);



    void visitSimpProgram(SIMPParser::SimpProgramContext* ctx);

    void visitDeclSegment(SIMPParser::DeclSegmentContext* ctx);

    void visitVarDeclList(SIMPParser::VarDeclListContext* ctx);

    void visitFuncDeclList(SIMPParser::FuncDeclListContext* ctx);

    void visitTypeId(SIMPParser::TypeIdContext* ctx, BasicType& bType);

    void visitVarDecl(SIMPParser::VarDeclContext* ctx);

    void visitFuncDecl(SIMPParser::FuncDeclContext* ctx);

    void visitStmtList(SIMPParser::StmtListContext* ctx);

    void visitStmt(SIMPParser::StmtContext* ctx);

    void visitLetStmt(SIMPParser::LetStmtContext* ctx);

    void visitReturnStmt(SIMPParser::ReturnStmtContext* ctx);

    void visitBreakStmt(SIMPParser::BreakStmtContext* ctx);

    void visitForStmt(SIMPParser::ForStmtContext* ctx);

    void visitWhileStmt(SIMPParser::WhileStmtContext* ctx);

    void visitAssignStmt(SIMPParser::AssignStmtContext* ctx);

    void visitRValue(SIMPParser::RValueContext* ctx);

    void visitRcallStmt(SIMPParser::RcallStmtContext* ctx);

    void visitCallStmt(SIMPParser::CallStmtContext* ctx);

    void visitIfStmt(SIMPParser::IfStmtContext* ctx);

    ASTExpr* visitExpr(SIMPParser::ExprContext* ctx);

    ASTExpr* visitLeTerm(SIMPParser::LeTermContext* ctx);

    ASTExpr* visitGeTerm(SIMPParser::GeTermContext* ctx);

    ASTExpr* visitLtTerm(SIMPParser::LtTermContext* ctx);

    ASTExpr* visitGtTerm(SIMPParser::GtTermContext* ctx);

    ASTExpr* visitNeTerm(SIMPParser::NeTermContext* ctx);

    ASTExpr* visitEqTerm(SIMPParser::EqTermContext* ctx);

    ASTExpr* visitSubTerm(SIMPParser::SubTermContext* ctx);

    ASTExpr* visitAddTerm(SIMPParser::AddTermContext* ctx);

    ASTExpr* visitDivTerm(SIMPParser::DivTermContext* ctx);

    ASTExpr* visitMulTerm(SIMPParser::MulTermContext* ctx);

    ASTExpr* visitParnTerm(SIMPParser::ParnTermContext* ctx);

    void visitConstant(SIMPParser::ConstantContext* ctx, int& value, BasicType& type);

    ASTConstExpr* visitConstant(SIMPParser::ConstantContext* ctx);

    std::vector<ASTExpr*> visitExprList(SIMPParser::ExprListContext * ctx);

    ASTLvalue* visitLvalue(SIMPParser::LvalueContext* ctx);

    void visitWriteStmt(SIMPParser::WriteStmtContext* ctx);



    // condition analysis
    void onExprCondition(ASTExpr* expr/*, IdentifierType typeOperations*/, bool& operExists, SymbolType& condition);
    void onExprOperand(ASTExpr* expr, std::string& value, BasicType& type, bool& variable);
    void onBinOpExprCond(ASTBinOpExpr* binop/*, IdentifierType typeOperations*/, bool& operExists, std::string& dest, SymbolType& condition);

    void onLvalue(ASTLvalue* lvalue, std::string& value, BasicType& type, bool& variable);
    void onConstExpr(ASTConstExpr* constExpr, std::string& value, BasicType& type, bool& variable);

    // simple condition analysis (add, sub, mul, div, and just var, const)
    // value - dest
    void onExpr(ASTExpr* expr, std::string& value, BasicType& type, bool& variable);
    void onBinOpExpr(ASTBinOpExpr* binop, std::string& value, BasicType& type, bool& variable);



private:

    SemanticAnalyzer& semanticAnalyzer;
    SymbolTableManager& table;
    ErrorHandler& errHnd;
    
    struct retLab {
        std::string nameFunc;
        std::string lab;
    };
    std::stack<retLab> retFunc;

};




