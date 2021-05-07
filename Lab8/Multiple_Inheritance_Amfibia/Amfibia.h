#pragma once
#include"Pojazd.h"

class Amfibia : public Samochod, public Motorowka{
    public:
    // Amfibia(const PredkoscMaksymalna& vMaxLad, const PredkoscMaksymalna& vMaxWoda) : Samochod(vMaxLad), Motorowka(vMaxWoda), _vMaxLad(vMaxLad), _vMaxWoda(vMaxWoda){}
    Amfibia(const PredkoscMaksymalna& vMaxLad, const PredkoscMaksymalna& vMaxWoda) : Samochod(vMaxLad), Motorowka(vMaxWoda){}
    ~Amfibia(){}

    std::string toString() const override{return "Amfibia";}
    // int predkoscMaksymalna_Lad() const{return _vMaxLad.getVMax();}
    // int predkoscMaksymalna_Woda() const{return _vMaxWoda.getVMax();}
     int predkoscMaksymalna_Lad() const{return Samochod::predkoscMaksymalna();}
    int predkoscMaksymalna_Woda() const{return Motorowka::predkoscMaksymalna();}

    private:
    // PredkoscMaksymalna _vMaxLad;
    // PredkoscMaksymalna _vMaxWoda;
};