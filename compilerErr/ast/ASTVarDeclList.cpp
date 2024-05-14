#include "ASTVarDeclList.h"

ASTVarDeclList::ASTVarDeclList(int line, int col, std::vector<ASTVarDecl*>* decls)
	: AbstractASTNode(line, col, decls->size())
{
	childred->insert(childred->begin(), decls->begin(), decls->end());
}

std::vector<AbstractASTNode*>* ASTVarDeclList::getDecls()
{
	return childred;
}
