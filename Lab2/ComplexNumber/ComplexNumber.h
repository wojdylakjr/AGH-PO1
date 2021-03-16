#pragma once
#include <iostream>
class ComplexNumber {
public:
  explicit ComplexNumber(double real, double imaginary);
  explicit ComplexNumber(int);
  ~ComplexNumber();

  double getReal() const;
  double getImaginary() const;
  operator double() const;
  ComplexNumber operator++(int);
  ComplexNumber operator++();
  double &operator[](unsigned);
  void operator*=(int number);
  friend std::ostream &operator<<(std::ostream &stream, const ComplexNumber &number);
  ComplexNumber operator*(const ComplexNumber &number) const;

private:
  double _real;
  double _imaginary;
};

ComplexNumber operator+(int number1, const ComplexNumber &number2);
ComplexNumber operator+(const ComplexNumber &number1, const ComplexNumber &number2);
ComplexNumber operator-(const ComplexNumber &number1, const ComplexNumber &number2);
bool operator<(const ComplexNumber &number1, const ComplexNumber &number2);
bool operator>(const ComplexNumber &number1, const ComplexNumber &number2);