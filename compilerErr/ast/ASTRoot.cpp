#include "ASTRoot.h"

ASTRoot::ASTRoot(tree::TerminalNode* t, ASTDeclSegment* decls, ASTBlock* mainBody)
	: AbstractASTNode(t->getSymbol()->getLine(), t->getSymbol()->getCharPositionInLine(), 1)
{
	setRoot(new ASTLetStmt(t, decls, mainBody));
}

void ASTRoot::setRoot(ASTLetStmt* root)
{
	childred->at(0) = root;
}

ASTLetStmt* ASTRoot::getRoot()
{
	return reinterpret_cast<ASTLetStmt*>(childred->at(0));
}
