#pragma once
#include"Function.h"
#include"Quadratic.h"
#include"Derivative.h"

class Sin : public Function{
public:
Sin(double a);
~Sin();
double calc(double x) const override;
void set_parameter(double a);
Function* copy() override;

private:
double _a;
};




