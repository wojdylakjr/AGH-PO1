#include "Quadratic.h"

Quadratic::Quadratic(double a, double b, double c):_a(a),_b(b),_c(c){}

Quadratic::~Quadratic(){

}

double Quadratic::calc(double x) const{
    return _a*x*x + _b*x + _c;
}

Function* Quadratic::copy(){
    return new Quadratic(*this);
}