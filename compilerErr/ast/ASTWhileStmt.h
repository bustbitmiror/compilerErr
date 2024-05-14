#pragma once


#include "antlr4-runtime.h"
#include "AbstractASTStmt.h"
#include "ASTBlock.h"
#include "ASTExpr.h"
#include "ASTAssignStmt.h"

class ASTWhileStmt : public AbstractASTStmt {

public:

	ASTWhileStmt(int row, int col, ASTExpr* cond, ASTBlock* block);
	ASTWhileStmt(tree::TerminalNode* t, ASTExpr* cond, ASTBlock* block);

	ASTAssignStmt* getInitial();
	void setInitial(ASTAssignStmt* initial);

	ASTExpr* getCondition();
	void setCondition(ASTExpr* cond);

	ASTBlock* getBlock();
	void setBlock(ASTBlock* block);

};


