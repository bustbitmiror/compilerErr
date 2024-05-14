#pragma once


#include "AbstractASTStmt.h"
#include "ASTExpr.h"

class ASTReturnStmt : public AbstractASTStmt {

public:
	ASTReturnStmt(tree::TerminalNode* t, ASTExpr* returnValue);

	void setExpr(ASTExpr* rvalue);
	ASTExpr* getExpr();
};