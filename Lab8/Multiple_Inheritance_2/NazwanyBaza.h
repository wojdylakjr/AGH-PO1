#pragma once 
class NazwanyBaza{
public:
NazwanyBaza(std::string nazwa):_nazwa(nazwa){}
virtual void Wypisz()const = 0;

protected:
std::string _nazwa;
};
