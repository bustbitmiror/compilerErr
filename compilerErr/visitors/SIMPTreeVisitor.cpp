#include "SIMPTreeVisitor.h"


SIMPTreeVisitor::SIMPTreeVisitor(SymbolTableManager& stm, SemanticAnalyzer& sa, ErrorHandler& err)
	: table(stm), semanticAnalyzer(sa), errHnd(err)
{
}

void SIMPTreeVisitor::visitSimpProgram(SIMPParser::SimpProgramContext* ctx) {

	std::string labEndFunc = "main_end";

	retLab func;
	func.nameFunc = "_main";
	func.lab = labEndFunc;
	retFunc.push(func);

	visitDeclSegment(ctx->declSegment());

	semanticAnalyzer.funcprocStart();
	int tempcount = semanticAnalyzer.getTemporaryCount();
	visitStmtList(ctx->stmtList());
	tempcount = semanticAnalyzer.getTemporaryCount() - tempcount;
	table.setTempcount(tempcount);
	semanticAnalyzer.label(labEndFunc);
	semanticAnalyzer.funcprocReturn();
	retFunc.pop();
	
	// visitStmtList(ctx->stmtList());

	//return new ASTRoot(ctx->KeywordMain(), visitDeclSegment(ctx->declSegment()), visitStmtList(ctx->stmtList()));
}

void SIMPTreeVisitor::visitDeclSegment(SIMPParser::DeclSegmentContext* ctx)
{
	/*SIMPParser::FuncDeclListContext* ctx_f = nullptr;
	SIMPParser::TypeDeclListContext* ctx_t = nullptr;
	SIMPParser::VarDeclListContext* ctx_v = nullptr;

	try {
		ctx_f = ctx->funcDeclList();
	}
	catch (std::exception e) {
		ctx_f = nullptr;
	}

	try {
		ctx_t = ctx->typeDeclList();
	}
	catch (std::exception e) {
		ctx_t = nullptr;
	}

	try {
		ctx_v = ctx->varDeclList();
	}
	catch (std::exception e) {
		ctx_v = nullptr;
	}*/


	visitVarDeclList(ctx->varDeclList());
	visitFuncDeclList(ctx->funcDeclList());





	//return new ASTDeclSegment(0, 0, visitTypeDeclList(ctx_t), visitVarDeclList(ctx_v), visitFuncDeclList(ctx->funcDeclList()));
}

//void SIMPTreeVisitor::visitTypeDeclList(SIMPParser::TypeDeclListContext* ctx)
//{
//	if (ctx == nullptr) {
//		return;
//	}
//
//	std::vector<ASTTypeDecl*>* decls = new std::vector<ASTTypeDecl*>;
//	for (auto& decl : ctx->typeDecl()) {
//		//decls->push_back(visitTypeDecl(decl));
//	}
//
//	/*return new ASTTypeDeclList(
//		0,
//		0,
//		decls
//	);*/
//}

void SIMPTreeVisitor::visitVarDeclList(SIMPParser::VarDeclListContext* ctx)
{
	if (ctx == nullptr) {
		return;
	}

	//std::vector<ASTVarDecl*>* decls = new std::vector<ASTVarDecl*>;
	for (auto& decl : ctx->varDecl()) {
		visitVarDecl(decl);
	}
	

}

void SIMPTreeVisitor::visitFuncDeclList(SIMPParser::FuncDeclListContext* ctx)
{
	if (ctx == nullptr) {
		return;
	}

	//std::vector<ASTFuncDecl*>* decls = new std::vector<ASTFuncDecl*>;
	for (auto& decl : ctx->funcDecl()) {
		visitFuncDecl(decl);
	}


	/*return new ASTFuncDeclList(
		0,
		0,
		decls
	);*/
}

//void SIMPTreeVisitor::visitTypeDecl(SIMPParser::TypeDeclContext* ctx)
//{
//	if (ctx->type()->ID() != nullptr) {
//		/*return new ASTTypeDecl(
//			ctx->KeywordType(),
//			ctx->ID()->getText(),
//			ctx->type()->ID()->getText()
//		);*/
//	}
//	else if (ctx->type()->typeId() != nullptr) {
//		/*return new ASTTypeDecl(
//			ctx->KeywordType(),
//			ctx->ID()->getText(),
//			visitTypeId(ctx->type()->typeId())
//		);*/
//	}
//	else {
//		throw new IllegalArgumentException("unknown data type declarations (function visitTypeDecl)");
//	}
//}

void SIMPTreeVisitor::visitTypeId(SIMPParser::TypeIdContext* ctx, BasicType& bType)
{
	if (ctx->KeywordInt() != nullptr) {
		bType = BasicType::INTEGER;
		//return SIMPType::INT;
	}
	//else if (ctx->KeywordFloat() != nullptr) {

	//	//return SIMPType::FLOAT;
	//}
	else {
		errHnd.printError("unknown data type (function visitTypeId)");
		throw new IllegalArgumentException("unknown data type (function visitTypeId)");
	}
}

void SIMPTreeVisitor::visitVarDecl(SIMPParser::VarDeclContext* ctx)
{
	

	if (ctx->optionalInit()->OpAssign() != nullptr) {
		
		std::vector<std::string> names;
		//std::string id;
		BasicType type;
		int value = 0;
		
		for (auto& t : ctx->idList()->ID()) {

			if (table.isHere(t->getText())) {
				errHnd.printError("redefined var (" + t->getText() + ")");
				throw IllegalStateException("redefined var (" + t->getText() + ")");
			}
			else {

				names.push_back(t->getText());
				
			}

		}

		visitConstant(ctx->optionalInit()->constant(), value, type);

		semanticAnalyzer.varDefine(names, type, &value);

		



	}
	else {

		std::vector<std::string> names;
		
		IdentifierType idType = IdentifierType::VAR;
		BasicType bType;

		for (auto& t : ctx->idList()->ID()) {

			if (table.isHere(t->getText())) {
				errHnd.printError("A variable with that name already exists (" + t->getText() + ")");
				throw new IllegalStateException("A variable with that name already exists (" + t->getText() + ")");
			}
			else {

				names.push_back(t->getText());
				
			}

		}

		visitTypeId(ctx->type()->typeId(), bType);

		semanticAnalyzer.varDefine(names, bType, nullptr);

	}



	/*return new ASTVarDecl(
		ctx->KeywordVar(),
		ids,
		ctx->type()->getText(),
		(ctx->optionalInit()->OpAssign() != nullptr ? visitConstant(ctx->optionalInit()->constant()) : nullptr)
	);*/
}

