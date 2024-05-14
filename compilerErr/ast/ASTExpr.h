#pragma once

#include "AbstractASTNode.h"
#include "SIMPType.h"

class ASTExpr : public AbstractASTNode {

public:
	ASTExpr(int line, int col, int n);

	void setType(std::string type);

public:
	SIMPType type;
	std::string typeClassExpr;
};