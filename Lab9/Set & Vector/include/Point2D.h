#pragma once
#include <cmath>
#include <iostream>

//klasa reprezentujaca punkt w ukladzie wspolrzednych 2D
class Point2D{
  public:
  //konstruktur dwuargumentowy, inicjalizujacy wspolrezedna x i y oraz przypisuje wartosc zmiennej distance
  Point2D(int x=0, int y=0);

//metoda wypisujaca punkt
  void Print() const;
//statyczna metoda wypisujaca punkt
  static void PrintPoint(const Point2D point);
  //statyczna metoda wypisujaca wspolrzedna Y
  static void FunctionPrintY(const Point2D& point);
  //geter wspolrzednej X
  int getX() const;
  //geter wspolrzednej Y
  int getY() const;
  //geter dystansy od srodka wspolrzednych
  double distance() const;
  
  private:
  //wspolrzedna X
  int _x;
  //wspolrezdna Y
  int _y;
  //odelglosc od srodka ukladu wspolrzednch
  double _distance;
};

//przeciazony operator <, porownuje zmienne distance dwoch punktow
bool operator <(const Point2D& p1, const Point2D& p2);
//funkcja porownujaca odleglosci dwoch punktow rosnaco
bool MaxDistanceAsc(const Point2D& p1, const Point2D& p2);
//funkcja wypisujaca wspolrzedne X
void FunctionPrintX(const Point2D& point);

//funktor do sortowania po wspolrzednych X rosnaca
class OrderAscX{
public:
//przeciazony operator ()
bool operator ()(const Point2D& p1, const Point2D& p2) const;
};

//funktor do sortowania po wspolrzednych Y malejacao
class OrderDescY{
public:
// przeciazony operator ()
bool operator ()(const Point2D& p1, const Point2D& p2) const;
};


