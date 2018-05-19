// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubConnection_custom.h file.

#ifndef STUB_SERVER_CONNECTION_H
#define STUB_SERVER_CONNECTION_H

#include "server/Connection.h"
#include "stubConnection_custom.h"

#ifndef STUB_Connection_addNewAccount
//#define STUB_Connection_addNewAccount
  Account* Connection::addNewAccount(const std::string & account, const std::string & username, const std::string & password)
  {
    return nullptr;
  }
#endif //STUB_Connection_addNewAccount

#ifndef STUB_Connection_disconnectObject
//#define STUB_Connection_disconnectObject
  void Connection::disconnectObject(RouterMap::iterator, const std::string & event)
  {
    
  }
#endif //STUB_Connection_disconnectObject

#ifndef STUB_Connection_disconnectAccount
//#define STUB_Connection_disconnectAccount
  void Connection::disconnectAccount(Account *, RouterMap::iterator, const std::string & event)
  {
    
  }
#endif //STUB_Connection_disconnectAccount

#ifndef STUB_Connection_newAccount
//#define STUB_Connection_newAccount
  Account* Connection::newAccount(const std::string & type, const std::string & username, const std::string & passwd, const std::string & id, long intId)
  {
    return nullptr;
  }
#endif //STUB_Connection_newAccount

#ifndef STUB_Connection_verifyCredentials
//#define STUB_Connection_verifyCredentials
  int Connection::verifyCredentials(const Account &, const Atlas::Objects::Root &) const
  {
    return 0;
  }
#endif //STUB_Connection_verifyCredentials

#ifndef STUB_Connection_Connection
//#define STUB_Connection_Connection
   Connection::Connection(CommSocket & commSocket, ServerRouting & svr, const std::string & addr, const std::string & id, long iid)
    : Link(commSocket, svr, addr, id, iid)
  {
    
  }
#endif //STUB_Connection_Connection

#ifndef STUB_Connection_Connection_DTOR
//#define STUB_Connection_Connection_DTOR
   Connection::~Connection()
  {
    
  }
#endif //STUB_Connection_Connection_DTOR

#ifndef STUB_Connection_setPossessionEnabled
//#define STUB_Connection_setPossessionEnabled
  void Connection::setPossessionEnabled(bool enabled, const std::string& routerId)
  {
    
  }
#endif //STUB_Connection_setPossessionEnabled

#ifndef STUB_Connection_addEntity
//#define STUB_Connection_addEntity
  void Connection::addEntity(LocatedEntity * ent)
  {
    
  }
#endif //STUB_Connection_addEntity

#ifndef STUB_Connection_addObject
//#define STUB_Connection_addObject
  void Connection::addObject(Router * obj)
  {
    
  }
#endif //STUB_Connection_addObject

#ifndef STUB_Connection_removeObject
//#define STUB_Connection_removeObject
  void Connection::removeObject(long id)
  {
    
  }
#endif //STUB_Connection_removeObject

#ifndef STUB_Connection_objectDeleted
//#define STUB_Connection_objectDeleted
  void Connection::objectDeleted(long id)
  {
    
  }
#endif //STUB_Connection_objectDeleted

#ifndef STUB_Connection_externalOperation
//#define STUB_Connection_externalOperation
  void Connection::externalOperation(const Operation & op, Link &)
  {
    
  }
#endif //STUB_Connection_externalOperation

#ifndef STUB_Connection_operation
//#define STUB_Connection_operation
  void Connection::operation(const Operation &, OpVector &)
  {
    
  }
#endif //STUB_Connection_operation

#ifndef STUB_Connection_LoginOperation
//#define STUB_Connection_LoginOperation
  void Connection::LoginOperation(const Operation &, OpVector &)
  {
    
  }
#endif //STUB_Connection_LoginOperation

#ifndef STUB_Connection_LogoutOperation
//#define STUB_Connection_LogoutOperation
  void Connection::LogoutOperation(const Operation &, OpVector &)
  {
    
  }
#endif //STUB_Connection_LogoutOperation

#ifndef STUB_Connection_CreateOperation
//#define STUB_Connection_CreateOperation
  void Connection::CreateOperation(const Operation &, OpVector &)
  {
    
  }
#endif //STUB_Connection_CreateOperation

#ifndef STUB_Connection_GetOperation
//#define STUB_Connection_GetOperation
  void Connection::GetOperation(const Operation &, OpVector &)
  {
    
  }
#endif //STUB_Connection_GetOperation


#endif