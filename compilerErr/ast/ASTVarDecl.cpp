#include "ASTVarDecl.h"

ASTVarDecl::ASTVarDecl(int line, int col, std::vector<std::string>* identifiers, std::string type, ASTConstExpr* optionalInit)
	: AbstractASTNode(line, col, 1)
{
	_identifiers = identifiers;
	_type = type;
	if (optionalInit != nullptr) {
		setInitializer(optionalInit);
	}
}

ASTVarDecl::ASTVarDecl(tree::TerminalNode* t, std::vector<std::string>* identifiers, std::string type, ASTConstExpr* optionalInit)
	: AbstractASTNode(t, 1)
{
	_identifiers = identifiers;
	_type = type;
	if (optionalInit != nullptr) {
		setInitializer(optionalInit);
	}
}

ASTConstExpr* ASTVarDecl::getInitializer()
{
	return reinterpret_cast<ASTConstExpr*>(childred->at(0));
}

void ASTVarDecl::setInitializer(ASTConstExpr* initial)
{
	childred->at(0) = initial;
}
