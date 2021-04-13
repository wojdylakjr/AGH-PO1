#include"Prostokat.h"

Prostokat::Prostokat(const std::string& name): Figura(name){
    std::cout << "Tak naprawdę jestem prostokątem."<<std::endl;
}

double Prostokat::pole() const{
    double a = sqrt(pow(_vec[1].getX() - _vec[0].getX(),2) + pow(_vec[1].getY() - _vec[0].getY(),2));
    double b = sqrt(pow(_vec[3].getX() - _vec[2].getX(),2) + pow(_vec[3].getY() - _vec[2].getY(),2));
     return a * b;
}