void SIMPTreeVisitor::visitFuncDecl(SIMPParser::FuncDeclContext* ctx)
{
	std::vector<Argument> args;

	if (ctx->retType()->type()->getText() == "void") {

		if (table.isHere(ctx->ID()->getText())) {
			errHnd.printError("Redefined function (" + ctx->ID()->getText() + ")");
			throw new IllegalStateException("Redefined function (" + ctx->ID()->getText() + ")");
		}

		for (auto& param : ctx->paramList()->param()) {

			std::vector<std::string> names;
			bool vary = false;
			BasicType type;

			names.push_back(param->ID()->getText());
			visitTypeId(param->type()->typeId(), type);

			semanticAnalyzer.formalParameterAdd(names, type, vary, args);

		}


		semanticAnalyzer.procedureDefine(ctx->ID()->getText(), args);


	}
	else {

		BasicType returnType;

		if (table.isHere(ctx->ID()->getText())) {
			errHnd.printError("Redefined function (" + ctx->ID()->getText() + ")");
			throw new IllegalStateException("Redefined function (" + ctx->ID()->getText() + ")");
		}
		
		for (auto& param : ctx->paramList()->param()) {
			
			std::vector<std::string> names;
			bool vary = false;
			BasicType type;

			names.push_back(param->ID()->getText());
			visitTypeId(param->type()->typeId(), type);

			semanticAnalyzer.formalParameterAdd(names, type, vary, args);

		}

		visitTypeId(ctx->retType()->type()->typeId(), returnType);

		semanticAnalyzer.functionDefine(ctx->ID()->getText(), args, returnType);





	}

	table.goIn(ctx->ID()->getText());
	std::string labEndFunc = ctx->ID()->getText() + "_end";
	retLab func;
	func.nameFunc = ctx->ID()->getText();
	func.lab = labEndFunc;
	retFunc.push(func);

	SIMPParser::LetStmtContext* letStmt = nullptr;

	for (auto& stmt : ctx->stmtList()->stmt()) {
		if (stmt->letStmt() != nullptr) {
			//visitLetStmt(stmt->letStmt());
			letStmt = stmt->letStmt();
			break;
		}
	}

	if (letStmt != nullptr) {

		visitDeclSegment(letStmt->declSegment());
		
		semanticAnalyzer.funcprocStart();
		int tempcount = semanticAnalyzer.getTemporaryCount();
		visitStmtList(letStmt->stmtList());
		tempcount = semanticAnalyzer.getTemporaryCount() - tempcount;
		table.setTempcount(tempcount);
		semanticAnalyzer.label(labEndFunc);
		semanticAnalyzer.funcprocReturn();
		retFunc.pop();
		table.goOut();
	}
	else {
		semanticAnalyzer.funcprocStart();
		int tempcount = semanticAnalyzer.getTemporaryCount();
		visitStmtList(ctx->stmtList());
		tempcount = semanticAnalyzer.getTemporaryCount() - tempcount;
		table.setTempcount(tempcount);
		semanticAnalyzer.label(labEndFunc);
		semanticAnalyzer.funcprocReturn();
		retFunc.pop();
		table.goOut();
	}

	

}

void SIMPTreeVisitor::visitStmtList(SIMPParser::StmtListContext* ctx)
{
	if (ctx == nullptr) {
		return;
	}

	//std::vector<AbstractASTStmt*>* stmts = new std::vector<AbstractASTStmt*>;
	for (auto& stmt : ctx->stmt()) {
		visitStmt(stmt);
	}


}

void SIMPTreeVisitor::visitStmt(SIMPParser::StmtContext* ctx)
{
	if (ctx->ifStmt() != nullptr) {
		visitIfStmt(ctx->ifStmt());
	}
	else if (ctx->assignStmt() != nullptr) {
		visitAssignStmt(ctx->assignStmt());
	}
	else if (ctx->callStmt() != nullptr) {
		visitCallStmt(ctx->callStmt());
	}
	else if (ctx->rcallStmt() != nullptr) {
		visitRcallStmt(ctx->rcallStmt());
	}
	else if (ctx->whileStmt() != nullptr) {
		visitWhileStmt(ctx->whileStmt());
	}
	else if (ctx->breakStmt() != nullptr) {
		return visitBreakStmt(ctx->breakStmt());
	}
	else if (ctx->returnStmt() != nullptr) {
		visitReturnStmt(ctx->returnStmt());
	}
	else if (ctx->forStmt() != nullptr) {
		visitForStmt(ctx->forStmt());
	}
	else if (ctx->letStmt() != nullptr) {
		//return visitLetStmt(ctx->letStmt());
	}
	else if (ctx->writeStmt() != nullptr) {
		visitWriteStmt(ctx->writeStmt());
	}
	else {
		errHnd.printError("Unreachable STMT");
		throw new IllegalStateException("Unreachable STMT");
	}

	
}

void SIMPTreeVisitor::visitLetStmt(SIMPParser::LetStmtContext* ctx)
{
	visitDeclSegment(ctx->declSegment());
	//return new ASTLetStmt(ctx->KeywordLet(), visitDeclSegment(ctx->declSegment()), visitStmtList(ctx->stmtList()));
}

void SIMPTreeVisitor::visitReturnStmt(SIMPParser::ReturnStmtContext* ctx)
{
	if (ctx->expr() == nullptr) {
		throw new IllegalStateException("the expression is missing");
	}

	std::string value;
	BasicType valuetype;
	BasicType functype;
	bool variable;

	retLab func = retFunc.top();
	table.find(func.nameFunc);

	if (func.nameFunc == "_main" && table.ste == NULL) {
		semanticAnalyzer.jumpAnyway(func.lab);
		return;
	}

	if (table.ste == NULL) {
		throw new IllegalStateException("unknown (return)");
	}

	if (table.ste->name != func.nameFunc) {
		throw new IllegalStateException("The functions do not match");
	}

	std::string nameFunc = table.encodeKey();

	switch (table.ste->type)
	{
	case IdentifierType::FUNCTION: {
		functype = table.ste->valueType;

		onExpr(visitExpr(ctx->expr()), value, valuetype, variable);
		semanticAnalyzer.functionAssign(nameFunc, value, functype, valuetype);
		semanticAnalyzer.jumpAnyway(func.lab);
		break;
	}
	case IdentifierType::PROCEDURE: {
		semanticAnalyzer.jumpAnyway(func.lab);
		break;
	}
	default:
		throw new IllegalStateException("unknown ste (return)");
		break;
	}

	
	//std::string name = table.ste->name;

	//return new ASTReturnStmt(ctx->KeywordReturn(), visitExpr(ctx->expr()));
}

void SIMPTreeVisitor::visitBreakStmt(SIMPParser::BreakStmtContext* ctx)
{
	//return new ASTBreakStmt(ctx->KeywordBreak());
}

