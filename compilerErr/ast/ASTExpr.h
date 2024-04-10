#pragma once

#include "AbstractASTNode.h"
#include "SIMPType.h"

class ASTExpr : public AbstractASTNode {

public:
	ASTExpr(int line, int col, int n);


public:
	SIMPType type;

};