#include "Dir.h"

Dir::Dir(const std::string &name) : Base(name) {}

Dir::~Dir() {
  std::cout << "Deletig Dir: " << _name << std::endl;
  for (auto &x : _vec) {
    if (x) {
      std::cout << "About delete: " << x->getName() << std::endl;
      delete x;
      x = nullptr;
    }
  }
}


void Dir::print(std::ostream &s, int spaces) const {

  for (int i = 0; i < spaces; i++)
    std::cout << " ";
  spaces += 2;
  s << _name << " (DIR)" << std::endl;
  for (auto x : _vec) {
    x->print(s, spaces);
  }
}


void Dir::operator+=(Base *object) { _vec.push_back(object); }


Base *Dir::get(const std::string &name) {
  for (Base *x : _vec) {
    if (x->getName() == name)
      return x;

    Dir *temp;
    if ((temp = dynamic_cast<Dir *>(x))) {
      Base *result = temp->get(name);
      if (result != nullptr)
        return result;
    }
  }
  return nullptr;
}


Dir *Dir::findDir(const std::string &name) {
  for (Base *object : _vec) {
    Dir *subdirectory;
    if ((subdirectory = dynamic_cast<Dir *>(object))) {
      if (subdirectory->getName() == name)
        return subdirectory;

      Dir *result = subdirectory->findDir(name);
      if (result != nullptr)
        return result;
    }
  }
  return this;
}


void Dir::add(Base *object) { *this += object; }