void SIMPTreeVisitor::visitForStmt(SIMPParser::ForStmtContext* ctx)
{
	//tree::TerminalNode* forKwd = ctx->KeywordFor();
	tree::TerminalNode* assignID = ctx->ID();

	std::string step;
	SymbolType condition;
	std::string forvar;
	std::string start;
	std::string end;
	std::string tmp;

	std::string startlabel = semanticAnalyzer.newLabel("loop_for_start");
	std::string endlabel = semanticAnalyzer.newLabel("loop_for_end");

	BasicType forvartype;
	BasicType t;
	bool variable;

	table.find(assignID->getText());
	
	if (table.ste == NULL) {
		errHnd.printError("Undefined ID " + assignID->getText() + " in stmt for");
		throw new IllegalStateException("Undefined ID " + assignID->getText() + " in stmt for");
	}
	else if (table.ste->type != IdentifierType::VAR) {
		errHnd.printError("Undefined ID " + assignID->getText() + " in stmt for");
		throw new IllegalStateException("Undefined ID " + assignID->getText() + " in stmt for");
	}
	else {
		forvar = table.encodeKey();
		forvartype = table.ste->valueType;
	}

	//t = BasicType::INTEGER;
	onExpr(visitExpr(ctx->expr(0)), start, t, variable);

	semanticAnalyzer.assign(forvar, start, forvartype, t);

	if (ctx->KeywordTo() != nullptr) {
		semanticAnalyzer.intToString(1, step);
		condition = SymbolType::LESS_EQUAL;
	}
	else if (ctx->KeywordDownto() != nullptr) {
		semanticAnalyzer.intToString(-1, step);
		condition = SymbolType::GREATER_EQUAL;
	}
	else {
		errHnd.printError("the absence of the to|downto keyword");
		throw new IllegalStateException("the absence of the to|downto keyword");
	}

	//t = BasicType::INTEGER;
	onExpr(visitExpr(ctx->expr(1)), end, t, variable);

	semanticAnalyzer.label(startlabel);
	semanticAnalyzer.compare(forvar, end);
	semanticAnalyzer.dissatisfyJump(condition, endlabel);

	visitStmtList(ctx->stmtList());

	semanticAnalyzer.addition(forvar, step, tmp);
	semanticAnalyzer.assign(forvar, tmp, forvartype, BasicType::INTEGER);
	semanticAnalyzer.jumpAnyway(startlabel);
	semanticAnalyzer.label(endlabel);
	
}

void SIMPTreeVisitor::visitWhileStmt(SIMPParser::WhileStmtContext* ctx)
{
	
	SymbolType condition;
	std::string lab = semanticAnalyzer.newLabel("loop_while");
	std::string lab_end = semanticAnalyzer.newLabel("loop_while_end");

	semanticAnalyzer.label(lab);

	bool operExists = false;
	onExprCondition(visitExpr(ctx->expr()), operExists, condition);

	semanticAnalyzer.dissatisfyJump(condition, lab_end);

	visitStmtList(ctx->stmtList());

	semanticAnalyzer.jumpAnyway(lab);

	semanticAnalyzer.label(lab_end);

}

void SIMPTreeVisitor::visitAssignStmt(SIMPParser::AssignStmtContext* ctx)
{
	//tree::TerminalNode* opAssign = ctx->OpAssign();

	std::string name;
	std::string value;
	BasicType nameType;
	BasicType valueType;
	bool variable;
	bool nameAddr;

	if (ctx->lvalue() == nullptr) {
		errHnd.printError("lvalue empty");
		throw IllegalStateException("lvalue empty");
	}

	std::string ID = ctx->lvalue()->ID()->getText();

	table.find(ID);
	if (table.ste == NULL) {
		errHnd.printError("UNDEFINED var (" + ID + ")");
		throw IllegalStateException("UNDEFINED var (" + ID + ")");
	}

	name = table.encodeKey();
	nameType = table.ste->valueType;

	switch (table.ste->type)
	{
	default: {

		nameAddr = table.ste->type == IdentifierType::ADDR ? true : false;
		//valueType = BasicType::INTEGER;
		onExpr(visitExpr(ctx->rValue()->expr()), value, valueType, variable);

		if (!nameAddr) {
			semanticAnalyzer.assign(name, value, nameType, valueType);
		}
		else {
			semanticAnalyzer.assignToAddress(name, value, nameType, valueType);
		}

		break;
	}
		
	}
	
}

void SIMPTreeVisitor::visitRValue(SIMPParser::RValueContext* ctx)
{
	//return visitExpr(ctx->expr());
}

void SIMPTreeVisitor::visitRcallStmt(SIMPParser::RcallStmtContext* ctx)
{
	tree::TerminalNode* lvalueID = ctx->ID(0);
	assert(lvalueID != nullptr);

	tree::TerminalNode* functionNameID = ctx->ID(1);
	assert(functionNameID != nullptr);

	std::string name;
	std::string value;
	BasicType nameType;
	BasicType valueType;
	bool variable;
	bool nameAddr;

	variable = false;
	
	table.find(lvalueID->getText());
	if (table.ste == NULL) {
		errHnd.printError("Undefined id (" + lvalueID->getText() + ")");
		throw IllegalStateException("Undefined id (" + lvalueID->getText() + ")");
	}

	name = table.encodeKey();
	nameType = table.ste->valueType;


	bool hasValue;
	std::string nameFunc;

	table.find(functionNameID->getText());
	if (table.ste == NULL) {
		throw new IllegalStateException("Undefined function (" + functionNameID->getText() + ")");
	}

	nameFunc = table.encodeKey();
	switch (table.ste->type)
	{
	case IdentifierType::FUNCTION: {

		hasValue = true;
		valueType = table.ste->valueType;
		break;
	}
	case IdentifierType::PROCEDURE: {
		hasValue = false;
		break;
	}
	default:
		throw new IllegalStateException("can not call (" + functionNameID->getText() + ")");
		break;
	}

	table.decodeKey(nameFunc);
	std::vector<Argument>* args = table.ste->arguments;
	std::vector<Argument>::iterator argit;
	std::string valuePar;
	BasicType typePar;
	bool variablePar;

	std::vector<ASTExpr*> argsList = visitExprList(ctx->exprList());

	if (args == NULL && argsList.size() != 0) {
		throw new IllegalStateException("there should not be real parameters function (" + functionNameID->getText() + ")");
	}
	else if (args != NULL && argsList.size() == 0) {
		throw new IllegalStateException("there should not be real parameters function (" + functionNameID->getText() + ")");
	}
	else if (args != NULL && argsList.size() != 0) {
		argit = args->begin();

		if (argit == args->end()) {
			throw new IllegalStateException("too many arg");
		}


		for (int i = 0; i < argsList.size(); i++) {
			onExpr(argsList[i], valuePar, typePar, variablePar);

			if (argit->vary == true && variablePar == false) {
				throw new IllegalStateException("Unvariable");
			}

			if (argit->vary) {
				semanticAnalyzer.passAddress(valuePar, argit->type, typePar);
			}
			else {
				semanticAnalyzer.passParameter(valuePar, argit->type, typePar);
			}

			argit++;
		}

		if (argit != args->end()) {
			throw new IllegalStateException("too less arg");
		}
	}

	

	if (hasValue) {
		semanticAnalyzer.callFunction(nameFunc, value);
		semanticAnalyzer.assign(name, value, nameType, valueType);
	}
	else {
		semanticAnalyzer.callProcedure(nameFunc);
	}


}

