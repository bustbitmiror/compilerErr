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

    SIMPTreeVisitor(SymbolTableManager&, SemanticAnalyzer&);



    void visitSimpProgram(SIMPParser::SimpProgramContext* ctx);

    void visitDeclSegment(SIMPParser::DeclSegmentContext* ctx);

    //void visitTypeDeclList(SIMPParser::TypeDeclListContext* ctx);

    void visitVarDeclList(SIMPParser::VarDeclListContext* ctx);

    void visitFuncDeclList(SIMPParser::FuncDeclListContext* ctx);

    //void visitTypeDecl(SIMPParser::TypeDeclContext* ctx);

    //virtual std::any visitType(SIMPParser::TypeContext* ctx) override;

    void visitTypeId(SIMPParser::TypeIdContext* ctx, BasicType& bType);

    void visitVarDecl(SIMPParser::VarDeclContext* ctx);

    //virtual std::any visitIdList(SIMPParser::IdListContext* ctx);

    //virtual std::any visitOptionalInit(SIMPParser::OptionalInitContext* ctx);

    void visitFuncDecl(SIMPParser::FuncDeclContext* ctx);

    //virtual std::any visitParamList(SIMPParser::ParamListContext* ctx);

    //virtual std::any visitRetType(SIMPParser::RetTypeContext* ctx);

    //virtual std::any visitParam(SIMPParser::ParamContext* ctx);

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

    //virtual std::any visitIfStmtTail(SIMPParser::IfStmtTailContext* ctx);

    ASTExpr* visitExpr(SIMPParser::ExprContext* ctx);

    //ASTExpr* visitOrTerm(SIMPParser::OrTermContext* ctx);

    //ASTExpr* visitAndTerm(SIMPParser::AndTermContext* ctx);

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

    //ASTExpr* visitPowTerm(SIMPParser::PowTermContext* ctx);

    ASTExpr* visitParnTerm(SIMPParser::ParnTermContext* ctx);

    void visitConstant(SIMPParser::ConstantContext* ctx, int& value, BasicType& type);

    ASTConstExpr* visitConstant(SIMPParser::ConstantContext* ctx);

    std::vector<ASTExpr*> visitExprList(SIMPParser::ExprListContext * ctx);

    ASTLvalue* visitLvalue(SIMPParser::LvalueContext* ctx);





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
    
    struct retLab {
        std::string nameFunc;
        std::string lab;
    };
    std::stack<retLab> retFunc;

};




