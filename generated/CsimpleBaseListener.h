
// Generated from Csimple.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CsimpleListener.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of CsimpleListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CsimpleBaseListener : public CsimpleListener {
public:

  virtual void enterCProgram(CsimpleParser::CProgramContext * /*ctx*/) override { }
  virtual void exitCProgram(CsimpleParser::CProgramContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcpptest
