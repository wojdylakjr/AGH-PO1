#pragma once
#include"QuantityVar.h"
//klasa bedaca kontenerem na typ wbudowany, ale jest rozbudowana o jednostke, dziedziczy po klasie abstrakcyjnej AbstractQuantity
template <typename T> 
class QuantityWithUnits : public Quantity<T>{
  public:
  //konstrukotr 3 argumentowy, przyjmuje nazwe obiektu, nazwe jednostki oraz jej wartosc jako typ T
  QuantityWithUnits(const std::string &name, T data, const std::string& unit);
  //nadpisana metoda Print
  void Print() const override;

  private:
  //nazwa jednostki
  std::string _unit;

};

 template <typename T> QuantityWithUnits<T>:: QuantityWithUnits(const std::string &name, T data, const std::string& unit) : Quantity<T>(name, data){
   _unit = unit;
 }
  template <typename T> void QuantityWithUnits<T>::Print() const{
    std::cout << Quantity<T>::_name <<": " << Quantity<T>::_data << " [" << _unit <<"]"<<std::endl;
  }