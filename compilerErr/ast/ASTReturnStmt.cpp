#include "ASTReturnStmt.h"

ASTReturnStmt::ASTReturnStmt(tree::TerminalNode* t, ASTExpr* returnValue)
	: AbstractASTStmt(t, 1) {
	setExpr(returnValue);
}

void ASTReturnStmt::setExpr(ASTExpr* rvalue) {
	childred->at(0) = rvalue;
}

ASTExpr* ASTReturnStmt::getExpr() {
	return reinterpret_cast<ASTExpr*>(childred->at(0));
}