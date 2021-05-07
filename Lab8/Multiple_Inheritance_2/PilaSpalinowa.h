#pragma once
#include"Narzedzie.h"
#include"Spalinowy.h"
#include"Nazwany.h"

class PilaSpalinowa : public Narzedzie, public Spalinowy{
    public:
    PilaSpalinowa(std::string name, std::string zastosowanie, double oil):Nazwany(name), Narzedzie(name,zastosowanie), Spalinowy(name,oil){}
    void Wypisz() const override{
		std::cout << "Pila spalinowa marki " << _nazwa << std::endl;
		WypiszZastosowanie();
		WypiszPoziomOleju();
	}
    

};