#pragma once

//klasa reprezntujaca operacje sumowania
class Sum {
public:
  //konstruktor jednoargumentowy, domyślnie ustawia wartosc _sum na 0
  Sum(double n = 0) : _sum(n) {}

  //geter, zwraca jako typ double sume
  double value() const { return _sum; }

  //przeciazony operator (), uzywany jest jako obiekt funkcyjny(funktor) do obliczenia sumy
  void operator()(double n) { _sum += n; }

private:
  //zmienna typu double przechowywyjaca sume
  double _sum;
};

