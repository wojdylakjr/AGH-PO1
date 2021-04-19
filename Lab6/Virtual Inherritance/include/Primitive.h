#pragma once
#include"Operation.h"

//klasa przechowywujaca skladnik dzialania, dziediczy po klasie Operation
class Primitive : public Operation{
  public:
  //konstruktor jednoparametrowy, inicializuje wartosć atrybutu _number
  Primitive(double number);

  //metody wirtualne klasy operation
  void PrintWithValue() const override;
  double getNumber() const override;
  void print() const override;

  //metoda set ustawia wartosc _number
  void Set(double number);

  private:
  double _number;
};