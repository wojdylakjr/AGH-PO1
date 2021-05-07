#pragma once
#include"Pojazd.h"
#include"Reczny.h"
#include"Nazwany.h"


class Rower : public Pojazd, public Reczny{
    public:
    Rower(std::string name, int vMax, std::string source): Nazwany(name), Pojazd(name,vMax), Reczny(name,source){}

    virtual void Wypisz() const {
		std::cout << "Wypisuje rower " << _nazwa << std::endl;
		WypiszPredkoscMaksymalna();
		WypiszZrodloNapedu();
	}
    
    private:
};