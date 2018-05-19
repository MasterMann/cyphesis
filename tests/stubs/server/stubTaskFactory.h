// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubTaskFactory_custom.h file.

#ifndef STUB_SERVER_TASKFACTORY_H
#define STUB_SERVER_TASKFACTORY_H

#include "server/TaskFactory.h"
#include "stubTaskFactory_custom.h"

#ifndef STUB_TaskFactory_TaskFactory
//#define STUB_TaskFactory_TaskFactory
   TaskFactory::TaskFactory(const std::string & name)
    : TaskKit(name)
  {
    
  }
#endif //STUB_TaskFactory_TaskFactory

#ifndef STUB_TaskFactory_checkTarget
//#define STUB_TaskFactory_checkTarget
  int TaskFactory::checkTarget(LocatedEntity * target)
  {
    return 0;
  }
#endif //STUB_TaskFactory_checkTarget

#ifndef STUB_TaskFactory_newTask
//#define STUB_TaskFactory_newTask
  Task* TaskFactory::newTask(LocatedEntity & chr)
  {
    return nullptr;
  }
#endif //STUB_TaskFactory_newTask


#endif