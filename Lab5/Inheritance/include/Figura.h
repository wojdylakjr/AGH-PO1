#pragma once
#include"Wierzcholek.h"
#include<vector>

class Figura{
  public:
  //konstruktor, jako argument przyjmuje nazwe figury jako typ std::string&
  Figura(const std::string& name);
  //przeciazony operator += dodaje wierzcholki do wektora _vec, zwraca zmodyfikowany obiket na kotrym zostal wywoalany
  Figura& operator +=(const Wierzcholek& wierzcholek);
  //przeciazony operator == sprawdza czy dwie figury sa takie same, zwraca wartosc logiczna typu bool
  bool operator ==(const Figura& figura);
  //metoda zwraca obiekt typu Figura, jako argument przyjmuje const referencje obiektu tyou  wierzcholek i dodaje go do wektora _vec
  Figura& dodajW(const Wierzcholek& wierzcholek);

  Wierzcholek getWierzcholek(int index) const;
//   std::string getName() const;
  int getSize() const;
  std::string nazwa()const;
 
  protected:
  std::vector<Wierzcholek> _vec;
  std::string _name;
  private:
  
 
};

std::ostream& operator<<(std::ostream& s, const Figura& figura);