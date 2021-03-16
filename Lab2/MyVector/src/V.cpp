#include "V.h"
V::V() {
  _size = 0;
  _arr = nullptr;
}

V::V(int size) {
  _size = size;
  _arr = new int[_size];
  for (int i = 0; i < _size; i++) {
    _arr[i] = 0;
  }
}

V::V(const V &copiedVector) {
  _size = copiedVector._size;
  _arr = new int[_size];
  for (int i = 0; i < _size; i++) {
    _arr[i] = copiedVector._arr[i];
  }
}

V::V(V &&movedVector) {
  _size = std::__exchange(movedVector._size, 0);
  _arr = std::__exchange(movedVector._arr, nullptr);
}

V::~V() {
  if (_arr) {
    delete[] _arr;
    _arr = nullptr;
    _size = 0;
  }
}

int &V::at(int index) const { return _arr[index]; }

void V::print(const std::string &name) const {
  std::cout << name << " (";
  for (int i = 0; i < _size; i++) {
    std::cout << _arr[i] << ", ";
  }
  std::cout << _arr[_size - 1] << ")" << std::endl;
}

double V::dot(const V &vector1, const V &vector2) {
  if (vector1._size == vector2._size) {
    double sum = 0;
    for (int i = 0; i < vector1._size; i++) {
      sum += vector1._arr[i] * vector2._arr[i];
    }
    return sum;
  } else {
    std::cout << "Error, vectors of different dimensions!" << std::endl;
    return 0;
  }
}

double V::norm() const { return sqrt(dot(*this, *this)); }

V V::sum(const V &vector1, const V &vector2) {

  if (vector1._size == vector2._size) {
    int size = vector1._size;
    V vector(size);
    for (int i = 0; i < vector._size; i++) {
      vector._arr[i] += vector1._arr[i] + vector2._arr[i];
    }
    return vector;
  } else {
    V vector;
    std::cout << "Error, vectors of different dimensions!" << std::endl;
    return vector;
  }
}

V V::sum(const V &vector1, int number) {
  V vector(vector1._size);
  for (int i = 0; i < vector._size; i++) {
    vector._arr[i] += vector1._arr[i] + number;
  }
  return vector;
}

V::operator double() const { return norm(); }