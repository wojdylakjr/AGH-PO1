#pragma once
#include "Algo.h"
#include "Argumenty.h"
#include <cmath>

class Pierwiastek : public Algo {
public:
  Argumenty wykonaj(const Argumenty &args) const {
    Argumenty temp(args.getSize());
    for (int i = 0; i < args.getSize(); i++) {
      temp(i, sqrt(args[i]));
    }
    return temp;
  }

  Pierwiastek *sklonuj() const { return new Pierwiastek; }

  ~Pierwiastek() {}
};