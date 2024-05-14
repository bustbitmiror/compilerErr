#include "ASTFuncRcallStmt.h"

ASTFuncRcallStmt::ASTFuncRcallStmt(tree::TerminalNode* t, tree::TerminalNode* lvalue, std::string funcID, std::vector<ASTExpr*>* args)
	: AbstractASTStmt(t, 1 + args->size())
{
	_funcID = funcID;
	//setLvalue(new ASTLvalue(lvalue->getSymbol()->getLine(), lvalue->getSymbol()->getCharPositionInLine(), lvalue->getText(), nullptr));

	for (int i = 0; i < args->size(); i++) {
		childred->at(i + 1) = args->at(i);
	}
	_args = args;
}

void ASTFuncRcallStmt::setLvalue(ASTLvalue* lvalue)
{
	childred->at(0) = lvalue;
}

ASTLvalue* ASTFuncRcallStmt::getLvalue()
{
	return reinterpret_cast<ASTLvalue*>(childred->at(0));
}
