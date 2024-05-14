#include "ASTTypeDecl.h"

ASTTypeDecl::ASTTypeDecl(int line, int col, std::string identifier, std::string definition)
	: AbstractASTNode(line, col, 0)
{
	_identifier = identifier;
	_definition = definition;

}

ASTTypeDecl::ASTTypeDecl(tree::TerminalNode* t, std::string identifier, std::string definition)
	: AbstractASTNode(t->getSymbol()->getLine(), t->getSymbol()->getCharPositionInLine(), 0)
{
	_identifier = identifier;
	_definition = definition;
}

ASTTypeDecl::ASTTypeDecl(int line, int col, std::string identifier, SIMPType basetype)
	: AbstractASTNode(line, col, 0)
{
	_identifier = identifier;
	_basetype = basetype;
}

ASTTypeDecl::ASTTypeDecl(tree::TerminalNode* t, std::string identifier, SIMPType basetype)
	: AbstractASTNode(t->getSymbol()->getLine(), t->getSymbol()->getCharPositionInLine(), 0)
{
	_identifier = identifier;
	_basetype = basetype;
}
