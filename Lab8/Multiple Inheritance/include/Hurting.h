#pragma once
#include"gameobj.h"

//klasa dziedziczaca po klasie gameobj, reprezentujaca obrazenia, dziedziczenie jest wirtualne poniewaz, bedziemy mieli klasy, ktore dziedzicza po klasie Hurting i nie tylo

class Hurting : virtual public GameObj{ 
  public:
  //kosntrukor dwuargumentowy, wywyoluje konctrukotr klasy GameObj po ktorej dziedziczy
  Hurting(HP hp, std::string id):GameObj(id){
      _hurtHP = hp.getHP();
  }
  void print(std::ostream& s) const override{
      s<<"Jego uderzenie odbiera: ["<<_hurtHP<<" HP]";
  }
  
  std::string hp()const {
      std::string temp = "[";
      std::string temp1 = " HP]";
      return temp + std::to_string(_hurtHP) +temp1;
    }

  protected:
  int _hurtHP;
};