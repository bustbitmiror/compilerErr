#pragma once

#include "ASTDeclSegment.h"


class ASTLetStmt : public AbstractASTStmt {

public:

	ASTLetStmt(int line, int col, ASTDeclSegment* decls, ASTBlock* body);
	ASTLetStmt(tree::TerminalNode* t, ASTDeclSegment* decls, ASTBlock* body);

	ASTDeclSegment* getDecls();
	void setDecls(ASTDeclSegment* cond);

	ASTBlock* getBody();
	void setBody(ASTBlock* block);
};