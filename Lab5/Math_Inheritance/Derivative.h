#pragma once
#include"Function.h"

class Derivative : public Function{
public:
Derivative(Function* func);
Derivative(const Derivative& d);
~Derivative();
double calc(double x) const override;
void set_dx(double dx);
Function* copy() override;

private:
Function* _func;
double _dx;
};