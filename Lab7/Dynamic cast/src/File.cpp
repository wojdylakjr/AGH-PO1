#include "File.h"

  File::File(const std::string& name) : Base(name){}

  File::~File(){
    // std::cout<<"Delete file: " <<_name<<std::endl;
  }

  void File::print(std::ostream& s, int spaces) const{
    for(int i = 0; i < spaces; i++) std::cout << " ";
    s <<_name << " (FILE)" <<std::endl;
  }
  