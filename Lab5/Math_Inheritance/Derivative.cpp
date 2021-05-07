#include "Derivative.h"

Derivative::Derivative(Function* func):Function(){
    _func = func;
}

Derivative::Derivative(const Derivative& d){
    Function *fnew = d._func->copy();
    _func = fnew;
    _dx = d._dx;
}

Derivative::~Derivative(){
    delete _func;
}

double Derivative::calc(double x) const{
    return (_func->calc(x+_dx)-_func->calc(x-_dx))/(2*_dx);
}

void Derivative::set_dx(double dx){
    _dx = dx;
}

Function* Derivative::copy(){
    return new Derivative(*this);
}