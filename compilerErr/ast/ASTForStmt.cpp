#include "ASTForStmt.h"


ASTForStmt::ASTForStmt(int row, int col, ASTAssignStmt* initial, ASTExpr* upper, AbstractASTStmt* block)
	: AbstractASTStmt(row, col, 3) {
	setInitial(initial);
	setUpperBound(upper);
	setBlock(block);
}

ASTForStmt::ASTForStmt(tree::TerminalNode* t, ASTAssignStmt* initial, ASTExpr* upper, AbstractASTStmt* block)
	: AbstractASTStmt(t, 3) {
	setInitial(initial);
	setUpperBound(upper);
	setBlock(block);
}

ASTAssignStmt* ASTForStmt::getInitial() {
	return reinterpret_cast<ASTAssignStmt*>(childred->at(0));
}

void ASTForStmt::setInitial(ASTAssignStmt* initial) {
	childred->at(0) = initial;
}

ASTExpr* ASTForStmt::getUpperBound() {
	return reinterpret_cast<ASTExpr*>(childred->at(1));
}

void ASTForStmt::setUpperBound(ASTExpr* cond) {
	childred->at(1) = cond;
}

ASTBlock* ASTForStmt::getBlock() {
	return reinterpret_cast<ASTBlock*>(childred->at(2));
}

void ASTForStmt::setBlock(AbstractASTStmt* block) {
	childred->at(2) = block;
}