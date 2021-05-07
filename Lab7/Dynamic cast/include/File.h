#pragma once
#include"Base.h"

class File : public Base{
  public:
  File(const std::string& name);//konstrukotr delegowany
  void print(std::ostream& s, int spaces) const override;
  ~File();


};