void SIMPTreeVisitor::visitCallStmt(SIMPParser::CallStmtContext* ctx)
{
	tree::TerminalNode* functionNameID = ctx->ID();
	assert(functionNameID != nullptr);


	bool hasValue;
	std::string name;
	std::string value;
	BasicType type;

	table.find(functionNameID->getText());
	if (table.ste == NULL) {
		throw new IllegalStateException("Undefined function (" + functionNameID->getText() + ")");
	}
	
	name = table.encodeKey();

	switch (table.ste->type)
	{
	case IdentifierType::FUNCTION: {

		hasValue = true;
		type = table.ste->valueType;

		break;
	}
	case IdentifierType::PROCEDURE: {

		hasValue = false;

		break;
	}

	default:
		throw new IllegalStateException("can not call");
		break;
	}

	table.decodeKey(name);
	std::vector<Argument>* args = table.ste->arguments;
	std::vector<Argument>::iterator argit;
	std::string valuePar;
	BasicType typePar;
	bool variablePar;
	std::vector<ASTExpr*> argsList = visitExprList(ctx->exprList());

	if (args == NULL && argsList.size() != 0) {
		throw new IllegalStateException("there should not be real parameters");
	}
	else if (args != NULL && argsList.size() == 0) {
		throw new IllegalStateException("there should not be real parameters");
	}
	else if (args != NULL && argsList.size() != 0) {
		argit = args->begin();

		if (argit == args->end()) {
			throw new IllegalStateException("there should not be real parameters");
		}

		//std::vector<ASTExpr*> argsList = visitExprList(ctx->exprList());

		for (int i = 0; i < argsList.size(); i++) {

			onExpr(argsList[i], valuePar, typePar, variablePar);

			if (argit->vary == true && variablePar == false) {
				throw new IllegalStateException("unvariable");
			}

			if (argit->vary) {
				semanticAnalyzer.passAddress(valuePar, argit->type, typePar);
			}
			else {
				semanticAnalyzer.passParameter(valuePar, argit->type, typePar);
			}

			argit++;
		}

		if (argit != args->end()) {
			throw new IllegalStateException("too less arg");
		}
	}


	if (hasValue) {
		semanticAnalyzer.callFunction(name, value);
	}
	else {
		semanticAnalyzer.callProcedure(name);
	}

}

void SIMPTreeVisitor::visitIfStmt(SIMPParser::IfStmtContext* ctx)
{
	SymbolType condition;

	std::string elseLabel = semanticAnalyzer.newLabel("condition_else");
	std::string endLabel = semanticAnalyzer.newLabel("condition_end");
	
	
	bool operExists = false;
	onExprCondition(visitExpr(ctx->expr()), operExists, condition);

	semanticAnalyzer.dissatisfyJump(condition, elseLabel);

	visitStmtList(ctx->stmtList());

	semanticAnalyzer.jumpAnyway(endLabel);
	semanticAnalyzer.label(elseLabel);



	SIMPParser::IfStmtTailContext* tail = ctx->ifStmtTail();

	visitStmtList(tail->stmtList());


	semanticAnalyzer.label(endLabel);

	//ASTExpr* cond = visitExpr(ctx->expr());
	//ASTBlock* ifBlock = visitStmtList(ctx->stmtList());
	//ASTBlock* elseBlock = visitStmtList(tail->stmtList());
	

	/*return new ASTIfStmt(
		keyWrdIf,
		cond,
		ifBlock,
		elseBlock
	);*/
}

ASTExpr* SIMPTreeVisitor::visitExpr(SIMPParser::ExprContext* ctx)
{
	return visitLeTerm(ctx->leTerm());
}

//ASTExpr* SIMPTreeVisitor::visitOrTerm(SIMPParser::OrTermContext* ctx)
//{
//	std::vector<SIMPParser::AndTermContext*> terms = ctx->andTerm();
//
//	if (terms.size() == 1) {
//		return visitAndTerm(terms.at(0));
//	}
//	else if (terms.size() > 1) {
//		ASTExpr* currentNode = visitAndTerm(terms.at(0));
//		for (int i = 1; i < terms.size(); i++) {
//			ASTExpr* newNode = visitAndTerm(terms.at(i));
//			currentNode = new ASTBinOpExpr(
//				currentNode->_row,
//				currentNode->_col,
//				SIMPBinOp::Or,
//				newNode,
//				currentNode
//			);
//		}
//		return currentNode;
//	}
//
//	throw new IllegalStateException("Unreachable (function visitOrTerm)");
//}
//
//ASTExpr* SIMPTreeVisitor::visitAndTerm(SIMPParser::AndTermContext* ctx)
//{
//	std::vector<SIMPParser::LeTermContext*> terms = ctx->leTerm();
//
//	if (terms.size() == 1) {
//		return visitLeTerm(terms.at(0));
//	}
//	else if (terms.size() > 1) {
//		ASTExpr* currentNode = visitLeTerm(terms.at(0));
//		for (int i = 1; i < terms.size(); i++) {
//			ASTExpr* newNode = visitLeTerm(terms.at(i));
//			currentNode = new ASTBinOpExpr(
//				currentNode->_row,
//				currentNode->_col,
//				SIMPBinOp::And,
//				newNode,
//				currentNode
//			);
//		}
//		return currentNode;
//	}
//
//	throw new IllegalStateException("Unreachable (function visitAndTerm)");
//}

ASTExpr* SIMPTreeVisitor::visitLeTerm(SIMPParser::LeTermContext* ctx)
{
	std::vector<SIMPParser::GeTermContext*> terms = ctx->geTerm();

	if (terms.size() == 1) {
		return visitGeTerm(terms.at(0));
	}
	else if (terms.size() > 1) {
		ASTExpr* currentNode = visitGeTerm(terms.at(0));
		for (int i = 1; i < terms.size(); i++) {
			ASTExpr* newNode = visitGeTerm(terms.at(i));
			currentNode = new ASTBinOpExpr(
				currentNode->_row,
				currentNode->_col,
				SIMPBinOp::Le,
				newNode,
				currentNode
			);
		}
		return currentNode;
	}

	throw new IllegalStateException("Unreachable (function visitLeTerm)");
}

ASTExpr* SIMPTreeVisitor::visitGeTerm(SIMPParser::GeTermContext* ctx)
{
	std::vector<SIMPParser::LtTermContext*> terms = ctx->ltTerm();

	if (terms.size() == 1) {
		return visitLtTerm(terms.at(0));
	}
	else if (terms.size() > 1) {
		ASTExpr* currentNode = visitLtTerm(terms.at(0));
		for (int i = 1; i < terms.size(); i++) {
			ASTExpr* newNode = visitLtTerm(terms.at(i));
			currentNode = new ASTBinOpExpr(
				currentNode->_row,
				currentNode->_col,
				SIMPBinOp::Ge,
				newNode,
				currentNode
			);
		}
		return currentNode;
	}

	throw new IllegalStateException("Unreachable (function visitGeTerm)");
}

