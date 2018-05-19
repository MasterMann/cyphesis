// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubTypeNode_custom.h file.

#ifndef STUB_COMMON_TYPENODE_H
#define STUB_COMMON_TYPENODE_H

#include "common/TypeNode.h"
#include "stubTypeNode_custom.h"

#ifndef STUB_TypeNode_TypeNode
//#define STUB_TypeNode_TypeNode
   TypeNode::TypeNode(const std::string &)
    : m_parent(nullptr)
  {
    
  }
#endif //STUB_TypeNode_TypeNode

#ifndef STUB_TypeNode_TypeNode
//#define STUB_TypeNode_TypeNode
   TypeNode::TypeNode(const std::string &, const Atlas::Objects::Root &)
    : m_parent(nullptr)
  {
    
  }
#endif //STUB_TypeNode_TypeNode

#ifndef STUB_TypeNode_TypeNode_DTOR
//#define STUB_TypeNode_TypeNode_DTOR
   TypeNode::~TypeNode()
  {
    
  }
#endif //STUB_TypeNode_TypeNode_DTOR

#ifndef STUB_TypeNode_injectProperty
//#define STUB_TypeNode_injectProperty
  void TypeNode::injectProperty(const std::string&, PropertyBase*)
  {
    
  }
#endif //STUB_TypeNode_injectProperty

#ifndef STUB_TypeNode_addProperties
//#define STUB_TypeNode_addProperties
  void TypeNode::addProperties(const Atlas::Message::MapType & attributes)
  {
    
  }
#endif //STUB_TypeNode_addProperties

#ifndef STUB_TypeNode_updateProperties
//#define STUB_TypeNode_updateProperties
  TypeNode::PropertiesUpdate TypeNode::updateProperties(const Atlas::Message::MapType & attributes)
  {
    return *static_cast<TypeNode::PropertiesUpdate*>(nullptr);
  }
#endif //STUB_TypeNode_updateProperties

#ifndef STUB_TypeNode_isTypeOf
//#define STUB_TypeNode_isTypeOf
  bool TypeNode::isTypeOf(const std::string & base_type) const
  {
    return false;
  }
#endif //STUB_TypeNode_isTypeOf

#ifndef STUB_TypeNode_isTypeOf
//#define STUB_TypeNode_isTypeOf
  bool TypeNode::isTypeOf(const TypeNode * base_type) const
  {
    return false;
  }
#endif //STUB_TypeNode_isTypeOf


#endif