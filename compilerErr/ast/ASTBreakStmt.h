#pragma once


#include "antlr4-runtime.h"
#include "AbstractASTStmt.h"

class ASTBreakStmt : public AbstractASTStmt {

public:
	ASTBreakStmt(tree::TerminalNode* t);

};