ASTExpr* SIMPTreeVisitor::visitLtTerm(SIMPParser::LtTermContext* ctx)
{
	std::vector<SIMPParser::GtTermContext*> terms = ctx->gtTerm();

	if (terms.size() == 1) {
		return visitGtTerm(terms.at(0));
	}
	else if (terms.size() > 1) {
		ASTExpr* currentNode = visitGtTerm(terms.at(0));
		for (int i = 1; i < terms.size(); i++) {
			ASTExpr* newNode = visitGtTerm(terms.at(i));
			currentNode = new ASTBinOpExpr(
				currentNode->_row,
				currentNode->_col,
				SIMPBinOp::Lt,
				newNode,
				currentNode
			);
		}
		return currentNode;
	}

	throw new IllegalStateException("Unreachable (function visitLtTerm)");
}

ASTExpr* SIMPTreeVisitor::visitGtTerm(SIMPParser::GtTermContext* ctx)
{
	std::vector<SIMPParser::NeTermContext*> terms = ctx->neTerm();

	if (terms.size() == 1) {
		return visitNeTerm(terms.at(0));
	}
	else if (terms.size() > 1) {
		ASTExpr* currentNode = visitNeTerm(terms.at(0));
		for (int i = 1; i < terms.size(); i++) {
			ASTExpr* newNode = visitNeTerm(terms.at(i));
			currentNode = new ASTBinOpExpr(
				currentNode->_row,
				currentNode->_col,
				SIMPBinOp::Gt,
				newNode,
				currentNode
			);
		}
		return currentNode;
	}

	throw new IllegalStateException("Unreachable (function visitGtTerm)");
}

ASTExpr* SIMPTreeVisitor::visitNeTerm(SIMPParser::NeTermContext* ctx)
{
	std::vector<SIMPParser::EqTermContext*> terms = ctx->eqTerm();

	if (terms.size() == 1) {
		return visitEqTerm(terms.at(0));
	}
	else if (terms.size() > 1) {
		ASTExpr* currentNode = visitEqTerm(terms.at(0));
		for (int i = 1; i < terms.size(); i++) {
			ASTExpr* newNode = visitEqTerm(terms.at(i));
			currentNode = new ASTBinOpExpr(
				currentNode->_row,
				currentNode->_col,
				SIMPBinOp::Ne,
				newNode,
				currentNode
			);
		}
		return currentNode;
	}

	throw new IllegalStateException("Unreachable (function visitNeTerm)");
}

ASTExpr* SIMPTreeVisitor::visitEqTerm(SIMPParser::EqTermContext* ctx)
{
	std::vector<SIMPParser::SubTermContext*> terms = ctx->subTerm();

	if (terms.size() == 1) {
		return visitSubTerm(terms.at(0));
	}
	else if (terms.size() > 1) {
		ASTExpr* currentNode = visitSubTerm(terms.at(0));
		for (int i = 1; i < terms.size(); i++) {
			ASTExpr* newNode = visitSubTerm(terms.at(i));
			currentNode = new ASTBinOpExpr(
				currentNode->_row,
				currentNode->_col,
				SIMPBinOp::Eq,
				newNode,
				currentNode
			);
		}
		return currentNode;
	}

	throw new IllegalStateException("Unreachable (function visitEqTerm)");
}

ASTExpr* SIMPTreeVisitor::visitSubTerm(SIMPParser::SubTermContext* ctx)
{
	std::vector<SIMPParser::AddTermContext*> terms = ctx->addTerm();

	if (terms.size() == 1) {
		return visitAddTerm(terms.at(0));
	}
	else if (terms.size() > 1) {
		ASTExpr* currentNode = visitAddTerm(terms.at(0));
		for (int i = 1; i < terms.size(); i++) {
			ASTExpr* newNode = visitAddTerm(terms.at(i));
			currentNode = new ASTBinOpExpr(
				currentNode->_row,
				currentNode->_col,
				SIMPBinOp::Sub,
				newNode,
				currentNode
			);
		}
		return currentNode;
	}

	throw new IllegalStateException("Unreachable (function visitSubTerm)");
}

ASTExpr* SIMPTreeVisitor::visitAddTerm(SIMPParser::AddTermContext* ctx)
{
	std::vector<SIMPParser::DivTermContext*> terms = ctx->divTerm();

	if (terms.size() == 1) {
		return visitDivTerm(terms.at(0));
	}
	else if (terms.size() > 1) {
		ASTExpr* currentNode = visitDivTerm(terms.at(0));
		for (int i = 1; i < terms.size(); i++) {
			ASTExpr* newNode = visitDivTerm(terms.at(i));
			currentNode = new ASTBinOpExpr(
				currentNode->_row,
				currentNode->_col,
				SIMPBinOp::Add,
				newNode,
				currentNode
			);
		}
		return currentNode;
	}

	throw new IllegalStateException("Unreachable (function visitAddTerm)");
}

ASTExpr* SIMPTreeVisitor::visitDivTerm(SIMPParser::DivTermContext* ctx)
{
	std::vector<SIMPParser::MulTermContext*> terms = ctx->mulTerm();

	if (terms.size() == 1) {
		return visitMulTerm(terms.at(0));
	}
	else if (terms.size() > 1) {
		ASTExpr* currentNode = visitMulTerm(terms.at(0));
		for (int i = 1; i < terms.size(); i++) {
			ASTExpr* newNode = visitMulTerm(terms.at(i));
			currentNode = new ASTBinOpExpr(
				currentNode->_row,
				currentNode->_col,
				SIMPBinOp::Div,
				newNode,
				currentNode
			);
		}
		return currentNode;
	}

	throw new IllegalStateException("Unreachable (function visitDivTerm)");
}

ASTExpr* SIMPTreeVisitor::visitMulTerm(SIMPParser::MulTermContext* ctx)
{
	std::vector<SIMPParser::ParnTermContext*> terms = ctx->parnTerm();

	if (terms.size() == 1) {
		return visitParnTerm(terms.at(0));
	}
	else if (terms.size() > 1) {
		ASTExpr* currentNode = visitParnTerm(terms.at(terms.size() - 1));
		for (int i = terms.size() - 2; i >= 0; i--) {
			ASTExpr* newNode = visitParnTerm(terms.at(i));
			currentNode = new ASTBinOpExpr(
				currentNode->_row,
				currentNode->_col,
				SIMPBinOp::Mul,
				newNode,
				currentNode
			);
		}
		return currentNode;
	}

	throw new IllegalStateException("Unreachable (function visitMulTerm)");
}

