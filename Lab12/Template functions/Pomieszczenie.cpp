#include "Pomieszczenie.h"

Pomieszczenie::Pomieszczenie(const std::string& name) : _name(name){
    std::cout << "Tworze pomieszczenie: " << _name << std::endl;
}
void Pomieszczenie::zetrzyj_kurze() const{
    std::cout << "Scieram kurze w pomieszczeniu: " << _name <<std::endl;
}
void Pomieszczenie::umyj_podloge() const{
    std::cout << "Myje podloge w pomieszczeniu: " << _name <<std::endl;
}
void Pomieszczenie::odkurz() const{
    std::cout << "Odkurzam pomieszczenie:  " << _name <<std::endl;
}

std::string Pomieszczenie::getName() const{
    return _name;
}
