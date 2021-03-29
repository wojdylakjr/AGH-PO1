#pragma once
#include "Funkcje.h"
#include <functional>
#include <iostream>
#include <vector>

//Klasa jest kontenerem na obiekty funkcyjne
class ZlozenieFunkcji {
public:
  ZlozenieFunkcji(); //konstruktor domsylny
  ~ZlozenieFunkcji(); //destrukotr

  void insert(std::function<double(double)> func); //metoda, ktora jako argumnet przyjmuje obiekt funkcyjny i umieszcza go na końcu wekttora _funcArray

  double wynik(double x); //metoda, ktora jako argument przyjmuje wartosc x typu double, pozwala na zlozenie wszystkich funkcji przechowywanych w _funcArray, a kolejne wywolania zapisuje w tablicy_wyniki

  double operator[](unsigned index); //przeladowany operator [], jako argument przyjmuje indeks dla tablicy  wyniki, zwraca wartosc tablicy w podanym indeksie

private:
  std::vector<std::function<double(double)>> _funcArray; //wektor przechowywujacy obiekty funkcyjne
  std::vector<double> _wyniki; //wektor przechowywyjacy wyniki kolejnych zlozen funkcji
};