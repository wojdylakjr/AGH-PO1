#pragma once

class MyNode{
  public:
  friend class MyList;
  MyNode(int data);
  int val() const;

  private:
  int _data;
  MyNode* _next;
};