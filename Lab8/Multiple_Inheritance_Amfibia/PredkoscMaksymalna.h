#pragma once

class PredkoscMaksymalna{
    public:
    PredkoscMaksymalna(int v) : _vMax(v){}
    int getVMax() const{return _vMax;}
    private:
    int _vMax;
};

std::ostream& operator<<(std::ostream& s, const PredkoscMaksymalna& vMax){
    s <<"Predkosc maksymalna: "<< vMax.getVMax();
    return s;
}


