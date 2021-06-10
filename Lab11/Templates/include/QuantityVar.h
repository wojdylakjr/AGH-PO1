#pragma once
//klasa bedaca kontenerem na typ wbudowany, dziedziczy po klasie abstrakcyjnej AbstractQuantity
#include"AbstractQuantity.h"
template <typename T> class Quantity : public AbstractQuantity{
  public:
  //konstrukotr dwuargumentowy, przyjmuje nazwe oraz argument typu T
  Quantity(const std::string& name, T data);
  //nadpisana metoda Print
  void Print()const override;
  //metoda typu void, przyjmujaca argument typu T i przypisuje nowa wartosc danej jednostce
  void SetValue(T newData);

protected:
T _data;
};

  template <typename T> Quantity<T>::Quantity(const std::string& name, T data) : _data(data){
    _name = name;
  }
  template <typename T> void Quantity<T>::Print()const{
    std::cout << _name <<": " << _data << std::endl;
  }
  template <typename T> void Quantity<T>::SetValue(T newData){
    _data = newData;
  }