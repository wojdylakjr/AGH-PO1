#include"Ratio.h"

  Ratio::Ratio(Operation& number1, Operation& number2){
        _number1 = &number1;
    _number2 = &number2;
  }

  void Ratio::PrintWithValue() const{
    print();
    std::cout << " = " << getNumber() << std::endl;
  }

double Ratio::getNumber() const{
  return _number1 -> getNumber() / _number2 -> getNumber();
  }

void Ratio::print() const{
      std::cout <<"(";
    _number1 -> print();
    std::cout <<"/";
    _number2 -> print();
    std::cout << ")";
}