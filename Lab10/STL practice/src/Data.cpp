#include "Data.h"

int Data::n = 0;
bool Data::compare(const Data &day1, const Data &day2) {
  return day1._data[n] < day2._data[n];
}

Data::Data(const std::string &s, const std::vector<double> &vec)
    : _name(s), _data(vec) {}

unsigned int Data::dataSize() const { return _data.size(); }

void Data::print() const {
  std::cout << _name << ": ";
  std::for_each(std::begin(_data), std::end(_data),
                [](double i) { std::cout << std::setw(6) << i; });
  std::cout << std::endl;
}

Sum sumData(const Data &day) {
  Sum s;
  std::for_each(std::begin(day._data), std::end(day._data), std::ref(s));
  return s;
}