#pragma once

#include<iostream>
#include <cmath>

class V{
  public:
  explicit V();
  explicit V(int size);
  V(const V& copiedVector);
  V(V&& movedVector);
  ~V();

  int& at(int index) const;
  void print(const std::string& name) const;
  static double dot(const V& vector1, const V& vector2);
  double norm() const;
  static V sum(const V& vector1, const V& vector2);
  static V sum(const V& vector1, int);
  operator double()const;
  

  private:
  int _size;
  int* _arr;
};
