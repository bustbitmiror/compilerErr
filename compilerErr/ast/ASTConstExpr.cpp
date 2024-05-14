#include "ASTConstExpr.h"

ASTConstExpr::ASTConstExpr(int line, int col, std::string token, SIMPType type)
	: ASTExpr(line, col, 0) {
	this->type = type;
	setType("ASTConstExpr");

	switch (type)
	{
	case INT: {
		value = std::stoi(token);
		break;
	}
		
	case FLOAT: {
		value = std::stof(token);
		break;
	}
	default:
		break;
	}
}

int ASTConstExpr::getAsInt() {
	return std::any_cast<int>(value);
}

float ASTConstExpr::getAsFloat() {
	return std::any_cast<float>(value);
}

std::any ASTConstExpr::get() {
	return value;
}