//ASTExpr* SIMPTreeVisitor::visitPowTerm(SIMPParser::PowTermContext* ctx)
//{
//	std::vector<SIMPParser::ParnTermContext*> terms = ctx->parnTerm();
//
//	if (terms.size() == 1) {
//		return visitParnTerm(terms.at(0));
//	}
//	else if (terms.size() > 1){
//		ASTExpr* currentNode = visitParnTerm(terms.at(terms.size() - 1));
//		for (int i = terms.size() - 2; i >= 0; i--) {
//			ASTExpr* newNode = visitParnTerm(terms.at(i));
//			currentNode = new ASTBinOpExpr(
//				currentNode->row,
//				currentNode->col,
//				SIMPBinOp::Pow,
//				newNode,
//				currentNode
//			);
//		}
//		return currentNode;
//	}
//	
//	throw new IllegalStateException("Unreachable (function visitPowTerm)");
//}

ASTExpr* SIMPTreeVisitor::visitParnTerm(SIMPParser::ParnTermContext* ctx)
{
	if (ctx->constant() != nullptr) {
		SIMPParser::ConstantContext* constCtx = ctx->constant();

		if (constCtx->FloatLit() != nullptr) {
			tree::TerminalNode* floatLit = constCtx->FloatLit();
			return new ASTConstExpr(
				floatLit->getSymbol()->getLine(),
				floatLit->getSymbol()->getCharPositionInLine(),
				floatLit->getText(),
				SIMPType::FLOAT
			);
		}
		else if (constCtx->IntLit() != nullptr) {
			tree::TerminalNode* intLit = constCtx->IntLit();
			return new ASTConstExpr(
				intLit->getSymbol()->getLine(),
				intLit->getSymbol()->getCharPositionInLine(),
				intLit->getText(),
				SIMPType::INT
			);
		}
	}
	else if (ctx->expr() != nullptr) {
		return visitExpr(ctx->expr());
	}
	else if (ctx->lvalue() != nullptr) {
		return new ASTLvalueExpr(
			visitLvalue(ctx->lvalue())
		);
	}

	throw new IllegalStateException("Unreachable");
	
	
}

void SIMPTreeVisitor::visitConstant(SIMPParser::ConstantContext* ctx, int& value, BasicType& type)
{
	SIMPParser::ConstantContext* constCtx = ctx;

	if (constCtx->FloatLit() != nullptr) {
		tree::TerminalNode* floatLit = constCtx->FloatLit();
		/*return new ASTConstExpr(
			floatLit->getSymbol()->getLine(),
			floatLit->getSymbol()->getCharPositionInLine(),
			floatLit->getText(),
			SIMPType::FLOAT
		);*/
	}
	else if (constCtx->IntLit() != nullptr) {
		tree::TerminalNode* intLit = constCtx->IntLit();
		/*return new ASTConstExpr(
			intLit->getSymbol()->getLine(),
			intLit->getSymbol()->getCharPositionInLine(),
			intLit->getText(),
			SIMPType::INT
		);*/

		type = BasicType::INTEGER;
		value = std::stoul(intLit->getText());
	}
	else {
		throw new IllegalArgumentException("unknown data type (function visitConstant)");
	}
	
}

ASTConstExpr* SIMPTreeVisitor::visitConstant(SIMPParser::ConstantContext* ctx) {
	SIMPParser::ConstantContext* constCtx = ctx;

	if (constCtx->FloatLit() != nullptr) {
		tree::TerminalNode* floatLit = constCtx->FloatLit();
		return new ASTConstExpr(
			floatLit->getSymbol()->getLine(),
			floatLit->getSymbol()->getCharPositionInLine(),
			floatLit->getText(),
			SIMPType::FLOAT
		);
	}
	else if (constCtx->IntLit() != nullptr) {
		tree::TerminalNode* intLit = constCtx->IntLit();
		return new ASTConstExpr(
			intLit->getSymbol()->getLine(),
			intLit->getSymbol()->getCharPositionInLine(),
			intLit->getText(),
			SIMPType::INT
		);

	}
	else {
		throw new IllegalArgumentException("unknown data type (function visitConstant)");
	}
}

std::vector<ASTExpr*> SIMPTreeVisitor::visitExprList(SIMPParser::ExprListContext* ctx)
{
	std::vector<ASTExpr*> exprs;

	for (auto& expr : ctx->expr()) {
		exprs.push_back(visitExpr(expr));
	}

	return exprs;
}

ASTLvalue* SIMPTreeVisitor::visitLvalue(SIMPParser::LvalueContext* ctx)
{
	assert(ctx->ID() != nullptr);
	tree::TerminalNode* ID = ctx->ID();
	//ASTExpr* index = nullptr;

	/*if (ctx->expr() != nullptr) {
		index = visitExpr(ctx->expr());
		assert(index != nullptr);
	}*/
	
	ASTLvalue* value = new ASTLvalue(
		ID->getSymbol()->getLine(),
		ID->getSymbol()->getCharPositionInLine(),
		ID->getText()
	);
	return value;
}

void SIMPTreeVisitor::visitWriteStmt(SIMPParser::WriteStmtContext* ctx)
{
	if (ctx->expr() == nullptr) {
		semanticAnalyzer.newline();
		return;
	}

	std::string name;
	BasicType type;
	bool v;

	onExpr(visitExpr(ctx->expr()), name, type, v);

	if (type == BasicType::INTEGER) {
		semanticAnalyzer.writeInteger(name);
	}
	semanticAnalyzer.newline();


}

void SIMPTreeVisitor::onExprCondition(ASTExpr* expr, bool& operExists, SymbolType& condition)
{

	//bool b = dynamicCast<ASTLvalueExpr*>(expr);
	std::string type = expr->typeClassExpr;


	if (type == "ASTBinOpExpr") {
		ASTBinOpExpr* binop = static_cast<ASTBinOpExpr*>(expr);
		std::string dest = "";
		onBinOpExprCond(binop, operExists, dest, condition);
	}
	else {
		throw new IllegalStateException("not expr condition");
	}

}

void SIMPTreeVisitor::onLvalue(ASTLvalue* lvalue, std::string& value, BasicType& type, bool& variable)
{
	std::string ID = lvalue->getIdentifier();

	table.find(ID);

	if (table.ste == NULL) {
		throw new IllegalArgumentException("unknown identifier (" + ID + ")");
	}

	switch (table.ste->type)
	{
	case IdentifierType::VAR: {

		value = table.encodeKey();
		type = table.ste->valueType;
		variable = true;
		break;
	}
	default:
		break;
	}

	//return ID;
}

void SIMPTreeVisitor::onConstExpr(ASTConstExpr* constExpr, std::string& value, BasicType& type, bool& variable)
{
	SIMPType t = constExpr->type;

	switch (t)
	{
	case INT: {
		type = BasicType::INTEGER;
		int val = constExpr->getAsInt();
		//value = std::to_string(val);
		semanticAnalyzer.intToString(val, value);
		variable = false;
		break;
	}
	//case FLOAT:
	//	break;
	//case VOID:
	//	break;
	default:
		break;
	}

}

