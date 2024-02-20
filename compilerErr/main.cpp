#include <iostream>

#include "antlr4-runtime.h"
#include "CsimpleParser.h"
#include "CsimpleLexer.h"

#include <Windows.h>

#pragma execution_character_set("utf-8")

using namespace antlrcpptest;
using namespace antlr4;

int main(int argc, const char* argv[]) {

	ANTLRInputStream input("main let in {}");
	CsimpleLexer lexer(&input);
	CommonTokenStream tokens(&lexer);

	CsimpleParser parser(&tokens);
	tree::ParseTree* tree = parser.cProgram();

	auto s = tree->toStringTree(&parser);
	std::cout << "Parse Tree: " << s << std::endl;



	return 0;
}