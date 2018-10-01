// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubPythonWrapper_custom.h file.

#ifndef STUB_RULESETS_PYTHONWRAPPER_H
#define STUB_RULESETS_PYTHONWRAPPER_H

#include "rulesets/PythonWrapper.h"
#include "stubPythonWrapper_custom.h"

#ifndef STUB_PythonWrapper_PythonWrapper
//#define STUB_PythonWrapper_PythonWrapper
   PythonWrapper::PythonWrapper(const Py::Object& wrapper)
    : Script(wrapper)
  {
    
  }
#endif //STUB_PythonWrapper_PythonWrapper

#ifndef STUB_PythonWrapper_PythonWrapper_DTOR
//#define STUB_PythonWrapper_PythonWrapper_DTOR
   PythonWrapper::~PythonWrapper()
  {
    
  }
#endif //STUB_PythonWrapper_PythonWrapper_DTOR

#ifndef STUB_PythonWrapper_operation
//#define STUB_PythonWrapper_operation
  HandlerResult PythonWrapper::operation(const std::string & opname, const Atlas::Objects::Operation::RootOperation & op, OpVector & res)
  {
    return *static_cast<HandlerResult*>(nullptr);
  }
#endif //STUB_PythonWrapper_operation

#ifndef STUB_PythonWrapper_hook
//#define STUB_PythonWrapper_hook
  void PythonWrapper::hook(const std::string & function, LocatedEntity * entity)
  {
    
  }
#endif //STUB_PythonWrapper_hook

#ifndef STUB_PythonWrapper_processScriptResult
//#define STUB_PythonWrapper_processScriptResult
   HandlerResult PythonWrapper::processScriptResult(const std::string& scriptName, const Py::Object& ret, OpVector& res)
  {
    return *static_cast< HandlerResult*>(nullptr);
  }
#endif //STUB_PythonWrapper_processScriptResult


#endif