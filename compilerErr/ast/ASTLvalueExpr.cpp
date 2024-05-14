#include "ASTLvalueExpr.h"


ASTLvalueExpr::ASTLvalueExpr(ASTLvalue* lvalue)
	: ASTExpr(lvalue->_row, lvalue->_col, 1) {

	setLvalue(lvalue);
	setType("ASTLValueExpr");
}

void ASTLvalueExpr::setLvalue(ASTLvalue* lvalue) {
	childred->at(0) = lvalue;
}

ASTLvalue* ASTLvalueExpr::getLvalue() {
	return reinterpret_cast<ASTLvalue*>(childred->at(0));
}