#include "ErrorHandler.h"

ErrorHandler::ErrorHandler()
{
	errorCount = 0;
}

void ErrorHandler::printError(const std::string& msg)
{
	errorCount++;
	std::cout << "Err " << errorCount << ": ";
	std::cout << msg << std::endl;
}
