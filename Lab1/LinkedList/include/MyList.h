#pragma once
#include <initializer_list>
#include <iostream>
#include "MyNode.h"

class MyList{
  public:
  MyList();
  MyList(int size); 
  MyList(std::initializer_list<int> name);
  MyList(const MyList& copiedList);
  MyList(MyList&& movedList);
  MyList(int (*func)(MyNode*), int size);
  ~MyList();
  
  void clear();
  void add(int number);
  int size() const;
  void print() const;
  bool empty() const;

  private:
  MyNode* _head;
  MyNode* _tail;
  int _size;

};