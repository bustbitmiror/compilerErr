#include "AbstractASTNode.h"



AbstractASTNode::AbstractASTNode(int row, int col, int n) {
	_row = row;
	_col = col;
	childred = new std::vector<AbstractASTNode*>;
	childred->resize(n);
}

AbstractASTNode::AbstractASTNode(tree::TerminalNode* node, int n) {
	this->_row = node->getSymbol()->getLine();
	this->_col = node->getSymbol()->getCharPositionInLine();
	childred = new std::vector<AbstractASTNode*>;
	childred->resize(n);
}