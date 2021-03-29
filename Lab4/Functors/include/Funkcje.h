#pragma once
#include <cmath>
//W pliku Funkcje.h przechowywujemy trzy funkcje jako osobne klasy, w celu stworzenia obiektu funkcyjnego

class Sinus {
public:
  Sinus(double a, double b) : _a(a), _b(b) {} //konstruktor dwuargumentowy, przypisuje wartosci wspolczynnikowi _a oraz _b

  double operator()(double x) const { return sin(_a * x + _b); } //przeladowanie operatora (), przyjmuje zmienna typu double x oraz zwraca wartosc typu double dzialania sin(a*x + b)

private:
  double _a; //wspolczynnik a
  double _b; //wspolczynnik b
};

class PierwiastekKwadratowy {
public:
  PierwiastekKwadratowy() {} //konstruktor domyslny
  double operator()(double x) const { return sqrt(x); } //przeladowanie operatora (), przyjmuje zmienna typu double x oraz zwraca wartosc typu double  f(x) = x^0.5

};

class Liniowa {
public:
  Liniowa(double a, double b) : _a(a), _b(b) {} //konstruktor dwuargumentowy, przypisuje wartosci wspolczynnikowi _a oraz _b

  double operator()(double x) const { return _a * x + _b; } //przeladowanie operatora (), przyjmuje zmienna typu double x oraz zwraca wartosc typu double dzialania f(x) = ax + b

private:
  double _a; //wspolczynnik funkcji liniowej a
  double _b; //wspolczynnik funkcji liniowej b
};