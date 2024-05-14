#pragma once

#include "antlr4-runtime.h"
#include "AbstractASTNode.h"
#include "SIMPType.h"

class ASTTypeDecl : public AbstractASTNode {

public:
	ASTTypeDecl(int line, int col, std::string identifier, std::string definition);
	ASTTypeDecl(tree::TerminalNode* t, std::string identifier, std::string definition);
	ASTTypeDecl(int line, int col, std::string identifier, SIMPType basetype);
	ASTTypeDecl(tree::TerminalNode* t, std::string identifier, SIMPType basetype);

public:

	std::string _identifier;
	std::string _definition;
	SIMPType _basetype;
};
