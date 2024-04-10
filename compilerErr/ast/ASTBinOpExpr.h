#pragma once


#include "ASTExpr.h"
#include "SIMPBinOp.h"

class ASTBinOpExpr : public ASTExpr {

public:
	ASTBinOpExpr(int line, int col, SIMPBinOp operation, ASTExpr* left, ASTExpr* right);
	void setOperand1(ASTExpr* lhs);
	void setOperand2(ASTExpr* rhs);
	ASTExpr* getOperand1();
	ASTExpr* getOperand2();

public:

	SIMPBinOp operation;
};
