#pragma once

#include "antlr4-runtime.h"
#include "AbstractASTNode.h"
#include "ASTFuncDecl.h"

class ASTFuncDeclList : public AbstractASTNode {

public:
	ASTFuncDeclList(int line, int col, std::vector<ASTFuncDecl*>* decls);

	std::vector<AbstractASTNode*>* getDecls();


};
