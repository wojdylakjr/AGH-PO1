#include "Table.h"

void Table::print() const {
  std::for_each(std::begin(_table), std::end(_table),
                [](Data day) { day.print(); });
  std::cout << std::endl;
}

void Table::operator+=(const Data &day) {
  _table.push_back(day);
  if (day.dataSize() < minRow) {
    minRow = day.dataSize();
  }
}

Table Table::sort(unsigned int n) {
  if (n >= minRow) {
    std::cout << "Indeks " << n << " nieprawidlowy!" << std::endl;
    return *this;
  }

  Data::n = n;
  std::sort(std::begin(_table), std::end(_table), Data::compare);
  return *this;
}

Table Table::sortBy(
    std::function<bool(const Data &d1, const Data &d2)> sortFunction) {
  std::sort(std::begin(_table), std::end(_table), sortFunction);
  return *this;
}