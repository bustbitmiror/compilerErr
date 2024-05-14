
#include "ASTExpr.h"


ASTExpr::ASTExpr(int line, int col, int n) : AbstractASTNode(line, col, n) {
	setType("ASTExpr");
}

void ASTExpr::setType(std::string type)
{
	typeClassExpr = type;
}



