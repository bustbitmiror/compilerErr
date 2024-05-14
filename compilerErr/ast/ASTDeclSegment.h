#pragma once

#include "antlr4-runtime.h"
#include "AbstractASTStmt.h"
#include "ASTTypeDeclList.h"
#include "ASTVarDeclList.h"
#include "ASTFuncDeclList.h"



class ASTDeclSegment : public AbstractASTStmt {


public:


	ASTDeclSegment(int line, int col, ASTTypeDeclList* typeDecls, ASTVarDeclList* varDecls, ASTFuncDeclList* funcDecls);
	ASTDeclSegment(tree::TerminalNode* t, ASTTypeDeclList* typeDecls, ASTVarDeclList* varDecls, ASTFuncDeclList* funcDecls);

	ASTTypeDeclList* getTypeDecls();
	void setTypeDecls(ASTTypeDeclList* cond);

	ASTVarDeclList* getVarDecls();
	void setVarDecls(ASTVarDeclList* block);

	ASTFuncDeclList* getFuncDecls();
	void setFuncDecls(ASTFuncDeclList* block);


public:
	ASTTypeDeclList* typeDecls;
	ASTVarDeclList* varDecls;
	ASTFuncDeclList* funcDecls;

};