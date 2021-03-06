// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubBaseWorld_custom.h file.

#ifndef STUB_RULES_SIMULATION_BASEWORLD_H
#define STUB_RULES_SIMULATION_BASEWORLD_H

#include "rules/simulation/BaseWorld.h"
#include "stubBaseWorld_custom.h"

#ifndef STUB_BaseWorld_BaseWorld
//#define STUB_BaseWorld_BaseWorld
   BaseWorld::BaseWorld()
    : Singleton()
    , m_defaultLocation(nullptr),m_limboLocation(nullptr)
  {
    
  }
#endif //STUB_BaseWorld_BaseWorld

#ifndef STUB_BaseWorld_getEntity
//#define STUB_BaseWorld_getEntity
  Ref<LocatedEntity> BaseWorld::getEntity(const std::string & id) const
  {
    return *static_cast<Ref<LocatedEntity>*>(nullptr);
  }
#endif //STUB_BaseWorld_getEntity

#ifndef STUB_BaseWorld_getEntity
//#define STUB_BaseWorld_getEntity
  Ref<LocatedEntity> BaseWorld::getEntity(long id) const
  {
    return *static_cast<Ref<LocatedEntity>*>(nullptr);
  }
#endif //STUB_BaseWorld_getEntity

#ifndef STUB_BaseWorld_getDefaultLocation
//#define STUB_BaseWorld_getDefaultLocation
  LocatedEntity& BaseWorld::getDefaultLocation() const
  {
    return *static_cast<LocatedEntity*>(nullptr);
  }
#endif //STUB_BaseWorld_getDefaultLocation

#ifndef STUB_BaseWorld_setDefaultLocation
//#define STUB_BaseWorld_setDefaultLocation
  void BaseWorld::setDefaultLocation(LocatedEntity* entity)
  {
    
  }
#endif //STUB_BaseWorld_setDefaultLocation

#ifndef STUB_BaseWorld_getLimboLocation
//#define STUB_BaseWorld_getLimboLocation
  LocatedEntity* BaseWorld::getLimboLocation() const
  {
    return nullptr;
  }
#endif //STUB_BaseWorld_getLimboLocation

#ifndef STUB_BaseWorld_setLimboLocation
//#define STUB_BaseWorld_setLimboLocation
  void BaseWorld::setLimboLocation(LocatedEntity* entity)
  {
    
  }
#endif //STUB_BaseWorld_setLimboLocation

#ifndef STUB_BaseWorld_getTime
//#define STUB_BaseWorld_getTime
  double BaseWorld::getTime() const
  {
    return 0;
  }
#endif //STUB_BaseWorld_getTime

#ifndef STUB_BaseWorld_setIsSuspended
//#define STUB_BaseWorld_setIsSuspended
  void BaseWorld::setIsSuspended(bool suspended)
  {
    
  }
#endif //STUB_BaseWorld_setIsSuspended

#ifndef STUB_BaseWorld_idle
//#define STUB_BaseWorld_idle
  bool BaseWorld::idle()
  {
    return false;
  }
#endif //STUB_BaseWorld_idle

#ifndef STUB_BaseWorld_addEntity
//#define STUB_BaseWorld_addEntity
  Ref<LocatedEntity> BaseWorld::addEntity(const Ref<LocatedEntity>& obj)
  {
    return *static_cast<Ref<LocatedEntity>*>(nullptr);
  }
#endif //STUB_BaseWorld_addEntity

#ifndef STUB_BaseWorld_addNewEntity
//#define STUB_BaseWorld_addNewEntity
  Ref<LocatedEntity> BaseWorld::addNewEntity(const std::string & type, const Atlas::Objects::Entity::RootEntity &)
  {
    return *static_cast<Ref<LocatedEntity>*>(nullptr);
  }
#endif //STUB_BaseWorld_addNewEntity

#ifndef STUB_BaseWorld_delEntity
//#define STUB_BaseWorld_delEntity
  void BaseWorld::delEntity(LocatedEntity * obj)
  {
    
  }
#endif //STUB_BaseWorld_delEntity

#ifndef STUB_BaseWorld_createSpawnPoint
//#define STUB_BaseWorld_createSpawnPoint
  int BaseWorld::createSpawnPoint(const Atlas::Message::MapType & data, LocatedEntity * ent)
  {
    return 0;
  }
#endif //STUB_BaseWorld_createSpawnPoint

#ifndef STUB_BaseWorld_removeSpawnPoint
//#define STUB_BaseWorld_removeSpawnPoint
  int BaseWorld::removeSpawnPoint(LocatedEntity * ent)
  {
    return 0;
  }
#endif //STUB_BaseWorld_removeSpawnPoint

#ifndef STUB_BaseWorld_getSpawnList
//#define STUB_BaseWorld_getSpawnList
  int BaseWorld::getSpawnList(Atlas::Message::ListType & data)
  {
    return 0;
  }
#endif //STUB_BaseWorld_getSpawnList

#ifndef STUB_BaseWorld_spawnNewEntity
//#define STUB_BaseWorld_spawnNewEntity
  Ref<LocatedEntity> BaseWorld::spawnNewEntity(const std::string & name, const std::string & type, const Atlas::Objects::Entity::RootEntity &)
  {
    return *static_cast<Ref<LocatedEntity>*>(nullptr);
  }
#endif //STUB_BaseWorld_spawnNewEntity

#ifndef STUB_BaseWorld_moveToSpawn
//#define STUB_BaseWorld_moveToSpawn
  int BaseWorld::moveToSpawn(const std::string & name, Location& location)
  {
    return 0;
  }
#endif //STUB_BaseWorld_moveToSpawn

#ifndef STUB_BaseWorld_newArithmetic
//#define STUB_BaseWorld_newArithmetic
  ArithmeticScript* BaseWorld::newArithmetic(const std::string &, LocatedEntity *)
  {
    return nullptr;
  }
#endif //STUB_BaseWorld_newArithmetic

#ifndef STUB_BaseWorld_message
//#define STUB_BaseWorld_message
  void BaseWorld::message(const Atlas::Objects::Operation::RootOperation &, LocatedEntity & obj)
  {
    
  }
#endif //STUB_BaseWorld_message

#ifndef STUB_BaseWorld_messageToClients
//#define STUB_BaseWorld_messageToClients
  void BaseWorld::messageToClients(const Atlas::Objects::Operation::RootOperation &)
  {
    
  }
#endif //STUB_BaseWorld_messageToClients

#ifndef STUB_BaseWorld_findByName
//#define STUB_BaseWorld_findByName
  Ref<LocatedEntity> BaseWorld::findByName(const std::string & name)
  {
    return *static_cast<Ref<LocatedEntity>*>(nullptr);
  }
#endif //STUB_BaseWorld_findByName

#ifndef STUB_BaseWorld_findByType
//#define STUB_BaseWorld_findByType
  Ref<LocatedEntity> BaseWorld::findByType(const std::string & type)
  {
    return *static_cast<Ref<LocatedEntity>*>(nullptr);
  }
#endif //STUB_BaseWorld_findByType


#endif