#include <iostream>

#include "antlr4-runtime.h"
#include "SIMPParser.h"
#include "SIMPLexer.h"
#include "SIMPBaseVisitor.h"

#include <boost/program_options.hpp>

#include <Windows.h>
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
		
		ANTLRInputStream input(inputFile);
		SIMPLexer lexer(&input);
		CommonTokenStream tokens(&lexer);

		SIMPParser parser(&tokens);
		//SIMPBaseVisitor visitor;
		//std::any a = visitor.visitSimpProgram(parser.simpProgram());
		tree::ParseTree* tree = parser.simpProgram();

		auto s = tree->toStringTree(&parser);
		std::cout << "Parse Tree: " << s << std::endl;
	}
	catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}
	
	//InputParser parseArgs(argc, argv);

	



	return 0;
}