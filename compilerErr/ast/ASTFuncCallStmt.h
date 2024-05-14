#pragma once

#include "antlr4-runtime.h"
#include "AbstractASTStmt.h"
#include "ASTExpr.h"

class ASTFuncCallStmt : public AbstractASTStmt {

public:

	ASTFuncCallStmt(tree::TerminalNode* t, std::string funcID, std::vector<ASTExpr*>* args);

public:

	std::string _funcID;
	std::vector<ASTExpr*>* _args;

};