#include "ASTFuncDecl.h"

ASTFuncDecl::ASTFuncDecl(int line, int col, std::string retType, std::string name, std::vector<std::string>* params, std::vector<std::string>* paramTypes, ASTBlock* body)
	: AbstractASTNode(line, col, 1)
{
	_name = name;
	_params = params;
	_paramTypes = paramTypes;
	_retType = retType;
	setBody(body);
}

ASTFuncDecl::ASTFuncDecl(tree::TerminalNode* t, std::string retType, std::string name, std::vector<std::string>* params, std::vector<std::string>* paramTypes, ASTBlock* body)
	: AbstractASTNode(t, 1)
{
	_name = name;
	_params = params;
	_paramTypes = paramTypes;
	_retType = retType;
	setBody(body);
}

ASTBlock* ASTFuncDecl::getBody()
{
	return reinterpret_cast<ASTBlock*>(childred->at(0));
}

void ASTFuncDecl::setBody(ASTBlock* block)
{
	childred->at(0) = block;
}
