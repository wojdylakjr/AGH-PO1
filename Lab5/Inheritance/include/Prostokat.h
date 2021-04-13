#pragma once
#include<iostream>
#include"Figura.h"
#include<cmath>

class Prostokat : public Figura{
  public:
  Prostokat(const std::string& name); 
  double pole() const;

};