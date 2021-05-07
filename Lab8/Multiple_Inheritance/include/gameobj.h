#pragma once
#include<iostream>
#include"HP.h"
#include<cstring>

//klasa bazowa reprezentuje kazdy obiekt w grze
class GameObj{ 
  public:
  //kosntruktor dwuargumentowy, przyjmuje obiekt HP i string id
  GameObj( std::string id) : _id(id){
    
  }
//wirtualny destrukotr
  virtual ~GameObj(){}

  //wirtualna metoda print, jako arugument przyjmuje std::ostream& s
  virtual void print(std::ostream& s) const = 0;

  //metoda zwracajaca string id obiektu
  std::string id() const{return _id;}

  //metoda zwracajaca wartosc hp
//   virtual int hp()const=0;

  //przeciazony operator <<, w definiji wywoluje metode print
  friend std::ostream& operator<<(std::ostream& s, const GameObj& object);


  protected:
  std::string _id;
//   int _hp;
};

