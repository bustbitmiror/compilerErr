#include "ASTLvalue.h"


ASTLvalue::ASTLvalue(int line, int col, std::string lValueID/*, ASTExpr* index*/) : AbstractASTNode(line, col, 1) {
	_lValueID = lValueID;
	/*setIndex(index);*/
}

//void ASTLvalue::setIndex(ASTExpr* index) {
//	childred->at(0) = index;
//}
//
//ASTExpr* ASTLvalue::getIndex() {
//	return reinterpret_cast<ASTExpr*>(childred->at(0)); // ?
//}


std::string ASTLvalue::getIdentifier() {
	return _lValueID;
}
