#include "ComplexNumber.h"
ComplexNumber::ComplexNumber(double real, double imaginary)
    : _real(real), _imaginary(imaginary) {}

ComplexNumber::ComplexNumber(int real) : _real(real) {}

ComplexNumber::~ComplexNumber() {}

double ComplexNumber::getReal() const { return _real; }

double ComplexNumber::getImaginary() const { return _imaginary; }

ComplexNumber ComplexNumber::operator++(int) {
  ComplexNumber old = *this;
  operator++();
  return old;
}

ComplexNumber ComplexNumber::operator++() {
  ++_real;
  return *this;
}

ComplexNumber::operator double() const { return _real; }

double &ComplexNumber::operator[](unsigned index) {
  if (index == 0) {
    return _real;
  } else {
    return _imaginary;
  }
}

void ComplexNumber::operator*=(int number) {
  _real *= 3;
  _imaginary *= 3;
}

std::ostream &operator<<(std::ostream &stream, const ComplexNumber &number) {
  stream << number._real << " + " << number._imaginary << "i";
  return stream;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber &number) const {
  // (A1 + i*A2)*(B1 + i*B2) = A1*B1 - A2*B2 + i*(A1*B2 + A2*B1)
  return ComplexNumber(_real * number._real - _imaginary * number._imaginary,
                       _real * number._imaginary + _imaginary * number._real);
}

ComplexNumber operator+(int number, const ComplexNumber &number1) {
  return ComplexNumber(number1.getReal() + number, number1.getImaginary());
}

ComplexNumber operator+(const ComplexNumber &number1,
                        const ComplexNumber &number2) {
  return ComplexNumber(number1.getReal() + number2.getReal(),
                       number1.getImaginary() + number2.getImaginary());
}

ComplexNumber operator-(const ComplexNumber &number1,
                        const ComplexNumber &number2) {
  return ComplexNumber(number1.getReal() - number2.getReal(),
                       number1.getImaginary() - number2.getImaginary());
}

bool operator<(const ComplexNumber &number1, const ComplexNumber &number2) {
  //   R = re*re + im*im.
  double r1 = number1.getReal() * number1.getReal() +
              number1.getImaginary() * number1.getImaginary();
  double r2 = number2.getReal() * number2.getReal() +
              number2.getImaginary() * number2.getImaginary();
  return r1 < r2 ? true : false;
}

bool operator>(const ComplexNumber &number1, const ComplexNumber &number2) {
  double r1 = number1.getReal() * number1.getReal() +
              number1.getImaginary() * number1.getImaginary();
  double r2 = number2.getReal() * number2.getReal() +
              number2.getImaginary() * number2.getImaginary();
  return r1 > r2 ? true : false;
}