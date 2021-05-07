#pragma once
#include"Pojazd.h"

class Rower : public Pojazd{
    public:
    ~Rower(){}
    std::string toString() const override{return "Rower";}
};