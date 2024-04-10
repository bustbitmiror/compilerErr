#include "AbstractASTNode.h"



AbstractASTNode::AbstractASTNode(int row, int col, int n) {
	row = row;
	col = col;
	childred.resize(n);
}

AbstractASTNode::AbstractASTNode(tree::TerminalNode* node, int n) {
	this->row = node->getSymbol()->getLine();
	this->col = node->getSymbol()->getCharPositionInLine();
	childred.resize(n);
}