#pragma once
#include "Argumenty.h"
class Algo {
public:
  virtual Argumenty wykonaj(const Argumenty &args) const = 0;
  virtual Algo *sklonuj() const = 0;
  virtual ~Algo() {}
};