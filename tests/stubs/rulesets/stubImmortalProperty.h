// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubImmortalProperty_custom.h file.

#ifndef STUB_RULESETS_IMMORTALPROPERTY_H
#define STUB_RULESETS_IMMORTALPROPERTY_H

#include "rulesets/ImmortalProperty.h"
#include "stubImmortalProperty_custom.h"

#ifndef STUB_ImmortalProperty_install
//#define STUB_ImmortalProperty_install
  void ImmortalProperty::install(LocatedEntity *, const std::string &)
  {
    
  }
#endif //STUB_ImmortalProperty_install

#ifndef STUB_ImmortalProperty_remove
//#define STUB_ImmortalProperty_remove
  void ImmortalProperty::remove(LocatedEntity *, const std::string &)
  {
    
  }
#endif //STUB_ImmortalProperty_remove

#ifndef STUB_ImmortalProperty_apply
//#define STUB_ImmortalProperty_apply
  void ImmortalProperty::apply(LocatedEntity *)
  {
    
  }
#endif //STUB_ImmortalProperty_apply

#ifndef STUB_ImmortalProperty_operation
//#define STUB_ImmortalProperty_operation
  HandlerResult ImmortalProperty::operation(LocatedEntity *, const Operation &, OpVector &)
  {
    return *static_cast<HandlerResult*>(nullptr);
  }
#endif //STUB_ImmortalProperty_operation

#ifndef STUB_ImmortalProperty_copy
//#define STUB_ImmortalProperty_copy
  ImmortalProperty* ImmortalProperty::copy() const
  {
    return nullptr;
  }
#endif //STUB_ImmortalProperty_copy

#ifndef STUB_ImmortalProperty_delete_handler
//#define STUB_ImmortalProperty_delete_handler
  HandlerResult ImmortalProperty::delete_handler(LocatedEntity * e, const Operation & op, OpVector & res)
  {
    return *static_cast<HandlerResult*>(nullptr);
  }
#endif //STUB_ImmortalProperty_delete_handler


#endif