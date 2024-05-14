#include "ASTBinOpExpr.h"

ASTBinOpExpr::ASTBinOpExpr(int line, int col, SIMPBinOp operation, ASTExpr* left, ASTExpr* right) : ASTExpr(line, col, 2) {
	_operation = operation;
	setOperand1(left);
	setOperand2(right);
	setType("ASTBinOpExpr");
}

void ASTBinOpExpr::setOperand1(ASTExpr* lhs) {
	childred->at(0) = lhs;
}

void ASTBinOpExpr::setOperand2(ASTExpr* rhs) {
	childred->at(1) = rhs;
}

ASTExpr* ASTBinOpExpr::getOperand1() {
	return reinterpret_cast<ASTExpr*>(childred->at(0));
}

ASTExpr* ASTBinOpExpr::getOperand2() {
	return reinterpret_cast<ASTExpr*>(childred->at(1));
}
