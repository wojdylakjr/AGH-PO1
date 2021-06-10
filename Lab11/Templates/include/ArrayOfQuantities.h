#pragma once
#include"QuantityVar.h"
#include<vector>
//usingi pozwalajace na zmiane nazwy i ulatwienie zapisu kolejnych klas szablonowych
using QuantityDouble = Quantity<double>;
using QuantityFloat = Quantity<float>;
using QuantityInt = Quantity<int>;
using QuantityChar = Quantity<char>;
using QuantityBool = Quantity<bool>;

//klasa reprezentujaca kontener na obiekty typu AbstractQuantity
class ArrayOfQuantities{
  public:
  //konstruktor jednoargumentowy przyjmujacy maksymalny rozmiar tablicy
  ArrayOfQuantities(const unsigned int size);
  //destruktor, usuwa kolejne elementy w tablicy _array
  ~ArrayOfQuantities();
  //metoda typu void, nie przyjmuje argumentow, wypisuje wszystkie elementy tablicy
  void Print() const;
  //metoda zwraca typ Quantity<T>*, jako argumnety przyjmnuje nazwe oraz argument typu T, dodaje element do tablicy _array, a nastepnie go zwraca
  template <typename T> 
  Quantity<T>* CreateAndAdd(const std::string& name, T data);

  private:
  //maksymalny rozmiar tablicy
  unsigned int _size;
  //tablicy na obiekty typu AbstractQuantity*
  std::vector<AbstractQuantity*> _array; 
}; 

  ArrayOfQuantities::ArrayOfQuantities(const unsigned int size) : _size(size){}

  ArrayOfQuantities::~ArrayOfQuantities(){
    for(auto it : _array){
      if(it){ 
        delete it;
        it = nullptr;
      }
    }
  }

  void ArrayOfQuantities::Print() const{
    for(auto it : _array){
      it -> Print();
    }
  }

  template <typename T> 
  Quantity<T>* ArrayOfQuantities::CreateAndAdd(const std::string& name, T data){
    auto temp = new Quantity<T>(name, data);
    _array.push_back(temp);
    return temp;
  }