#pragma once 

#include <list>
#include "antlr4-runtime.h"
#include "AbstractASTStmt.h"

class ASTBlock : public AbstractASTStmt {

public:
	ASTBlock(int line, int col, std::vector<AbstractASTStmt*>* blockContent);
	std::vector<AbstractASTNode*>* getStmts();

};