#pragma once

#include "ASTDeclSegment.h"
#include "ASTLetStmt.h"

class ASTRoot : public AbstractASTNode {

public:

	ASTRoot(tree::TerminalNode* t, ASTDeclSegment* decls, ASTBlock* mainBody);

	void setRoot(ASTLetStmt* root);
	ASTLetStmt* getRoot();
};