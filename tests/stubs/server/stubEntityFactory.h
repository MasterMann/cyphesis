// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubEntityFactory_custom.h file.

#ifndef STUB_SERVER_ENTITYFACTORY_H
#define STUB_SERVER_ENTITYFACTORY_H

#include "server/EntityFactory.h"
#include "stubEntityFactory_custom.h"

#ifndef STUB_EntityFactoryBase_initializeEntity
//#define STUB_EntityFactoryBase_initializeEntity
  void EntityFactoryBase::initializeEntity(LocatedEntity& thing, const Atlas::Objects::Entity::RootEntity & attributes, LocatedEntity* location)
  {
    
  }
#endif //STUB_EntityFactoryBase_initializeEntity

#ifndef STUB_EntityFactoryBase_EntityFactoryBase
//#define STUB_EntityFactoryBase_EntityFactoryBase
   EntityFactoryBase::EntityFactoryBase()
    : EntityKit()
    , m_scriptFactory(nullptr),m_parent(nullptr)
  {
    
  }
#endif //STUB_EntityFactoryBase_EntityFactoryBase

#ifndef STUB_EntityFactoryBase_EntityFactoryBase_DTOR
//#define STUB_EntityFactoryBase_EntityFactoryBase_DTOR
   EntityFactoryBase::~EntityFactoryBase()
  {
    
  }
#endif //STUB_EntityFactoryBase_EntityFactoryBase_DTOR

#ifndef STUB_EntityFactoryBase_duplicateFactory
//#define STUB_EntityFactoryBase_duplicateFactory
  EntityFactoryBase* EntityFactoryBase::duplicateFactory()
  {
    return nullptr;
  }
#endif //STUB_EntityFactoryBase_duplicateFactory

#ifndef STUB_EntityFactoryBase_addProperties
//#define STUB_EntityFactoryBase_addProperties
  void EntityFactoryBase::addProperties()
  {
    
  }
#endif //STUB_EntityFactoryBase_addProperties

#ifndef STUB_EntityFactoryBase_updateProperties
//#define STUB_EntityFactoryBase_updateProperties
  void EntityFactoryBase::updateProperties(std::map<const TypeNode*, TypeNode::PropertiesUpdate>& changes)
  {
    
  }
#endif //STUB_EntityFactoryBase_updateProperties


#ifndef STUB_EntityFactory_EntityFactory
//#define STUB_EntityFactory_EntityFactory
  template <typename T>
   EntityFactory<T>::EntityFactory(EntityFactory<T> & o)
    : EntityFactoryBase(o)
  {
    
  }
#endif //STUB_EntityFactory_EntityFactory

#ifndef STUB_EntityFactory_EntityFactory
//#define STUB_EntityFactory_EntityFactory
  template <typename T>
   EntityFactory<T>::EntityFactory()
    : EntityFactoryBase()
  {
    
  }
#endif //STUB_EntityFactory_EntityFactory

#ifndef STUB_EntityFactory_EntityFactory_DTOR
//#define STUB_EntityFactory_EntityFactory_DTOR
  template <typename T>
   EntityFactory<T>::~EntityFactory()
  {
    
  }
#endif //STUB_EntityFactory_EntityFactory_DTOR

#ifndef STUB_EntityFactory_newEntity
//#define STUB_EntityFactory_newEntity
  template <typename T>
  LocatedEntity* EntityFactory<T>::newEntity(const std::string & id, long intId, const Atlas::Objects::Entity::RootEntity & attributes, LocatedEntity* location)
  {
    return nullptr;
  }
#endif //STUB_EntityFactory_newEntity

#ifndef STUB_EntityFactory_duplicateFactory
//#define STUB_EntityFactory_duplicateFactory
  template <typename T>
  EntityFactoryBase* EntityFactory<T>::duplicateFactory()
  {
    return nullptr;
  }
#endif //STUB_EntityFactory_duplicateFactory


#endif