#pragma once
#include<cmath>

class Function{
    public:
    Function(){}
    virtual ~Function(){}
    virtual Function* copy() = 0;
    virtual double calc(double x) const = 0;
};