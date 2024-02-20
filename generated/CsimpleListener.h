
// Generated from Csimple.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CsimpleParser.h"


namespace antlrcpptest {

/**
 * This interface defines an abstract listener for a parse tree produced by CsimpleParser.
 */
class  CsimpleListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCProgram(CsimpleParser::CProgramContext *ctx) = 0;
  virtual void exitCProgram(CsimpleParser::CProgramContext *ctx) = 0;


};

}  // namespace antlrcpptest
