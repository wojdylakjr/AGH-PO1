#include"Math.h"

Sin::Sin(double a):_a(a){}
Sin::~Sin(){}
double Sin::calc(double x) const{
    return sin(x*_a);
}
void Sin::set_parameter(double a){
    _a = a;
}

Function* Sin::copy(){
    return new Sin(*this);
}