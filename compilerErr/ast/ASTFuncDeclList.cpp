#include "ASTFuncDeclList.h"

ASTFuncDeclList::ASTFuncDeclList(int line, int col, std::vector<ASTFuncDecl*>* decls)
	: AbstractASTNode(line, col, decls->size())
{
	childred->insert(childred->end(), decls->begin(), decls->end());

}

std::vector<AbstractASTNode*>* ASTFuncDeclList::getDecls()
{
	return childred;
}
