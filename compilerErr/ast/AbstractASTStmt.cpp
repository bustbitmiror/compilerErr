#include "AbstractASTStmt.h"

AbstractASTStmt::AbstractASTStmt(int line, int col, int n) : AbstractASTNode::AbstractASTNode(line, col, n) {
}

AbstractASTStmt::AbstractASTStmt(tree::TerminalNode* t, int n) : AbstractASTNode::AbstractASTNode(t->getSymbol()->getLine(), t->getSymbol()->getCharPositionInLine(), n) {
	codeFragment = t->getParent()->getText(); // ?
}