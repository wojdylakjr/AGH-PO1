#pragma once
#include"Hurting.h"
#include"gameobj.h"

//klasa dziedziczaca po klasie hurting, reprezentuje bombe

class Bomb :  public Hurting{ 
  public:
  //konstrukot dwuargumentowy, deleguje konstrukotr klasy gameobj i hurting
  Bomb(HP hp, std::string id):GameObj(id), Hurting(hp, id) {}
  void print(std::ostream& s) const override{
      Hurting::print(s);
  }
  
};