#include "ASTLetStmt.h"

ASTLetStmt::ASTLetStmt(int line, int col, ASTDeclSegment* decls, ASTBlock* body)
	: AbstractASTStmt(line, col, 2) // ?
{
	setDecls(decls);
	setBody(body);
}

ASTLetStmt::ASTLetStmt(tree::TerminalNode* t, ASTDeclSegment* decls, ASTBlock* body)
	: AbstractASTStmt(t->getSymbol()->getLine(), t->getSymbol()->getCharPositionInLine(), 2) // ?
{
	setDecls(decls);
	setBody(body);
}

ASTDeclSegment* ASTLetStmt::getDecls()
{
	return reinterpret_cast<ASTDeclSegment*>(childred->at(0));
}

void ASTLetStmt::setDecls(ASTDeclSegment* cond)
{
	childred->at(0) = cond;
}

ASTBlock* ASTLetStmt::getBody()
{
	return reinterpret_cast<ASTBlock*>(childred->at(1));
}

void ASTLetStmt::setBody(ASTBlock* block)
{
	childred->at(1) = block;
}
