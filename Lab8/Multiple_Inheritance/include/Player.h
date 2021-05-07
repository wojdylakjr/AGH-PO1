#pragma once
#include"Character.h"

//klasa dziedziczaca po klasie character, reprezentuje gracza

class Player :  public Character{ 
  public:
  //kosntrukotr dwuragmunetowy, deleguje dwa konstrukotru klasy GameObj i Character
  Player(HP hp, std::string name, std::string id) : GameObj(id),Character(hp, name, id){}

  //przeciazona metoda print
  void print(std::ostream& s) const override{
   Character::print(s);
  }
  
  
};