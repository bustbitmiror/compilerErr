#include <iostream>

#include "antlr4-runtime.h"
#include "SIMPParser.h"
#include "SIMPLexer.h"
//#include "SIMPBaseVisitor.h"
#include "SIMPTreeVisitor.h"

//#include "SIMPBaseListener.h"

#include <boost/program_options.hpp>

//#include <Windows.h>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>

#pragma execution_character_set("utf-8")

using namespace antlrcpptest;
using namespace antlr4;


template<class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
	copy(v.begin(), v.end(), std::ostream_iterator<T>(os, " "));
	return os;
}

int main(int argc, char** argv) {
	
	std::ifstream inputFile;

	try {
		namespace po = boost::program_options;


		po::options_description desc("Allowed options");
		desc.add_options()
			("help", "produce help message")
			("input-file", po::value< std::vector<std::string> >(), "input file")
			;

		po::variables_map vm;
		po::store(po::parse_command_line(argc, argv, desc), vm);
		po::notify(vm);

		


		if (vm.count("help")) {
			std::cout << desc << std::endl;
			return 1;
		}

		if (vm.count("input-file")) {
			//std::cout << vm["input-file"].as<std::vector<std::string>>() << "\n";
			//std::vector name = vm["input-file"].as<std::vector<std::string>>()[0];
			std::string nameFile = vm["input-file"].as<std::vector<std::string>>()[0];

			//std::cout << "filename: " << nameFile << std::endl;
			inputFile.open(nameFile);
		}
		else {
			std::cout << "File not found!" << std::endl;
			std::cout << desc << std::endl;
			return 1;
		}

	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		return 1;
	}

		

	




	try {
		
		//std::string_view str("main let in begin return 0; end");
		ANTLRInputStream input(inputFile);
		SIMPLexer lexer(&input);
		CommonTokenStream tokens(&lexer);

		SIMPParser parser(&tokens);

		//tree::ParseTree* tree = parser.simpProgram();


		SymbolTableManager& symbolTableManager = SymbolTableManager::initialSymbolTableManager();
		
		Quadruples quadruples;

		SemanticAnalyzer& semanticAnalyzer = SemanticAnalyzer::initialSemanticAnalyzer(symbolTableManager, quadruples);

		
		SIMPTreeVisitor visitor(symbolTableManager, semanticAnalyzer);

		visitor.visitSimpProgram(parser.simpProgram());

		ofstream outFile;

		outFile.open("test.o");

		quadruples.output(outFile);

		/*std::vector<SIMPParser::StmtContext*> stmts = parser.simpProgram()->stmtList()->stmt();*/

		/*for (int i = 0; i < stmts.size(); i++) {
			if (stmts[i]->ifStmt() != nullptr) {
				bool operatorExists = false;
				SymbolType condition;
				visitor.onExprCondition(visitor.visitExpr(stmts[i]->ifStmt()->expr()), operatorExists, condition);
			}

		}*/
		



		/*SIMPTreeVisitor* visitor
		ASTRoot* ast = visitor->visitSimpProgram(parser.simpProgram());
		std::vector<AbstractASTNode*>* vec = ast->getRoot()->getBody()->getStmts();
		
		std::vector<AbstractASTNode*>* vec2 = ast->getRoot()->getDecls()->getVarDecls()->getDecls();

		for (int i = 0; i < vec2->size(); i++) {
			std::cout << reinterpret_cast<ASTVarDecl*>(vec2->at(i))->getInitializer()->type;
		}

		for (int i = 0; i < vec->size(); i++) {
			std::cout << reinterpret_cast<AbstractASTStmt*>(vec->at(i))->getCode();
		}*/


		
		

		inputFile.close();
		//auto s = tree->toStringTree(&parser);
		//std::cout << "Parse Tree: " << s << std::endl;
	}
	catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}
	catch (antlr4::IllegalStateException e) {
		std::cout << e.what() << std::endl;
	}
	

	



	return 0;
}