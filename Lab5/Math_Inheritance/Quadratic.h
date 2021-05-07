#pragma once
#include"Function.h"

class Quadratic : public Function{
public:
Quadratic(double a, double b, double c);
~Quadratic();
double calc(double x) const override;
Function* copy() override;

private:
double _a;
double _b;
double _c;
};