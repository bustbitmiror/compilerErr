#pragma once


#include "antlr4-runtime.h"
#include "ASTAssignStmt.h"
#include "AbstractASTStmt.h"
#include "ASTBlock.h"

class ASTForStmt : public AbstractASTStmt {

public:
	ASTForStmt(int row, int col, ASTAssignStmt* initial, ASTExpr* upper, AbstractASTStmt* block);
	ASTForStmt(tree::TerminalNode* t, ASTAssignStmt* initial, ASTExpr* upper, AbstractASTStmt* block);

	ASTAssignStmt* getInitial();
	void setInitial(ASTAssignStmt* initial);
	ASTExpr* getUpperBound();
	void setUpperBound(ASTExpr* cond);
	ASTBlock* getBlock();
	void setBlock(AbstractASTStmt* block);


};
