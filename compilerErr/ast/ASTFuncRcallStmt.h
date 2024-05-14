#pragma once

#include "ASTExpr.h"
#include "AbstractASTStmt.h"
#include "ASTLvalue.h"

class ASTFuncRcallStmt : public AbstractASTStmt {

public:
	ASTFuncRcallStmt(tree::TerminalNode* t, tree::TerminalNode* lvalue, std::string funcID, std::vector<ASTExpr*>* args);

	void setLvalue(ASTLvalue* lvalue);
	ASTLvalue* getLvalue();

public:
	std::string _funcID;
	std::vector<ASTExpr*>* _args;
};
