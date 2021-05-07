#pragma once
#include"Pojazd.h"
#include"Nazwany.h"
#include"Spalinowy.h"

class Samochod : public Pojazd, public Spalinowy{
    public:
    Samochod(std::string name, int vMax, double oil) : Nazwany(name), Pojazd(name, vMax), Spalinowy(name, oil){}

    void Wypisz()const override{
        std::cout<<"To jest moje "<<_nazwa<<std::endl;
        WypiszPredkoscMaksymalna();
        WypiszPoziomOleju();
    }
    
    
};