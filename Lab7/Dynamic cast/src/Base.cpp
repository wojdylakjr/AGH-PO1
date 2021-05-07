#include"Base.h"

Base::Base(const std::string name): _name(name){}

std::ostream& operator<<(std::ostream& s, const Base& object){
   object.print(s, 0);
   return s;
}

std::string Base::getName() const{
  return _name;
}