// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubRuleTraversalTask_custom.h file.

#ifndef STUB_COMMON_RULETRAVERSALTASK_H
#define STUB_COMMON_RULETRAVERSALTASK_H

#include "common/RuleTraversalTask.h"
#include "stubRuleTraversalTask_custom.h"

#ifndef STUB_RuleTraversalTask_RuleTraversalTask
//#define STUB_RuleTraversalTask_RuleTraversalTask
   RuleTraversalTask::RuleTraversalTask(const std::string& accountId, std::function<bool(const Atlas::Objects::Root&)>& visitor)
    : ClientTask(accountId, visitor)
  {
    
  }
#endif //STUB_RuleTraversalTask_RuleTraversalTask

#ifndef STUB_RuleTraversalTask_RuleTraversalTask_DTOR
//#define STUB_RuleTraversalTask_RuleTraversalTask_DTOR
   RuleTraversalTask::~RuleTraversalTask()
  {
    
  }
#endif //STUB_RuleTraversalTask_RuleTraversalTask_DTOR

#ifndef STUB_RuleTraversalTask_setup
//#define STUB_RuleTraversalTask_setup
  void RuleTraversalTask::setup(const std::string & arg, OpVector &)
  {
    
  }
#endif //STUB_RuleTraversalTask_setup

#ifndef STUB_RuleTraversalTask_operation
//#define STUB_RuleTraversalTask_operation
  void RuleTraversalTask::operation(const Operation &, OpVector &)
  {
    
  }
#endif //STUB_RuleTraversalTask_operation

#ifndef STUB_RuleTraversalTask_getRule
//#define STUB_RuleTraversalTask_getRule
  void RuleTraversalTask::getRule(const std::string & id, OpVector & res)
  {
    
  }
#endif //STUB_RuleTraversalTask_getRule


#endif