#pragma once


#include "ASTVarDecl.h"

class ASTVarDeclList : public AbstractASTNode {

public:
	ASTVarDeclList(int line, int col, std::vector<ASTVarDecl*>* decls);

	std::vector<AbstractASTNode*>* getDecls();
};