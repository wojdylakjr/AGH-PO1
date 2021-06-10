#pragma once
#include<iostream>

//klasa abstrakcyjna, bedaca klasa bazowa dla typu Quantity
class AbstractQuantity{
  public:
  //metoda wirtualna pozwalajaca wypisac obiekty typu Quantity i QuantityWithUnits
  virtual void Print() const = 0;

  //wirtualny destruktor
  virtual ~AbstractQuantity(){};

  protected:
  //nazwa obiektu
  std::string _name;
};