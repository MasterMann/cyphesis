// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubCorePropertyManager_custom.h file.

#ifndef STUB_SERVER_COREPROPERTYMANAGER_H
#define STUB_SERVER_COREPROPERTYMANAGER_H

#include "server/CorePropertyManager.h"
#include "stubCorePropertyManager_custom.h"

#ifndef STUB_CorePropertyManager_installBaseProperty
//#define STUB_CorePropertyManager_installBaseProperty
  void CorePropertyManager::installBaseProperty(const std::string & type_name, const std::string & parent)
  {
    
  }
#endif //STUB_CorePropertyManager_installBaseProperty

#ifndef STUB_CorePropertyManager_installProperty
//#define STUB_CorePropertyManager_installProperty
  void CorePropertyManager::installProperty(const std::string & type_name, const std::string & parent)
  {
    
  }
#endif //STUB_CorePropertyManager_installProperty

#ifndef STUB_CorePropertyManager_installProperty
//#define STUB_CorePropertyManager_installProperty
  void CorePropertyManager::installProperty(const std::string & type_name)
  {
    
  }
#endif //STUB_CorePropertyManager_installProperty

#ifndef STUB_CorePropertyManager_installProperty
//#define STUB_CorePropertyManager_installProperty
  void CorePropertyManager::installProperty()
  {
    
  }
#endif //STUB_CorePropertyManager_installProperty

#ifndef STUB_CorePropertyManager_CorePropertyManager
//#define STUB_CorePropertyManager_CorePropertyManager
   CorePropertyManager::CorePropertyManager()
    : PropertyManager()
  {
    
  }
#endif //STUB_CorePropertyManager_CorePropertyManager

#ifndef STUB_CorePropertyManager_addProperty
//#define STUB_CorePropertyManager_addProperty
  PropertyBase* CorePropertyManager::addProperty(const std::string & name, int type)
  {
    return nullptr;
  }
#endif //STUB_CorePropertyManager_addProperty

#ifndef STUB_CorePropertyManager_installFactory
//#define STUB_CorePropertyManager_installFactory
  int CorePropertyManager::installFactory(const std::string & type_name, const Atlas::Objects::Root & type_desc, PropertyKit * factory)
  {
    return 0;
  }
#endif //STUB_CorePropertyManager_installFactory


#endif