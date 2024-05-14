#pragma once

#include "antlr4-runtime.h"
#include "AbstractASTNode.h"
#include "ASTTypeDecl.h"

class ASTTypeDeclList : public AbstractASTNode {

public:
	ASTTypeDeclList(int line, int col, std::vector<ASTTypeDecl*>* decls);

	std::vector<AbstractASTNode*>* getDecls();
};
