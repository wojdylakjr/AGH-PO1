#include "Wierzcholek.h"

Wierzcholek::Wierzcholek(int x, int y) : _x(x), _y(y) {}

int Wierzcholek::getX() const { return _x; }

int Wierzcholek::getY() const { return _y; }

std::ostream &operator<<(std::ostream &s, const Wierzcholek &wierzcholek) {
  s << " (" << wierzcholek.getX() << ", " << wierzcholek.getY() << ")";
  return s;
}