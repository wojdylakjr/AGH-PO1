#include "Argumenty.h"

Argumenty::Argumenty(int size) : _size(size) { _dataArr = new double[_size]; }

Argumenty::~Argumenty() { delete[] _dataArr; }

int Argumenty::getSize() const { return _size; }

Argumenty &Argumenty::operator()(int index, double data) {
  _dataArr[index] = data;
  return *this;
}

double &Argumenty::operator[](int index) const { return _dataArr[index]; }

void Argumenty::print(const std::string &text, std::ostream &stream) const {
  std::cout << text;
  for (int i = 0; i < _size; i++) {
    std::cout << " " << _dataArr[i];
  }
  std::cout << std::endl;
}