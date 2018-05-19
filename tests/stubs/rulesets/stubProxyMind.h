// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubProxyMind_custom.h file.

#ifndef STUB_RULESETS_PROXYMIND_H
#define STUB_RULESETS_PROXYMIND_H

#include "rulesets/ProxyMind.h"
#include "stubProxyMind_custom.h"

#ifndef STUB_ProxyMind_ProxyMind
//#define STUB_ProxyMind_ProxyMind
   ProxyMind::ProxyMind(const std::string & id, long intId, LocatedEntity& ownerEntity)
    : BaseMind(id, intId, ownerEntity)
  {
    
  }
#endif //STUB_ProxyMind_ProxyMind

#ifndef STUB_ProxyMind_getThoughts
//#define STUB_ProxyMind_getThoughts
  std::vector<Atlas::Objects::Root> ProxyMind::getThoughts() const
  {
    return std::vector<Atlas::Objects::Root>();
  }
#endif //STUB_ProxyMind_getThoughts

#ifndef STUB_ProxyMind_clearThoughts
//#define STUB_ProxyMind_clearThoughts
  void ProxyMind::clearThoughts()
  {
    
  }
#endif //STUB_ProxyMind_clearThoughts

#ifndef STUB_ProxyMind_operation
//#define STUB_ProxyMind_operation
  void ProxyMind::operation(const Operation & op, OpVector & res)
  {
    
  }
#endif //STUB_ProxyMind_operation

#ifndef STUB_ProxyMind_thinkSetOperation
//#define STUB_ProxyMind_thinkSetOperation
  void ProxyMind::thinkSetOperation(const Operation & op, OpVector & res)
  {
    
  }
#endif //STUB_ProxyMind_thinkSetOperation

#ifndef STUB_ProxyMind_thinkDeleteOperation
//#define STUB_ProxyMind_thinkDeleteOperation
  void ProxyMind::thinkDeleteOperation(const Operation & op, OpVector & res)
  {
    
  }
#endif //STUB_ProxyMind_thinkDeleteOperation

#ifndef STUB_ProxyMind_thinkGetOperation
//#define STUB_ProxyMind_thinkGetOperation
  void ProxyMind::thinkGetOperation(const Operation & op, OpVector & res)
  {
    
  }
#endif //STUB_ProxyMind_thinkGetOperation

#ifndef STUB_ProxyMind_thinkLookOperation
//#define STUB_ProxyMind_thinkLookOperation
  void ProxyMind::thinkLookOperation(const Operation & op, OpVector & res)
  {
    
  }
#endif //STUB_ProxyMind_thinkLookOperation


#endif