#pragma once
#include <iostream>

class Wierzcholek{
  public:
  Wierzcholek(int x, int y);
  int getX()const;
  int getY()const;
  
  private:
  int _x;
  int _y;
};

std::ostream& operator<<(std::ostream& s, const Wierzcholek& wierzcholek);