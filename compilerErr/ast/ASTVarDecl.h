#pragma once


#include "antlr4-runtime.h"
#include "AbstractASTNode.h"
#include "ASTConstExpr.h"

class ASTVarDecl : public AbstractASTNode {

public:

	ASTVarDecl(int line, int col, std::vector<std::string>* identifiers, std::string type, ASTConstExpr* optionalInit);
	ASTVarDecl(tree::TerminalNode* t, std::vector<std::string>* identifiers, std::string type, ASTConstExpr* optionalInit);

	ASTConstExpr* getInitializer();
	void setInitializer(ASTConstExpr* initial);

public:
	std::string _type;
	std::vector<std::string>* _identifiers;
};
