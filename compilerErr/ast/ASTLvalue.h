#pragma once

#include "antlr4-runtime.h"
#include "AbstractASTNode.h"
#include "ASTExpr.h"

class ASTLvalue : public AbstractASTNode {


public:
	ASTLvalue(int line, int col, std::string lValueID, ASTExpr* index);

	void setIndex(ASTExpr* index);
	ASTExpr* getIndex();

	std::string getIdentifier();


private:

	std::string lValueID;

};