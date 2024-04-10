#include "ASTBinOpExpr.h"

ASTBinOpExpr::ASTBinOpExpr(int line, int col, SIMPBinOp operation, ASTExpr* left, ASTExpr* right) : ASTExpr(line, col, 2) {
	operation = operation;
	setOperand1(left);
	setOperand2(right);
}

void ASTBinOpExpr::setOperand1(ASTExpr* lhs) {
	childred[0] = lhs;
}

void ASTBinOpExpr::setOperand2(ASTExpr* rhs) {
	childred[1] = rhs;
}

ASTExpr* ASTBinOpExpr::getOperand1() {
	return reinterpret_cast<ASTExpr*>(childred[0]);
}

ASTExpr* ASTBinOpExpr::getOperand2() {
	return reinterpret_cast<ASTExpr*>(childred[1]);
}
