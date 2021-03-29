#pragma once
#include <iostream>
class Argumenty {
public:
  Argumenty(int size);
  ~Argumenty();
  int getSize() const;
  Argumenty &operator()(int index, double data);
  void print(const std::string &, std::ostream &stream = std::cout) const;
  double &operator[](int index) const;

private:
  double *_dataArr;
  int _size;
};