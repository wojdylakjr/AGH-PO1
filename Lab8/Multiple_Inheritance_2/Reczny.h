#pragma once
#include"Nazwany.h"

class Reczny : public virtual Nazwany{
    public:
    Reczny(std::string name, std::string source) : Nazwany(name), _source(source){}
    void WypiszZrodloNapedu() const{
        std::cout <<"Do napedzenia tego urzadzenia uzywa sie "<<_source<<std::endl;
    }
    private:
    std::string _source;

};