void SIMPTreeVisitor::onExpr(ASTExpr* expr, std::string& value, BasicType& type, bool& variable)
{
	std::string typeClass = expr->typeClassExpr;


	if (typeClass == "ASTBinOpExpr") {
		ASTBinOpExpr* binop = static_cast<ASTBinOpExpr*>(expr);
		onBinOpExpr(binop, value, type, variable);
	}
	else if (typeClass == "ASTConstExpr"){
		ASTConstExpr* constExpr = static_cast<ASTConstExpr*>(expr);
		onConstExpr(constExpr, value, type, variable);
	}
	else if (typeClass == "ASTLValueExpr") {
		ASTLvalueExpr* lvalue = static_cast<ASTLvalueExpr*>(expr);
		onLvalue(lvalue->getLvalue(), value, type, variable);
	}
	else {
		throw new IllegalStateException("not expr condition");
	}

}

void SIMPTreeVisitor::onBinOpExpr(ASTBinOpExpr* binop, std::string& value, BasicType& type, bool& variable)
{
	switch (binop->_operation) {
	case Eq:
	case Ne:
	case Lt:
	case Gt:
	case Le:
	case Ge: {
		throw new IllegalArgumentException("Logical expressions are not supported in this case.");
		break;
	}
	}



	switch (binop->_operation)
	{
	case Add: {
		std::string dest;
		std::string value1;
		BasicType type1;
		bool variable1;

		std::string value2;
		BasicType type2;
		bool variable2;

		if (binop->getOperand1()->typeClassExpr == "ASTConstExpr" || binop->getOperand1()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand1(), value1, type1, variable1);
		}
		else {
			onBinOpExpr(static_cast<ASTBinOpExpr*>(binop->getOperand1()), value, type, variable);
			value1 = value;
			type1 = type;
			variable1 = variable;
		}

		if (binop->getOperand2()->typeClassExpr == "ASTConstExpr" || binop->getOperand2()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand2(), value2, type2, variable2);
		}
		else {
			onBinOpExpr(static_cast<ASTBinOpExpr*>(binop->getOperand2()), value, type, variable);
			value2 = value;
			type2 = type;
			variable2 = variable;
		}

		semanticAnalyzer.addition(value2, value1, dest);
		type = type2;
		variable = variable2;
		value = dest;
		break;
	}
	case Sub: {
		std::string dest;
		std::string value1;
		BasicType type1;
		bool variable1;

		std::string value2;
		BasicType type2;
		bool variable2;

		if (binop->getOperand1()->typeClassExpr == "ASTConstExpr" || binop->getOperand1()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand1(), value1, type1, variable1);
		}
		else {
			onBinOpExpr(static_cast<ASTBinOpExpr*>(binop->getOperand1()), value, type, variable);
			value1 = value;
			type1 = type;
			variable1 = variable;
		}

		if (binop->getOperand2()->typeClassExpr == "ASTConstExpr" || binop->getOperand2()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand2(), value2, type2, variable2);
		}
		else {
			onBinOpExpr(static_cast<ASTBinOpExpr*>(binop->getOperand2()), value, type, variable);
			value2 = value;
			type2 = type;
			variable2 = variable;
		}

		semanticAnalyzer.subtraction(value2, value1, dest);
		type = type2;
		variable = variable2;
		value = dest;
		break;
	}
	case Mul: {
		std::string dest;
		std::string value1;
		BasicType type1;
		bool variable1;

		std::string value2;
		BasicType type2;
		bool variable2;

		if (binop->getOperand1()->typeClassExpr == "ASTConstExpr" || binop->getOperand1()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand1(), value1, type1, variable1);
		}
		else {
			onBinOpExpr(static_cast<ASTBinOpExpr*>(binop->getOperand1()), value, type, variable);
			value1 = value;
			type1 = type;
			variable1 = variable;
		}

		if (binop->getOperand2()->typeClassExpr == "ASTConstExpr" || binop->getOperand2()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand2(), value2, type2, variable2);
		}
		else {
			onBinOpExpr(static_cast<ASTBinOpExpr*>(binop->getOperand2()), value, type, variable);
			value2 = value;
			type2 = type;
			variable2 = variable;
		}

		semanticAnalyzer.multiplicatioin(value2, value1, dest);
		type = type2;
		variable = variable2;
		value = dest;
		break;
	}
	case Div: {
		std::string dest;
		std::string value1;
		BasicType type1;
		bool variable1;

		std::string value2;
		BasicType type2;
		bool variable2;

		if (binop->getOperand1()->typeClassExpr == "ASTConstExpr" || binop->getOperand1()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand1(), value1, type1, variable1);
		}
		else {
			onBinOpExpr(static_cast<ASTBinOpExpr*>(binop->getOperand1()), value, type, variable);
			value1 = value;
			type1 = type;
			variable1 = variable;
		}

		if (binop->getOperand2()->typeClassExpr == "ASTConstExpr" || binop->getOperand2()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand2(), value2, type2, variable2);
		}
		else {
			onBinOpExpr(static_cast<ASTBinOpExpr*>(binop->getOperand2()), value, type, variable);
			value2 = value;
			type2 = type;
			variable2 = variable;
		}

		semanticAnalyzer.division(value2, value1, dest);
		type = type2;
		variable = variable2;
		value = dest;
		break;
	}
	default:
		break;
	}



}

void SIMPTreeVisitor::onExprOperand(ASTExpr* expr, std::string& value, BasicType& type, bool& variable)
{
	if (expr->typeClassExpr == "ASTConstExpr") {
		ASTConstExpr* constExpr = static_cast<ASTConstExpr*>(expr);
		onConstExpr(constExpr, value, type, variable);
	}
	else if (expr->typeClassExpr == "ASTLValueExpr") {
		ASTLvalueExpr* lvalueExpr = static_cast<ASTLvalueExpr*>(expr);
		onLvalue(lvalueExpr->getLvalue(), value, type, variable);
	}
}

