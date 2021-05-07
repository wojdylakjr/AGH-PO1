#pragma once
#include"gameobj.h"
// #include"HP.h"
//klasa dziedziczaca po klasie gameobj, reprezentuje postac, dziedziczenie jest wirtualne poniewaz, bedziemy mieli klasy, ktore dziedzicza po klasie Character i nie tylo

class Character : virtual public GameObj{ 
  public:
  //kosntrukor dwuargumentowy, wywyoluje konctrukotr klasy GameObj po ktorej dziedziczy
  Character(HP hp, std::string name, std::string id) : GameObj( id),_name(name){
      _ownHP = hp.getHP();
  }

  //przeciazona metoda print
  void print(std::ostream& s) const override{
       s<<"Player " << _name<<", ma: ["<<_ownHP<<" HP]";
  }
  
  std::string hp()const {
    std::string temp = "[";
    std::string temp1 = " HP]";
    return temp + std::to_string(_ownHP) +temp1;
    }

  protected:
  int _ownHP;
  std::string _name;
  // std::string _id;
};