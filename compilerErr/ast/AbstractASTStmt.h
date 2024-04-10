#pragma once


#include "antlr4-runtime.h"
#include "AbstractASTNode.h"

using namespace antlr4;


class AbstractASTStmt : public AbstractASTNode {

public:
	AbstractASTStmt(int line, int col, int n);
	AbstractASTStmt(tree::TerminalNode* t, int n);

	std::string getCode();

private:
	std::string codeFragment;
};