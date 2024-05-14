#pragma once

#include "antlr4-runtime.h"
#include "ASTExpr.h"


class ASTConstExpr : public ASTExpr {
	
public:
	ASTConstExpr(int line, int col, std::string token, SIMPType type);

	int getAsInt();
	float getAsFloat();
	std::any get();

private:
	std::any value;

};