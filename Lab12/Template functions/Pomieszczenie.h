#pragma once
#include<iostream>

class Pomieszczenie{
    public:
    Pomieszczenie(const std::string& name);
    void zetrzyj_kurze() const;
    void umyj_podloge() const;
    void odkurz() const;
    std::string getName() const;

    template <typename T> 
    void wstaw(T data) const;
    
    private:
    std::string _name;
};


template <typename T> 
void Pomieszczenie:: wstaw(T data) const{
        std::cout << "Wstawiam "<<  data <<" do pomieszczenia: " << _name << std::endl;
    }