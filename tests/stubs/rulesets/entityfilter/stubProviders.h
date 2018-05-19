// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubProviders_custom.h file.

#ifndef STUB_RULESETS_ENTITYFILTER_PROVIDERS_H
#define STUB_RULESETS_ENTITYFILTER_PROVIDERS_H

#include "rulesets/entityfilter/Providers.h"
#include "stubProviders_custom.h"

namespace EntityFilter {


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_TypedProvider_getType
//#define STUB_TypedProvider_getType
  const std::type_info* TypedProvider::getType() const
  {
    return nullptr;
  }
#endif //STUB_TypedProvider_getType


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_Consumer_value
//#define STUB_Consumer_value
  template <typename T>
  void Consumer<T>::value(Atlas::Message::Element& value, const T& parent_value) const
  {
    
  }
#endif //STUB_Consumer_value

#ifndef STUB_Consumer_getType
//#define STUB_Consumer_getType
  template <typename T>
  const std::type_info* Consumer<T>::getType() const
  {
    return nullptr;
  }
#endif //STUB_Consumer_getType


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_ProviderBase_ProviderBase
//#define STUB_ProviderBase_ProviderBase
  template <typename T>
   ProviderBase<T>::ProviderBase(Consumer<T>* consumer)
    : m_consumer(nullptr)
  {
    
  }
#endif //STUB_ProviderBase_ProviderBase

#ifndef STUB_ProviderBase_ProviderBase_DTOR
//#define STUB_ProviderBase_ProviderBase_DTOR
  template <typename T>
   ProviderBase<T>::~ProviderBase()
  {
    
  }
#endif //STUB_ProviderBase_ProviderBase_DTOR


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_ConsumingProviderBase_ConsumingProviderBase
//#define STUB_ConsumingProviderBase_ConsumingProviderBase
  template <typename TProviding,typename TConsuming>
   ConsumingProviderBase<TProviding,TConsuming>::ConsumingProviderBase(Consumer<TProviding>* consumer)
    : ProviderBase(consumer)
  {
    
  }
#endif //STUB_ConsumingProviderBase_ConsumingProviderBase

#ifndef STUB_ConsumingProviderBase_getType
//#define STUB_ConsumingProviderBase_getType
  template <typename TProviding,typename TConsuming>
  const std::type_info* ConsumingProviderBase<TProviding,TConsuming>::getType() const
  {
    return nullptr;
  }
#endif //STUB_ConsumingProviderBase_getType


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_NamedAttributeProviderBase_NamedAttributeProviderBase
//#define STUB_NamedAttributeProviderBase_NamedAttributeProviderBase
  template <typename T>
   NamedAttributeProviderBase<T>::NamedAttributeProviderBase(Consumer<T>* consumer, std::string attribute_name)
    : ProviderBase(consumer, attribute_name)
  {
    
  }
#endif //STUB_NamedAttributeProviderBase_NamedAttributeProviderBase


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_ConsumingNamedAttributeProviderBase_ConsumingNamedAttributeProviderBase
//#define STUB_ConsumingNamedAttributeProviderBase_ConsumingNamedAttributeProviderBase
  template <typename TProviding,typename TConsuming>
   ConsumingNamedAttributeProviderBase<TProviding,TConsuming>::ConsumingNamedAttributeProviderBase(Consumer<TProviding>* consumer, const std::string& attribute_name)
    : NamedAttributeProviderBase(consumer, attribute_name)
  {
    
  }
#endif //STUB_ConsumingNamedAttributeProviderBase_ConsumingNamedAttributeProviderBase

#ifndef STUB_ConsumingNamedAttributeProviderBase_getType
//#define STUB_ConsumingNamedAttributeProviderBase_getType
  template <typename TProviding,typename TConsuming>
  const std::type_info* ConsumingNamedAttributeProviderBase<TProviding,TConsuming>::getType() const
  {
    return nullptr;
  }
#endif //STUB_ConsumingNamedAttributeProviderBase_getType


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_FixedElementProvider_FixedElementProvider
//#define STUB_FixedElementProvider_FixedElementProvider
   FixedElementProvider::FixedElementProvider(const Atlas::Message::Element& element)
    : Consumer(element)
  {
    
  }
#endif //STUB_FixedElementProvider_FixedElementProvider

#ifndef STUB_FixedElementProvider_value
//#define STUB_FixedElementProvider_value
  void FixedElementProvider::value(Atlas::Message::Element& value, const QueryContext& context) const
  {
    
  }
#endif //STUB_FixedElementProvider_value


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_FixedTypeNodeProvider_FixedTypeNodeProvider
//#define STUB_FixedTypeNodeProvider_FixedTypeNodeProvider
   FixedTypeNodeProvider::FixedTypeNodeProvider(Consumer<TypeNode>* consumer, const TypeNode& type)
    : ConsumingProviderBase(consumer, type)
  {
    
  }
#endif //STUB_FixedTypeNodeProvider_FixedTypeNodeProvider

#ifndef STUB_FixedTypeNodeProvider_value
//#define STUB_FixedTypeNodeProvider_value
  void FixedTypeNodeProvider::value(Atlas::Message::Element& value, const QueryContext& context) const
  {
    
  }
#endif //STUB_FixedTypeNodeProvider_value

#ifndef STUB_FixedTypeNodeProvider_getType
//#define STUB_FixedTypeNodeProvider_getType
  const std::type_info* FixedTypeNodeProvider::getType() const
  {
    return nullptr;
  }
#endif //STUB_FixedTypeNodeProvider_getType


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_MemoryProvider_MemoryProvider
//#define STUB_MemoryProvider_MemoryProvider
   MemoryProvider::MemoryProvider(Consumer<Atlas::Message::Element>* consumer)
    : ConsumingProviderBase(consumer)
  {
    
  }
#endif //STUB_MemoryProvider_MemoryProvider

#ifndef STUB_MemoryProvider_value
//#define STUB_MemoryProvider_value
  void MemoryProvider::value(Atlas::Message::Element& value, const QueryContext&) const
  {
    
  }
#endif //STUB_MemoryProvider_value


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_EntityProvider_EntityProvider
//#define STUB_EntityProvider_EntityProvider
   EntityProvider::EntityProvider(Consumer<LocatedEntity>* consumer)
    : ConsumingProviderBase(consumer)
  {
    
  }
#endif //STUB_EntityProvider_EntityProvider

#ifndef STUB_EntityProvider_value
//#define STUB_EntityProvider_value
  void EntityProvider::value(Atlas::Message::Element& value, const QueryContext& context) const
  {
    
  }
#endif //STUB_EntityProvider_value

#ifndef STUB_EntityProvider_getType
//#define STUB_EntityProvider_getType
  const std::type_info* EntityProvider::getType() const
  {
    return nullptr;
  }
#endif //STUB_EntityProvider_getType


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_SelfEntityProvider_SelfEntityProvider
//#define STUB_SelfEntityProvider_SelfEntityProvider
   SelfEntityProvider::SelfEntityProvider(Consumer<LocatedEntity>* consumer)
    : ConsumingProviderBase(consumer)
  {
    
  }
#endif //STUB_SelfEntityProvider_SelfEntityProvider

#ifndef STUB_SelfEntityProvider_value
//#define STUB_SelfEntityProvider_value
  void SelfEntityProvider::value(Atlas::Message::Element& value, const QueryContext& context) const
  {
    
  }
#endif //STUB_SelfEntityProvider_value

#ifndef STUB_SelfEntityProvider_getType
//#define STUB_SelfEntityProvider_getType
  const std::type_info* SelfEntityProvider::getType() const
  {
    return nullptr;
  }
#endif //STUB_SelfEntityProvider_getType


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_EntityTypeProvider_EntityTypeProvider
//#define STUB_EntityTypeProvider_EntityTypeProvider
   EntityTypeProvider::EntityTypeProvider(Consumer<TypeNode>* consumer)
    : ConsumingProviderBase(consumer)
  {
    
  }
#endif //STUB_EntityTypeProvider_EntityTypeProvider

#ifndef STUB_EntityTypeProvider_value
//#define STUB_EntityTypeProvider_value
  void EntityTypeProvider::value(Atlas::Message::Element& value, const LocatedEntity& entity) const
  {
    
  }
#endif //STUB_EntityTypeProvider_value

#ifndef STUB_EntityTypeProvider_getType
//#define STUB_EntityTypeProvider_getType
  const std::type_info* EntityTypeProvider::getType() const
  {
    return nullptr;
  }
#endif //STUB_EntityTypeProvider_getType


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_EntityIdProvider_value
//#define STUB_EntityIdProvider_value
  void EntityIdProvider::value(Atlas::Message::Element& value, const LocatedEntity& entity) const
  {
    
  }
#endif //STUB_EntityIdProvider_value


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_TypeNodeProvider_TypeNodeProvider
//#define STUB_TypeNodeProvider_TypeNodeProvider
   TypeNodeProvider::TypeNodeProvider(const std::string& attribute_name)
    : Consumer(attribute_name)
  {
    
  }
#endif //STUB_TypeNodeProvider_TypeNodeProvider

#ifndef STUB_TypeNodeProvider_value
//#define STUB_TypeNodeProvider_value
  void TypeNodeProvider::value(Atlas::Message::Element& value, const TypeNode& type) const
  {
    
  }
#endif //STUB_TypeNodeProvider_value


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_OutfitEntityProvider_OutfitEntityProvider
//#define STUB_OutfitEntityProvider_OutfitEntityProvider
   OutfitEntityProvider::OutfitEntityProvider(Consumer<LocatedEntity>* consumer, const std::string& attribute_name)
    : ConsumingNamedAttributeProviderBase(consumer, attribute_name)
  {
    
  }
#endif //STUB_OutfitEntityProvider_OutfitEntityProvider

#ifndef STUB_OutfitEntityProvider_value
//#define STUB_OutfitEntityProvider_value
  void OutfitEntityProvider::value(Atlas::Message::Element& value, const OutfitProperty& prop) const
  {
    
  }
#endif //STUB_OutfitEntityProvider_value


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_BBoxProvider_BBoxProvider
//#define STUB_BBoxProvider_BBoxProvider
   BBoxProvider::BBoxProvider(Consumer<Atlas::Message::Element>* consumer, Measurement measurement)
    : ConsumingProviderBase(consumer, measurement)
  {
    
  }
#endif //STUB_BBoxProvider_BBoxProvider

#ifndef STUB_BBoxProvider_value
//#define STUB_BBoxProvider_value
  void BBoxProvider::value(Atlas::Message::Element& value, const BBoxProperty& prop) const
  {
    
  }
#endif //STUB_BBoxProvider_value


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_PropertyProvider_PropertyProvider
//#define STUB_PropertyProvider_PropertyProvider
  template <typename TProperty>
   PropertyProvider<TProperty>::PropertyProvider(Consumer<TProperty>* consumer, const std::string& attribute_name)
    : ConsumingNamedAttributeProviderBase(consumer, attribute_name)
  {
    
  }
#endif //STUB_PropertyProvider_PropertyProvider

#ifndef STUB_PropertyProvider_value
//#define STUB_PropertyProvider_value
  template <typename TProperty>
  void PropertyProvider<TProperty>::value(Atlas::Message::Element& value, const LocatedEntity& entity) const
  {
    
  }
#endif //STUB_PropertyProvider_value


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_SoftPropertyProvider_SoftPropertyProvider
//#define STUB_SoftPropertyProvider_SoftPropertyProvider
   SoftPropertyProvider::SoftPropertyProvider(Consumer<Atlas::Message::Element>* consumer, const std::string& attribute_name)
    : ConsumingNamedAttributeProviderBase(consumer, attribute_name)
  {
    
  }
#endif //STUB_SoftPropertyProvider_SoftPropertyProvider

#ifndef STUB_SoftPropertyProvider_value
//#define STUB_SoftPropertyProvider_value
  void SoftPropertyProvider::value(Atlas::Message::Element& value, const LocatedEntity& entity) const
  {
    
  }
#endif //STUB_SoftPropertyProvider_value


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_MapProvider_MapProvider
//#define STUB_MapProvider_MapProvider
   MapProvider::MapProvider(Consumer<Atlas::Message::Element>* consumer, const std::string& attribute_name)
    : ConsumingNamedAttributeProviderBase(consumer, attribute_name)
  {
    
  }
#endif //STUB_MapProvider_MapProvider

#ifndef STUB_MapProvider_value
//#define STUB_MapProvider_value
  void MapProvider::value(Atlas::Message::Element& value, const Atlas::Message::Element& parent_element) const
  {
    
  }
#endif //STUB_MapProvider_value


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_EntityRefProvider_EntityRefProvider
//#define STUB_EntityRefProvider_EntityRefProvider
   EntityRefProvider::EntityRefProvider(Consumer<LocatedEntity>* consumer, const std::string& attribute_name)
    : ConsumingNamedAttributeProviderBase(consumer, attribute_name)
  {
    
  }
#endif //STUB_EntityRefProvider_EntityRefProvider

#ifndef STUB_EntityRefProvider_value
//#define STUB_EntityRefProvider_value
  void EntityRefProvider::value(Atlas::Message::Element& value, const LocatedEntity& entity) const
  {
    
  }
#endif //STUB_EntityRefProvider_value

#ifndef STUB_EntityRefProvider_getType
//#define STUB_EntityRefProvider_getType
  const std::type_info* EntityRefProvider::getType() const
  {
    return nullptr;
  }
#endif //STUB_EntityRefProvider_getType


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_ContainsProvider_value
//#define STUB_ContainsProvider_value
  void ContainsProvider::value(Atlas::Message::Element& value, const LocatedEntity& entity) const
  {
    
  }
#endif //STUB_ContainsProvider_value

#ifndef STUB_ContainsProvider_getType
//#define STUB_ContainsProvider_getType
  const std::type_info* ContainsProvider::getType() const
  {
    return nullptr;
  }
#endif //STUB_ContainsProvider_getType


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_ContainsRecursiveFunctionProvider_ContainsRecursiveFunctionProvider
//#define STUB_ContainsRecursiveFunctionProvider_ContainsRecursiveFunctionProvider
   ContainsRecursiveFunctionProvider::ContainsRecursiveFunctionProvider(Consumer<QueryContext>* container, Predicate* condition)
    : Consumer(container, condition)
    , m_condition(nullptr),m_consumer(nullptr)
  {
    
  }
#endif //STUB_ContainsRecursiveFunctionProvider_ContainsRecursiveFunctionProvider

#ifndef STUB_ContainsRecursiveFunctionProvider_value
//#define STUB_ContainsRecursiveFunctionProvider_value
  void ContainsRecursiveFunctionProvider::value(Atlas::Message::Element& value, const QueryContext& context) const
  {
    
  }
#endif //STUB_ContainsRecursiveFunctionProvider_value

#ifndef STUB_ContainsRecursiveFunctionProvider_checkContainer
//#define STUB_ContainsRecursiveFunctionProvider_checkContainer
  bool ContainsRecursiveFunctionProvider::checkContainer(LocatedEntitySet* container) const
  {
    return false;
  }
#endif //STUB_ContainsRecursiveFunctionProvider_checkContainer


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_ProviderFactory_createProviders
//#define STUB_ProviderFactory_createProviders
  Consumer<QueryContext>* ProviderFactory::createProviders(SegmentsList segments) const
  {
    return nullptr;
  }
#endif //STUB_ProviderFactory_createProviders

#ifndef STUB_ProviderFactory_createFixedTypeNodeProvider
//#define STUB_ProviderFactory_createFixedTypeNodeProvider
  FixedTypeNodeProvider* ProviderFactory::createFixedTypeNodeProvider(SegmentsList segments) const
  {
    return nullptr;
  }
#endif //STUB_ProviderFactory_createFixedTypeNodeProvider

#ifndef STUB_ProviderFactory_createEntityProvider
//#define STUB_ProviderFactory_createEntityProvider
  EntityProvider* ProviderFactory::createEntityProvider(SegmentsList segments) const
  {
    return nullptr;
  }
#endif //STUB_ProviderFactory_createEntityProvider

#ifndef STUB_ProviderFactory_createSelfEntityProvider
//#define STUB_ProviderFactory_createSelfEntityProvider
  SelfEntityProvider* ProviderFactory::createSelfEntityProvider(SegmentsList segments) const
  {
    return nullptr;
  }
#endif //STUB_ProviderFactory_createSelfEntityProvider

#ifndef STUB_ProviderFactory_createOutfitEntityProvider
//#define STUB_ProviderFactory_createOutfitEntityProvider
  OutfitEntityProvider* ProviderFactory::createOutfitEntityProvider(SegmentsList segments) const
  {
    return nullptr;
  }
#endif //STUB_ProviderFactory_createOutfitEntityProvider

#ifndef STUB_ProviderFactory_createBBoxProvider
//#define STUB_ProviderFactory_createBBoxProvider
  BBoxProvider* ProviderFactory::createBBoxProvider(SegmentsList segments) const
  {
    return nullptr;
  }
#endif //STUB_ProviderFactory_createBBoxProvider

#ifndef STUB_ProviderFactory_createPropertyProvider
//#define STUB_ProviderFactory_createPropertyProvider
  Consumer<LocatedEntity>* ProviderFactory::createPropertyProvider(SegmentsList segments) const
  {
    return nullptr;
  }
#endif //STUB_ProviderFactory_createPropertyProvider

#ifndef STUB_ProviderFactory_createMapProvider
//#define STUB_ProviderFactory_createMapProvider
  MapProvider* ProviderFactory::createMapProvider(SegmentsList segments) const
  {
    return nullptr;
  }
#endif //STUB_ProviderFactory_createMapProvider

#ifndef STUB_ProviderFactory_createTypeNodeProvider
//#define STUB_ProviderFactory_createTypeNodeProvider
  TypeNodeProvider* ProviderFactory::createTypeNodeProvider(SegmentsList segments) const
  {
    return nullptr;
  }
#endif //STUB_ProviderFactory_createTypeNodeProvider


}  // namespace EntityFilter

namespace EntityFilter {

#ifndef STUB_MindProviderFactory_createProviders
//#define STUB_MindProviderFactory_createProviders
  Consumer<QueryContext>* MindProviderFactory::createProviders(SegmentsList segments) const
  {
    return nullptr;
  }
#endif //STUB_MindProviderFactory_createProviders

#ifndef STUB_MindProviderFactory_createMemoryProvider
//#define STUB_MindProviderFactory_createMemoryProvider
  MemoryProvider* MindProviderFactory::createMemoryProvider(SegmentsList segments) const
  {
    return nullptr;
  }
#endif //STUB_MindProviderFactory_createMemoryProvider


}  // namespace EntityFilter

#endif