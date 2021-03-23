#pragma once
#include <string.h>
#include<iostream>

class FancyText{ 
  public:
  FancyText(); 
  FancyText(const char* text); 
  FancyText(const FancyText& copiedObject);
  FancyText(FancyText&& movedObject); 
  ~FancyText(); 

  void operator +=(const char*);
  void operator +=(FancyText&& movedObject);
  friend std::ostream& operator<< (std::ostream& stream, const FancyText&);
  FancyText& operator=( FancyText&& text);
  

  int size()const;
  int fragments()const;
  const FancyText& fragment(int i) const;
  const char* str() const;

  private:
  char* _textData; 
  int _amountOfChars = 0; //chars in string
  int _sizeOfList = 0; //words in string
  FancyText* _next;
  FancyText* _head;
};