#pragma once
#include "Sum.h"
#include <algorithm>
#include <functional>
#include <iomanip>
#include <iostream>
#include <vector>

//klasa reprezentująca dane dotyczące danego dnia
class Data {
public:
//konstruktor dwuargumentowy inicjalizujacy zmienne _name oraz _data
  Data(const std::string &s, const std::vector<double> &vec);

  //metoda wypisująca obiekt klasy Date
  void print() const;

  //geter, zwracajacy dlugosc wektora _data
  unsigned int dataSize() const;

  //zmienna statyczna, przechowujaca numer indeksu kolumny, ktora ma byc sortowana
  static int n;

  //metoda statyczna pozwalająca na porowanie dwoch obiektow klasy sort, porownuje wartosci wartosci w wektorze data o tym samym indeksie n, zwraca wartosc logiczna bool, pozwala na sortowanie rosnaco
  static bool compare(const Data &day1, const Data &day2);

  //funkcja zaprzyjazniona licząca sume w wektorze _data
  friend Sum sumData(const Data &day);

private:
  //nazwa dnia
  std::string _name;

  //wektor informacji dotyczacych konkretnego dnia
  std::vector<double> _data;
};