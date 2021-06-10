#pragma once
#include "Data.h"

//klasa reprezentuje kontener na obikety typu Data
class Table {
public:
//zmienna publiczna, przechowuje wartość najmniejszgo rozmiaru tablicy w obikecie typu Data
  unsigned int minRow = 1000;

  //metoda pozwalajaca na wypisanie obiektu typu Table
  void print() const;

  //przeciazony operator +=, pozwala na dodanie obiektu typu Data do wektora _table
  void operator+=(const Data &day);

  //metoda sortujaca wektor _table rosnaco, w zaleznosci od wartosci zmiennej pod ineksem n, zwraca zmieniony obiekt na ktorym zostala wywolana
  Table sort(unsigned int n);

  //metoda sortujaca wektor _table, jako argument przyjmuje funckje (komparator), w zaleznosci od ktorej elementy beda sortowane 
  Table sortBy(std::function<bool(const Data &d1, const Data &d2)>);

private:
  //wektor obiektow typu Data
  std::vector<Data> _table;
};