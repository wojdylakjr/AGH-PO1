#pragma once
#include "Algo.h"
#include "Argumenty.h"

class Suma : public Algo {
public:
  Argumenty wykonaj(const Argumenty &args) const {
    double sum = 0;
    for (int i = 0; i < args.getSize(); i++) {
      sum += args[i];
    }
    Argumenty temp(1);
    temp(0, sum);
    return temp;
  }

  Suma *sklonuj() const { return new Suma; }
  ~Suma() {}
};