void SIMPTreeVisitor::onBinOpExprCond(ASTBinOpExpr* binop, bool& operExists, std::string& dest, SymbolType& condition)
{

	switch (binop->_operation) {
		case Eq:
		case Ne:
		case Lt:
		case Gt:
		case Le:
		case Ge: {
			if (operExists) {
				throw new IllegalStateException("multiple operators are not allowed");
			}
			else {
				operExists = true;
			}
			break;
		}
	}

	switch (binop->_operation) {
	case Add: {
		std::string _dest;
		std::string value1;
		BasicType type1;
		bool variable1;

		std::string value2;
		BasicType type2;
		bool variable2;

		if (binop->getOperand1()->typeClassExpr == "ASTConstExpr" || binop->getOperand1()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand1(), value1, type1, variable1);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand1()), operExists, dest, condition);
			value1 = dest;
		}

		if (binop->getOperand2()->typeClassExpr == "ASTConstExpr" || binop->getOperand2()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand2(), value2, type2, variable2);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand2()), operExists, dest, condition);
			value2 = dest;
		}

		semanticAnalyzer.addition(value2, value1, _dest);
		dest = _dest;
		break;
	}
	case Sub: {
		std::string _dest;
		std::string value1;
		BasicType type1;
		bool variable1;

		std::string value2;
		BasicType type2;
		bool variable2;

		if (binop->getOperand1()->typeClassExpr == "ASTConstExpr" || binop->getOperand1()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand1(), value1, type1, variable1);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand1()), operExists, dest, condition);
			value1 = dest;
		}

		if (binop->getOperand2()->typeClassExpr == "ASTConstExpr" || binop->getOperand2()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand2(), value2, type2, variable2);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand2()), operExists, dest, condition);
			value2 = dest;
		}

		semanticAnalyzer.subtraction(value2, value1, _dest);
		dest = _dest;
		break;
	}
	case Mul: {
		std::string _dest;
		std::string value1;
		BasicType type1;
		bool variable1;

		std::string value2;
		BasicType type2;
		bool variable2;

		if (binop->getOperand1()->typeClassExpr == "ASTConstExpr" || binop->getOperand1()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand1(), value1, type1, variable1);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand1()), operExists, dest, condition);
			value1 = dest;
		}

		if (binop->getOperand2()->typeClassExpr == "ASTConstExpr" || binop->getOperand2()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand2(), value2, type2, variable2);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand2()), operExists, dest, condition);
			value2 = dest;
		}

		semanticAnalyzer.multiplicatioin(value2, value1, _dest);
		dest = _dest;
		break;
	}
	case Div: {
		std::string _dest;
		std::string value1;
		BasicType type1;
		bool variable1;

		std::string value2;
		BasicType type2;
		bool variable2;

		if (binop->getOperand1()->typeClassExpr == "ASTConstExpr" || binop->getOperand1()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand1(), value1, type1, variable1);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand1()), operExists, dest, condition);
			value1 = dest;
		}

		if (binop->getOperand2()->typeClassExpr == "ASTConstExpr" || binop->getOperand2()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand2(), value2, type2, variable2);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand2()), operExists, dest, condition);
			value2 = dest;
		}

		semanticAnalyzer.division(value2, value1, _dest);
		dest = _dest;
		break;
	}
	case Eq: {

		std::string value1;
		BasicType type1;
		bool variable1;

		std::string value2;
		BasicType type2;
		bool variable2;

		if (binop->getOperand1()->typeClassExpr == "ASTConstExpr" || binop->getOperand1()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand1(), value1, type1, variable1);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand1()), operExists, dest, condition);
			value1 = dest;
		}

		if (binop->getOperand2()->typeClassExpr == "ASTConstExpr" || binop->getOperand2()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand2(), value2, type2, variable2);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand2()), operExists, dest, condition);
			value2 = dest;
		}

		semanticAnalyzer.compare(value2, value1);
		condition = SymbolType::EQUAL;
		break;
	}
	case Ne: {
		std::string value1;
		BasicType type1;
		bool variable1;

		std::string value2;
		BasicType type2;
		bool variable2;

		if (binop->getOperand1()->typeClassExpr == "ASTConstExpr" || binop->getOperand1()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand1(), value1, type1, variable1);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand1()), operExists, dest, condition);
			value1 = dest;
		}

		if (binop->getOperand2()->typeClassExpr == "ASTConstExpr" || binop->getOperand2()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand2(), value2, type2, variable2);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand2()), operExists, dest, condition);
			value2 = dest;
		}

		semanticAnalyzer.compare(value2, value1);
		condition = SymbolType::INEQUAL;
		break;
	}
	case Lt: {
		std::string value1;
		BasicType type1;
		bool variable1;

		std::string value2;
		BasicType type2;
		bool variable2;

		if (binop->getOperand1()->typeClassExpr == "ASTConstExpr" || binop->getOperand1()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand1(), value1, type1, variable1);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand1()), operExists, dest, condition);
			value1 = dest;
		}

		if (binop->getOperand2()->typeClassExpr == "ASTConstExpr" || binop->getOperand2()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand2(), value2, type2, variable2);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand2()), operExists, dest, condition);
			value2 = dest;
		}

		semanticAnalyzer.compare(value2, value1);
		condition = SymbolType::LESS;
		break;
	}
	case Gt: {
		std::string value1;
		BasicType type1;
		bool variable1;

		std::string value2;
		BasicType type2;
		bool variable2;

		if (binop->getOperand1()->typeClassExpr == "ASTConstExpr" || binop->getOperand1()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand1(), value1, type1, variable1);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand1()), operExists, dest, condition);
			value1 = dest;
		}

		if (binop->getOperand2()->typeClassExpr == "ASTConstExpr" || binop->getOperand2()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand2(), value2, type2, variable2);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand2()), operExists, dest, condition);
			value2 = dest;
		}

		semanticAnalyzer.compare(value2, value1);
		condition = SymbolType::GREATER;
		break;
	}
	case Le: {
		std::string value1;
		BasicType type1;
		bool variable1;

		std::string value2;
		BasicType type2;
		bool variable2;

		if (binop->getOperand1()->typeClassExpr == "ASTConstExpr" || binop->getOperand1()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand1(), value1, type1, variable1);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand1()), operExists, dest, condition);
			value1 = dest;
		}

		if (binop->getOperand2()->typeClassExpr == "ASTConstExpr" || binop->getOperand2()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand2(), value2, type2, variable2);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand2()), operExists, dest, condition);
			value2 = dest;
		}

		semanticAnalyzer.compare(value2, value1);
		condition = SymbolType::LESS_EQUAL;
		break;
	}
	case Ge: {
		std::string value1;
		BasicType type1;
		bool variable1;

		std::string value2;
		BasicType type2;
		bool variable2;

		if (binop->getOperand1()->typeClassExpr == "ASTConstExpr" || binop->getOperand1()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand1(), value1, type1, variable1);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand1()), operExists, dest, condition);
			value1 = dest;
		}

		if (binop->getOperand2()->typeClassExpr == "ASTConstExpr" || binop->getOperand2()->typeClassExpr == "ASTLValueExpr") {
			onExprOperand(binop->getOperand2(), value2, type2, variable2);
		}
		else {
			onBinOpExprCond(static_cast<ASTBinOpExpr*>(binop->getOperand2()), operExists, dest, condition);
			value2 = dest;
		}

		semanticAnalyzer.compare(value2, value1);
		condition = SymbolType::GREATER_EQUAL;
		break;
	}
	}



	// onExprOperand(binop->getOperand1(), value1);
	// onExprOperand(binop->getOperand2(), value2);
	

}



