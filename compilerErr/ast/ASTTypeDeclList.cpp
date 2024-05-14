#include "ASTTypeDeclList.h"

ASTTypeDeclList::ASTTypeDeclList(int line, int col, std::vector<ASTTypeDecl*>* decls)
	: AbstractASTNode(line, col, decls->size())
{
	childred->insert(childred->end(), decls->begin(), decls->end());

}

std::vector<AbstractASTNode*>* ASTTypeDeclList::getDecls()
{
	return childred;
}
