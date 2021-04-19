#include "Primitive.h"

   Primitive::Primitive(double number) : _number(number){
   }

   void Primitive::PrintWithValue() const{

   }

  double  Primitive::getNumber() const{
    return _number;
  }

  void  Primitive::Set(double number){
    _number = number;
  }

  void Primitive::print() const{
    std::cout << _number;
  }