
// Generated from Csimple.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CsimpleParser.h"


namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by CsimpleParser.
 */
class  CsimpleVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CsimpleParser.
   */
    virtual std::any visitCProgram(CsimpleParser::CProgramContext *context) = 0;


};

}  // namespace antlrcpptest
