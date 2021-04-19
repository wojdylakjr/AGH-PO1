  #include"Sum.h"

  Sum::Sum(Operation& number1, Operation& number2){
    _number1 = &number1;
    _number2 = &number2;
  }


  void Sum::PrintWithValue() const{
    print();
    std::cout << " = " << getNumber()<< std::endl;
  }

  double Sum::getNumber() const{
    return _number1 -> getNumber() + _number2 -> getNumber();
  }

  void Sum::print() const{
    std::cout <<"(";
    _number1 -> print();
    std::cout <<"+";
    _number2 -> print();
    std::cout << ")";
  }