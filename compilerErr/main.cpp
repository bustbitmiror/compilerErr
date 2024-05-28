#include <iostream>

#include "antlr4-runtime.h"
#include "SIMPParser.h"
#include "SIMPLexer.h"
//#include "SIMPBaseVisitor.h"
#include "SIMPTreeVisitor.h"
#include "TargetCodeGenerator.h"
#include "ErrorHandler.h"
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
	std::ofstream outFile;
	std::ofstream outTargetFile;

	try {
		namespace po = boost::program_options;


		po::options_description desc("Allowed options");
		desc.add_options()
			("help", "produce help message")
			("input-file", po::value< std::vector<std::string> >(), "input file")
			("out", po::value< std::vector<std::string> >(), "output file")
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
			std::string nameInputFile = vm["input-file"].as<std::vector<std::string>>()[0];

			//std::cout << "filename: " << nameFile << std::endl;
			inputFile.open(nameInputFile);
		}
		else {
			std::cout << "Input File not found!" << std::endl;
			std::cout << desc << std::endl;
			inputFile.close();
			return 1;
		}

		if (vm.count("out")) {

			std::string nameOutputfile = vm["out"].as<std::vector<std::string>>()[0];
			outFile.open(nameOutputfile + ".o");
			outTargetFile.open(nameOutputfile + ".asm");

		}
		else {
			std::cout << "Output File not found!" << std::endl;
			std::cout << desc << std::endl;
			outFile.close();
			outTargetFile.close();
			return 2;
		}

	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		inputFile.close();
		outFile.close();
		outTargetFile.close();
		return 1;
	}

		

	




	try {
		
		ANTLRInputStream input(inputFile);
		SIMPLexer lexer(&input);
		CommonTokenStream tokens(&lexer);

		SIMPParser parser(&tokens);

		SymbolTableManager& symbolTableManager = SymbolTableManager::initialSymbolTableManager();
		
		Quadruples quadruples;

		SemanticAnalyzer& semanticAnalyzer = SemanticAnalyzer::initialSemanticAnalyzer(symbolTableManager, quadruples);

		ErrorHandler errHandler;
		
		SIMPTreeVisitor visitor(symbolTableManager, semanticAnalyzer, errHandler);

		visitor.visitSimpProgram(parser.simpProgram());

		quadruples.output(outFile);

		TargetCodeGenerator targetCodeGenerator(outTargetFile, quadruples, symbolTableManager);

		targetCodeGenerator.generateCode();

		outTargetFile.close();
		outFile.close();
		inputFile.close();

	}
	catch (antlr4::IllegalArgumentException e) {
		std::cout << e.what() << std::endl;
		outTargetFile.close();
		outFile.close();
		inputFile.close();
	}
	catch (antlr4::IllegalStateException e) {
		std::cout << e.what() << std::endl;
		outTargetFile.close();
		outFile.close();
		inputFile.close();
	}
	catch (std::exception e) {
		std::cout << e.what() << std::endl;
		outTargetFile.close();
		outFile.close();
		inputFile.close();
	}
	

	return 0;
}