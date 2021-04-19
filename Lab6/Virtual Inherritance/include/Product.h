#pragma once
#include "Operation.h"

//klasa reprezentujaca dzialanie mnozenia, dziediczy po klasie Operation
class Product : public Operation{
  public:
  //konstruktor dwu argumentowy, przypisuje atrybuty _number1 i _number2
  Product(Operation& number1, Operation& number2);
  
  //metody wirtualne klasy operaton
  void PrintWithValue() const override; 
  double getNumber() const override;
  void print() const override;

  private:
  Operation* _number1;
  Operation* _number2;
};