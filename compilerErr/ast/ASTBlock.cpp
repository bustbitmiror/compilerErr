#include "ASTBlock.h"


ASTBlock::ASTBlock(int line, int col, std::vector<AbstractASTStmt*>* blockContent) 
	: AbstractASTStmt(line, col, blockContent->size()) {
	childred->insert(childred->begin(), blockContent->begin(), blockContent->end());
	
}

std::vector<AbstractASTNode*>* ASTBlock::getStmts() {
	return childred;
}