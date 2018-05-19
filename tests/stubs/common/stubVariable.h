// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubVariable_custom.h file.

#ifndef STUB_COMMON_VARIABLE_H
#define STUB_COMMON_VARIABLE_H

#include "common/Variable.h"
#include "stubVariable_custom.h"

#ifndef STUB_VariableBase_VariableBase_DTOR
//#define STUB_VariableBase_VariableBase_DTOR
   VariableBase::~VariableBase()
  {
    
  }
#endif //STUB_VariableBase_VariableBase_DTOR

#ifndef STUB_VariableBase_send
//#define STUB_VariableBase_send
  void VariableBase::send(std::ostream &)
  {
    
  }
#endif //STUB_VariableBase_send

#ifndef STUB_VariableBase_isNumeric
//#define STUB_VariableBase_isNumeric
  bool VariableBase::isNumeric() const
  {
    return false;
  }
#endif //STUB_VariableBase_isNumeric


#ifndef STUB_Variable_Variable
//#define STUB_Variable_Variable
  template <typename T>
   Variable<T>::Variable(const T & variable)
    : VariableBase(variable)
  {
    
  }
#endif //STUB_Variable_Variable

#ifndef STUB_Variable_Variable_DTOR
//#define STUB_Variable_Variable_DTOR
  template <typename T>
   Variable<T>::~Variable()
  {
    
  }
#endif //STUB_Variable_Variable_DTOR

#ifndef STUB_Variable_send
//#define STUB_Variable_send
  template <typename T>
  void Variable<T>::send(std::ostream &)
  {
    
  }
#endif //STUB_Variable_send

#ifndef STUB_Variable_isNumeric
//#define STUB_Variable_isNumeric
  template <typename T>
  bool Variable<T>::isNumeric() const
  {
    return false;
  }
#endif //STUB_Variable_isNumeric


#endif