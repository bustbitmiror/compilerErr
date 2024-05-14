#include "ASTAssignStmt.h"


ASTAssignStmt::ASTAssignStmt(tree::TerminalNode* t, ASTLvalue* lvalue, ASTExpr* rvalue) : AbstractASTStmt(t, 2) {
	
	setLvalue(lvalue);
	setRvalue(rvalue);

}

ASTAssignStmt::ASTAssignStmt(tree::TerminalNode* t, ASTExpr* rValue) : AbstractASTStmt(t, 2) {

	//setLvalue(new ASTLvalue(t->getSymbol()->getLine(), t->getSymbol()->getCharPositionInLine(), t->getText(), nullptr));
}


void ASTAssignStmt::setLvalue(ASTLvalue* lvalue) {
	childred->at(0) = lvalue;
}

void ASTAssignStmt::setRvalue(ASTExpr* rvalue) {
	childred->at(1) = rvalue;
}


ASTLvalue* ASTAssignStmt::getLvalue() {
	return reinterpret_cast<ASTLvalue*>(childred->at(0));
}

ASTExpr* ASTAssignStmt::getRvalue() {
	return reinterpret_cast<ASTExpr*>(childred->at(1));
}