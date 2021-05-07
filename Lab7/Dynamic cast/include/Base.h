#pragma once
#include<iostream>
#include<typeinfo>


class Base{
  public:
  Base(const std::string name);
  virtual void print(std::ostream& s, int spaces) const = 0;
  friend std::ostream& operator<<(std::ostream& s, const Base& object);
  std::string getName() const;
  virtual ~Base(){}

  protected:
  std::string _name;
};

// std::ostream& operator<<(std::ostream& s, const Base& object){}