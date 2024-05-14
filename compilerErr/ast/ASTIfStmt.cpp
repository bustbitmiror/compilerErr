#include "ASTIfStmt.h"

ASTIfStmt::ASTIfStmt(tree::TerminalNode* t, ASTExpr* cond, ASTBlock* ifBlock, ASTBlock* elseBlock)
	: AbstractASTStmt(t, 3) {

	setCondition(cond);
	setIfBlock(ifBlock);
	setElseBlock(elseBlock);
}


ASTExpr* ASTIfStmt::getCondition() {
	return reinterpret_cast<ASTExpr*>(childred->at(0));
}

void ASTIfStmt::setCondition(ASTExpr* cond) {
	childred->at(0) = cond;
}

ASTBlock* ASTIfStmt::getIfBlock() {
	return reinterpret_cast<ASTBlock*>(childred->at(1));
}

void ASTIfStmt::setIfBlock(ASTBlock* block) {
	childred->at(1) = block;
}

ASTBlock* ASTIfStmt::getElseBlock() {
	return reinterpret_cast<ASTBlock*>(childred->at(2));
}

void ASTIfStmt::setElseBlock(ASTBlock* block) {
	childred->at(2) = block;
}