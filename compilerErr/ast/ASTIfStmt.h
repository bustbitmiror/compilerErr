#pragma once

#include "antlr4-runtime.h"
#include "AbstractASTStmt.h"
#include "ASTExpr.h"
#include "ASTBlock.h"

class ASTIfStmt : public AbstractASTStmt {

public:

	ASTIfStmt(tree::TerminalNode* t, ASTExpr* cond, ASTBlock* ifBlock, ASTBlock* elseBlock);

	ASTExpr* getCondition();
	void setCondition(ASTExpr* cond);

	ASTBlock* getIfBlock();
	void setIfBlock(ASTBlock* block);

	ASTBlock* getElseBlock();
	void setElseBlock(ASTBlock* block);


};