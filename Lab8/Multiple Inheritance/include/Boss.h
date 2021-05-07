#pragma once
#include"Hurting.h"
#include"Character.h"
#include"gameobj.h"

//klasa dziedziczaca po klasie hurting i character, reprezentuje bossa ktory jest postacia i moze zadawac uszkodzenia, do implementacji tej klasy konieczne bylo dziedizcznie wirtualne dla klas Character i Hurting

class Boss :  public Character, public Hurting{ 
  public:
  //konstrukotr dwuargumnetowy, deleguje konstrukory klas GameObject, Character, Hurting
  Boss(HP ownHp, std::string name, HP fightHp, std::string id):GameObj(id), Character(ownHp, name, id), Hurting(fightHp, id){}
  
    //przeciazona metoda print
  void print(std::ostream& s) const override{
      s<<"Bad guy: " << _name<<" ma: ["<<_ownHP<<" HP]";
      std::cout<<std::endl;
      Hurting::print(s);
  }
};