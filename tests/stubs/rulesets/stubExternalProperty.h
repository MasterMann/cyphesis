// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubExternalProperty_custom.h file.

#ifndef STUB_RULESETS_EXTERNALPROPERTY_H
#define STUB_RULESETS_EXTERNALPROPERTY_H

#include "rulesets/ExternalProperty.h"
#include "stubExternalProperty_custom.h"

#ifndef STUB_ExternalProperty_ExternalProperty
//#define STUB_ExternalProperty_ExternalProperty
   ExternalProperty::ExternalProperty(ExternalMind * & data)
    : PropertyBase(data)
    , m_data(nullptr)
  {
    
  }
#endif //STUB_ExternalProperty_ExternalProperty

#ifndef STUB_ExternalProperty_get
//#define STUB_ExternalProperty_get
  int ExternalProperty::get(Atlas::Message::Element & val) const
  {
    return 0;
  }
#endif //STUB_ExternalProperty_get

#ifndef STUB_ExternalProperty_set
//#define STUB_ExternalProperty_set
  void ExternalProperty::set(const Atlas::Message::Element & val)
  {
    
  }
#endif //STUB_ExternalProperty_set

#ifndef STUB_ExternalProperty_add
//#define STUB_ExternalProperty_add
  void ExternalProperty::add(const std::string & val, Atlas::Message::MapType & map) const
  {
    
  }
#endif //STUB_ExternalProperty_add

#ifndef STUB_ExternalProperty_add
//#define STUB_ExternalProperty_add
  void ExternalProperty::add(const std::string & val, const Atlas::Objects::Entity::RootEntity & ent) const
  {
    
  }
#endif //STUB_ExternalProperty_add

#ifndef STUB_ExternalProperty_copy
//#define STUB_ExternalProperty_copy
  ExternalProperty* ExternalProperty::copy() const
  {
    return nullptr;
  }
#endif //STUB_ExternalProperty_copy


#endif