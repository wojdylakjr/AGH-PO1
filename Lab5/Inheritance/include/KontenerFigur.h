#pragma once
#include"Figura.h"
class KontenerFigur{
  public:
  KontenerFigur();

  KontenerFigur operator +=(Figura* figura);
  Figura getFigura(int index) const;
  int getSize() const;

  private:
  std::vector<Figura*> _vec;
};

std::ostream& operator<<(std::ostream& s, const KontenerFigur& kontener);