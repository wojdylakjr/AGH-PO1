#pragma once
#include"Nazwany.h"

class Narzedzie : public virtual Nazwany{
    public:
    Narzedzie(std::string name,std::string zastosowanie) : Nazwany(name), _zastosowanie(zastosowanie){}
    void WypiszZastosowanie() const{
        std::cout<<"Tego narzedzia uzywa sie do "<<_zastosowanie<<std::endl;
    }

    private:
    std::string _zastosowanie;

};