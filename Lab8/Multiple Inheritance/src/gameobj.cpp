#include"gameobj.h"

std::ostream& operator<<(std::ostream& s, const GameObj& object){
  object.print(s);
  return s;
}