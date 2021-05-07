#pragma once
#include"Pojazd.h"

class Samochod: virtual public Pojazd{
    public:
    Samochod(const PredkoscMaksymalna& vMax) : _vMax(vMax){}
    ~Samochod(){}
    std::string toString() const override{return "Samochod";}
    int predkoscMaksymalna() const{return _vMax.getVMax();}

    private:
    PredkoscMaksymalna _vMax;
};