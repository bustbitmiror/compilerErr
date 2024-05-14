#include "ASTFuncCallStmt.h"

ASTFuncCallStmt::ASTFuncCallStmt(tree::TerminalNode* t, std::string funcID, std::vector<ASTExpr*>* args)
	: AbstractASTStmt(t, 1 + args->size())
{
	_funcID = funcID;

	for (int i = 0; i < args->size(); i++) {
		childred->at(i + 1) = args->at(i);
	}
	_args = args;
}
