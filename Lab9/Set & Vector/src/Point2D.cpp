#include "Point2D.h"

Point2D::Point2D(int x, int y)
    : _x(x), _y(y), _distance(sqrt(_x * _x + _y * _y)) {
  // _distance = sqrt(_x * _x + _y * _y);
}

int Point2D::getX() const { return _x; }
int Point2D::getY() const { return _y; }

double Point2D::distance() const { return _distance; }

void Point2D::Print() const {
  std::cout << "Point coordinates (" << _x << ", " << _y
            << ") distance from origin: " << _distance << std::endl;
}

void Point2D::PrintPoint(const Point2D point) {
  std::cout << "Point coordinates (" << point.getX() << ", " << point.getY()
            << ") distance from origin: " << point.distance() << std::endl;
}

void Point2D::FunctionPrintY(const Point2D &point) {
  std::cout << "Function print y=" << point.getY() << std::endl;
}

bool operator<(const Point2D &p1, const Point2D &p2) {
  return p1.distance() < p2.distance();
}

bool MaxDistanceAsc(const Point2D &p1, const Point2D &p2) {
  double temp1 = p1.getX() > p1.getY() ? p1.getX() : p1.getY();
  double temp2 = p2.getX() > p2.getY() ? p2.getX() : p2.getY();
  return temp1 < temp2;
}

void FunctionPrintX(const Point2D &point) {
  std::cout << "Function print x=" << point.getX() << std::endl;
}

bool OrderAscX::operator()(const Point2D &p1, const Point2D &p2) const {
  return p1.getX() < p2.getX();
}

bool OrderDescY::operator()(const Point2D &p1, const Point2D &p2) const {
  return p1.getY() > p2.getY();
}