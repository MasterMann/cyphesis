// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubPythonArithmeticFactory_custom.h file.

#ifndef STUB_RULESETS_PYTHONARITHMETICFACTORY_H
#define STUB_RULESETS_PYTHONARITHMETICFACTORY_H

#include "rulesets/PythonArithmeticFactory.h"
#include "stubPythonArithmeticFactory_custom.h"

#ifndef STUB_PythonArithmeticFactory_PythonArithmeticFactory
//#define STUB_PythonArithmeticFactory_PythonArithmeticFactory
   PythonArithmeticFactory::PythonArithmeticFactory(const std::string & package, const std::string & name)
    : ArithmeticKit(package, name)
  {
    
  }
#endif //STUB_PythonArithmeticFactory_PythonArithmeticFactory

#ifndef STUB_PythonArithmeticFactory_PythonArithmeticFactory_DTOR
//#define STUB_PythonArithmeticFactory_PythonArithmeticFactory_DTOR
   PythonArithmeticFactory::~PythonArithmeticFactory()
  {
    
  }
#endif //STUB_PythonArithmeticFactory_PythonArithmeticFactory_DTOR

#ifndef STUB_PythonArithmeticFactory_setup
//#define STUB_PythonArithmeticFactory_setup
  int PythonArithmeticFactory::setup()
  {
    return 0;
  }
#endif //STUB_PythonArithmeticFactory_setup

#ifndef STUB_PythonArithmeticFactory_newScript
//#define STUB_PythonArithmeticFactory_newScript
  ArithmeticScript* PythonArithmeticFactory::newScript(LocatedEntity * owner)
  {
    return nullptr;
  }
#endif //STUB_PythonArithmeticFactory_newScript


#endif