#pragma once
#include"Nazwany.h"

class Pojazd : public virtual Nazwany{
    public:
    Pojazd(std::string name,int vMax) : Nazwany(name), _vMax(vMax){}
    void WypiszPredkoscMaksymalna() const{
        std::cout<<"Predkosc maksymalna tego pojazdu wynosi "<<_vMax<<" km/h"<<std::endl;
    }

    private:
    int _vMax;

};