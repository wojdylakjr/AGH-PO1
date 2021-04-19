#pragma once
#include<iostream>

//klasa bazowa, zawiera metody, które sa interfejsem klas podrzednych
class Operation{
  public:
  //metoda wirtualna wypisuje wynik działania
  virtual void PrintWithValue() const = 0; 

  //metoda wirtualna zwracaja wynik dzialania jako typ double
  virtual double getNumber() const =0;

  //metoda wypisujaca dzialania
  virtual void print() const = 0;
};
  