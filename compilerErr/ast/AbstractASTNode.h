#pragma once

#include "antlr4-runtime.h"

//using namespace antlrcpptest;
using namespace antlr4;


class AbstractASTNode {

public:
	int _row;
	int _col;

public:
	AbstractASTNode(){}
	~AbstractASTNode(){
		delete childred;
	}

protected:
	AbstractASTNode(int row, int col, int n);
	AbstractASTNode(tree::TerminalNode* node, int n);

public:
	std::vector<AbstractASTNode*>* childred;

};