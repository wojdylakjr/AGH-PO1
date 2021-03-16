#include "MyNode.h"

  MyNode::MyNode(int data) : _data(data){
    _next = nullptr;
  }

  int MyNode::val() const{
    return _data;
  }