// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubSuspendedProperty_custom.h file.

#ifndef STUB_RULESETS_SUSPENDEDPROPERTY_H
#define STUB_RULESETS_SUSPENDEDPROPERTY_H

#include "rulesets/SuspendedProperty.h"
#include "stubSuspendedProperty_custom.h"

#ifndef STUB_SuspendedProperty_copy
//#define STUB_SuspendedProperty_copy
  SuspendedProperty* SuspendedProperty::copy() const
  {
    return nullptr;
  }
#endif //STUB_SuspendedProperty_copy

#ifndef STUB_SuspendedProperty_apply
//#define STUB_SuspendedProperty_apply
  void SuspendedProperty::apply(LocatedEntity *)
  {
    
  }
#endif //STUB_SuspendedProperty_apply

#ifndef STUB_SuspendedProperty_install
//#define STUB_SuspendedProperty_install
  void SuspendedProperty::install(LocatedEntity *, const std::string &)
  {
    
  }
#endif //STUB_SuspendedProperty_install

#ifndef STUB_SuspendedProperty_remove
//#define STUB_SuspendedProperty_remove
  void SuspendedProperty::remove(LocatedEntity *, const std::string & name)
  {
    
  }
#endif //STUB_SuspendedProperty_remove

#ifndef STUB_SuspendedProperty_operation
//#define STUB_SuspendedProperty_operation
  HandlerResult SuspendedProperty::operation(LocatedEntity * e, const Operation & op, OpVector & res)
  {
    return *static_cast<HandlerResult*>(nullptr);
  }
#endif //STUB_SuspendedProperty_operation


#endif