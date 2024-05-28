#pragma once

#include <iostream>

class ErrorHandler {
public:

    ErrorHandler();

    void printError(const std::string&);


    int errorCount;

};