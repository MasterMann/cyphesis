// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubRouter_custom.h file.

#ifndef STUB_COMMON_ROUTER_H
#define STUB_COMMON_ROUTER_H

#include "common/Router.h"
#include "stubRouter_custom.h"

#ifndef STUB_Router_Router
//#define STUB_Router_Router
   Router::Router(const std::string & id, long intId)
  {
    
  }
#endif //STUB_Router_Router

#ifndef STUB_Router_Router_DTOR
//#define STUB_Router_Router_DTOR
   Router::~Router()
  {
    
  }
#endif //STUB_Router_Router_DTOR

#ifndef STUB_Router_buildError
//#define STUB_Router_buildError
  void Router::buildError(const Operation &, const std::string & errstring, const Operation &, const std::string & to) const
  {
    
  }
#endif //STUB_Router_buildError

#ifndef STUB_Router_error
//#define STUB_Router_error
  void Router::error(const Operation &, const std::string & errstring, OpVector &, const std::string & to ) const
  {
    
  }
#endif //STUB_Router_error

#ifndef STUB_Router_clientError
//#define STUB_Router_clientError
  void Router::clientError(const Operation &, const std::string & errstring, OpVector &, const std::string & to ) const
  {
    
  }
#endif //STUB_Router_clientError

#ifndef STUB_Router_externalOperation
//#define STUB_Router_externalOperation
  void Router::externalOperation(const Operation & op, Link &)
  {
    
  }
#endif //STUB_Router_externalOperation

#ifndef STUB_Router_operation
//#define STUB_Router_operation
  void Router::operation(const Operation &, OpVector &)
  {
    
  }
#endif //STUB_Router_operation

#ifndef STUB_Router_addToMessage
//#define STUB_Router_addToMessage
  void Router::addToMessage(Atlas::Message::MapType &) const
  {
    
  }
#endif //STUB_Router_addToMessage

#ifndef STUB_Router_addToEntity
//#define STUB_Router_addToEntity
  void Router::addToEntity(const Atlas::Objects::Entity::RootEntity &) const
  {
    
  }
#endif //STUB_Router_addToEntity


#endif