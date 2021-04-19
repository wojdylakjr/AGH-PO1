#pragma once
#include "Operation.h"

//klasa reprezentujaca dzialanie dzielenia, dziediczy po klasie Operation
class Ratio : public Operation{
  public:
    //konstruktor dwu argumentowy, przypisuje atrybuty _number1 i _number2
  Ratio(Operation& number1, Operation& number2);
  
    //metody wirtualne klasy operation
  void PrintWithValue() const override;
  double getNumber() const override;
  void print() const override;
  
  private:
  Operation* _number1;
  Operation* _number2;
};