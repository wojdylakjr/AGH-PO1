#pragma once
#include"Narzedzie.h"
#include"Reczny.h"
#include"Nazwany.h"

class Srubokret : public Narzedzie, public Reczny{
    public:
    Srubokret(std::string name, std::string zastosowanie, std::string zrodlo) : Nazwany(name), Narzedzie(name,zastosowanie), Reczny(name,zrodlo){}

    void Wypisz() const override{
        std::cout << "Srubokret typu " << _nazwa << std::endl;
		WypiszZastosowanie();
		WypiszZrodloNapedu();
    }
    

};