#pragma once 
#include"Base.h"
#include<vector>

class Dir final : public Base{
  public:
  Dir(const std::string& name);
  ~Dir();
  void print(std::ostream& s, int spaces) const override;
  void operator += (Base* object);
  Base* get(const std::string& name);
  Dir* findDir(const std::string& name);
  void add(Base* object);
  
  private:
  std::vector <Base*> _vec;
};

