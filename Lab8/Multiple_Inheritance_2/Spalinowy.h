#pragma once
#include"Nazwany.h"

class Spalinowy : public virtual Nazwany{
    public:
    Spalinowy(std::string name, double oil) : Nazwany(name),_oil(oil){}
    void WypiszPoziomOleju() const{
        std::cout<<"Poziom oleju wynosi "<<_oil<<std::endl;
    }
    

    private:
    double _oil;

};