#pragma once

#include "antlr4-runtime.h"
#include "AbstractASTNode.h"
#include "ASTBlock.h"

class ASTFuncDecl : public AbstractASTNode {


public:

	ASTFuncDecl(int line, int col, std::string retType, std::string name, std::vector<std::string>* params, std::vector<std::string>* paramTypes, ASTBlock* body);
	ASTFuncDecl(tree::TerminalNode* t, std::string retType, std::string name, std::vector<std::string>* params, std::vector<std::string>* paramTypes, ASTBlock* body);

	ASTBlock* getBody();
	void setBody(ASTBlock* block);

public:
	std::string _retType;
	std::string _name;
	std::vector<std::string>* _params;
	std::vector<std::string>* _paramTypes;
};
