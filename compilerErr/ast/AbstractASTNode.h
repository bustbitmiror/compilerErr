#pragma once

#include "antlr4-runtime.h"

//using namespace antlrcpptest;
using namespace antlr4;


class AbstractASTNode {

public:
	int row;
	int col;

public:
	AbstractASTNode(){}

protected:
	AbstractASTNode(int row, int col, int n);
	AbstractASTNode(tree::TerminalNode* node, int n);

public:
	std::vector<AbstractASTNode*> childred;

};