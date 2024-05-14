#pragma once

#include "ASTLvalue.h"

class ASTLvalueExpr : public ASTExpr {
	
public:

	ASTLvalueExpr(ASTLvalue* lvalue);

	void setLvalue(ASTLvalue* lvalue);
	ASTLvalue* getLvalue();


};