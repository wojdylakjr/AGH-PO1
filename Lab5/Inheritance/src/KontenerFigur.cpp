#include "KontenerFigur.h"

KontenerFigur::KontenerFigur() {}

KontenerFigur KontenerFigur::operator+=(Figura *figura) {
  _vec.push_back(figura);
  return *this;
}

Figura KontenerFigur::getFigura(int index) const { return *_vec[index]; }

int KontenerFigur::getSize() const { return _vec.size(); }

std::ostream &operator<<(std::ostream &s, const KontenerFigur &kontener) {
  for (int i = 0; i < kontener.getSize(); i++) {
    s << "Figura: " << std::endl << kontener.getFigura(i).nazwa();
    s << kontener.getFigura(i);
  }

  return s;
}