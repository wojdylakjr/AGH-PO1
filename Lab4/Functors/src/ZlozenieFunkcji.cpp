#include "ZlozenieFunkcji.h"

ZlozenieFunkcji::ZlozenieFunkcji() {
    _funcArray.clear();
  _wyniki.clear();
}

ZlozenieFunkcji::~ZlozenieFunkcji() {
  _funcArray.clear();
  _wyniki.clear();
}

void ZlozenieFunkcji::insert(std::function<double(double)> func) {
  _funcArray.push_back(func);
}

double ZlozenieFunkcji::wynik(double x) {
  _wyniki.clear();
  unsigned int i = 1;
  _wyniki.push_back(_funcArray[0](x));

  for (i = 1; i < _funcArray.size(); i++) {
    // std::cout <<"Wynik: "<< _funcArray[i](x) << std::endl;
    _wyniki.push_back(_funcArray[i](_wyniki[i - 1]));
  }
  return _wyniki[i - 1];
}

double ZlozenieFunkcji::operator[](unsigned index) { return _wyniki[index]; }