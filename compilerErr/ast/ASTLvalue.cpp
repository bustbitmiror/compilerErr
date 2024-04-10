#include "ASTLvalue.h"


ASTLvalue::ASTLvalue(int line, int col, std::string lValueID, ASTExpr* index) : AbstractASTNode(line, col, 1) {
	lValueID = lValueID;
	setIndex(index);
}

void ASTLvalue::setIndex(ASTExpr* index) {
	childred[0] = index;
}

ASTExpr* ASTLvalue::getIndex() {
	return reinterpret_cast<ASTExpr*>(childred[0]); // ?
}


std::string ASTLvalue::getIdentifier() {
	return lValueID;
}
