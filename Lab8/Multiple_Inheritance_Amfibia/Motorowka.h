#pragma once
#include"Pojazd.h"


class Motorowka : virtual public Pojazd{
     public:
     Motorowka(const PredkoscMaksymalna& vMax) : _vMax(vMax){}
     ~Motorowka(){}
    std::string toString() const override{return "Motorowka";}
    int predkoscMaksymalna() const{return _vMax.getVMax();}

    private:
    PredkoscMaksymalna _vMax;
};