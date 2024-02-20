
// Generated from Csimple.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CsimpleVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of CsimpleVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CsimpleBaseVisitor : public CsimpleVisitor {
public:

  virtual std::any visitCProgram(CsimpleParser::CProgramContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpptest
