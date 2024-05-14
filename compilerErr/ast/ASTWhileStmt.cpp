#include "ASTWhileStmt.h"


ASTWhileStmt::ASTWhileStmt(int row, int col, ASTExpr* cond, ASTBlock* block)
	: AbstractASTStmt(row, col, 3) {
	setCondition(cond);
	setBlock(block);
}


ASTWhileStmt::ASTWhileStmt(tree::TerminalNode* t, ASTExpr* cond, ASTBlock* block)
	: AbstractASTStmt(t, 3) {
	setCondition(cond);
	setBlock(block);
}

ASTAssignStmt* ASTWhileStmt::getInitial() {
	return reinterpret_cast<ASTAssignStmt*>(childred->at(0));
}

void ASTWhileStmt::setInitial(ASTAssignStmt* initial) {
	childred->at(0) = initial;
}

ASTExpr* ASTWhileStmt::getCondition() {
	return reinterpret_cast<ASTExpr*>(childred->at(1));
}

void ASTWhileStmt::setCondition(ASTExpr* cond) {
	childred->at(1) = cond;
}

ASTBlock* ASTWhileStmt::getBlock() {
	return reinterpret_cast<ASTBlock*>(childred->at(2));
}

void ASTWhileStmt::setBlock(ASTBlock* block) {
	childred->at(2) = block;
}

