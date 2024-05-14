#pragma once

#include "antlr4-runtime.h"
#include "AbstractASTStmt.h"
#include "ASTLvalue.h"

using namespace antlr4;

class ASTAssignStmt : public AbstractASTStmt {

public:
	ASTAssignStmt(tree::TerminalNode* t, ASTLvalue* lvalue, ASTExpr* rvalue);
	ASTAssignStmt(tree::TerminalNode* t, ASTExpr* rValue);

	void setLvalue(ASTLvalue* lvalue);
	void setRvalue(ASTExpr* rvalue);
	ASTLvalue* getLvalue();
	ASTExpr* getRvalue();

};