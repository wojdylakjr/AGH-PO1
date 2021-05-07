#pragma once 
#include<iostream>
#include"PredkoscMaksymalna.h"

class Pojazd{
    public:
    Pojazd(){}
    virtual ~Pojazd(){}
    virtual std::string toString() const = 0;
    // virtual print(std::ostream& s) const = 0;
};

std::ostream& operator<<(std::ostream& s, const Pojazd& pojazd){
    s << pojazd.toString();
    return s;
}