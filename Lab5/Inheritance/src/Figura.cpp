#include "Figura.h"

Figura::Figura(const std::string &name) : _name(name) {
  std::cout << "Jestem nowa figura " << name << std::endl;
}

Figura &Figura::operator+=(const Wierzcholek &wierzcholek) {
  _vec.push_back(wierzcholek);
  return *this;
}

bool Figura::operator==(const Figura &figura) {
  for (int i = 0; i < _vec.size(); i++) {
    if (_vec[i].getX() != figura._vec[i].getX() ||
        _vec[i].getY() != figura._vec[i].getY()) {
      return false;
    }
  }
  return true;
}

Figura &Figura::dodajW(const Wierzcholek &wierzcholek) {
  _vec.push_back(wierzcholek);
  return *this;
}

Wierzcholek Figura::getWierzcholek(int index) const { return _vec[index]; }

std::string Figura::nazwa() const { return _name; }

int Figura::getSize() const { return _vec.size(); }

std::ostream &operator<<(std::ostream &s, const Figura &figura) {
  for (int i = 0; i < figura.getSize(); i++) {
    s << figura.getWierzcholek(i);
  }
  s << std::endl;
  return s;
}