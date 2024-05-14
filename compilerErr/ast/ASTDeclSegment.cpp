#include "ASTDeclSegment.h"

ASTDeclSegment::ASTDeclSegment(int line, int col, ASTTypeDeclList* typeDecls, ASTVarDeclList* varDecls, ASTFuncDeclList* funcDecls)
	: AbstractASTStmt(line, col, 3)
{
	setTypeDecls(typeDecls);
	setVarDecls(varDecls);
	setFuncDecls(funcDecls);
}

ASTDeclSegment::ASTDeclSegment(tree::TerminalNode* t, ASTTypeDeclList* typeDecls, ASTVarDeclList* varDecls, ASTFuncDeclList* funcDecls)
	: AbstractASTStmt(t->getSymbol()->getLine(), t->getSymbol()->getCharPositionInLine(), 3)
{
	setTypeDecls(typeDecls);
	setVarDecls(varDecls);
	setFuncDecls(funcDecls);
}

ASTTypeDeclList* ASTDeclSegment::getTypeDecls()
{
	return reinterpret_cast<ASTTypeDeclList*>(childred->at(0));
}

void ASTDeclSegment::setTypeDecls(ASTTypeDeclList* cond)
{
	childred->at(0) = cond;
}

ASTVarDeclList* ASTDeclSegment::getVarDecls()
{
	return reinterpret_cast<ASTVarDeclList*>(childred->at(1));
}

void ASTDeclSegment::setVarDecls(ASTVarDeclList* block)
{
	childred->at(1) = block;
}

ASTFuncDeclList* ASTDeclSegment::getFuncDecls()
{
	return reinterpret_cast<ASTFuncDeclList*>(childred->at(2));
}

void ASTDeclSegment::setFuncDecls(ASTFuncDeclList* block)
{
	childred->at(2) = block;
}
