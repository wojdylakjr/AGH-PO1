#include "MyList.h"

MyList::MyList() {
  std::cout << "KONST: domyslny" << std::endl;
  _head = nullptr;
  _tail = _head;
  _size = 0;
}

MyList::MyList(int size) : MyList() {
  std::cout << "KONST: jednoparametrowy" << std::endl;
  for (int i = 1; i < size + 1; i++) {
      add(i - 1);
  }
}

MyList::MyList(std::initializer_list<int> list) : MyList() {
  std::cout << "KONST: std::initializer_list" << std::endl;
  for (int number : list) {
    add(number);
  }
}

MyList::MyList(const MyList &copiedList) : MyList() {
  std::cout << "KONST: kopiujacy" << std::endl;
  MyNode *temp = copiedList._head;
  while (temp) {
    add(temp->_data);
    temp = temp->_next;
  }
}

MyList::MyList(MyList &&movedList) {
  MyNode *temp = movedList._head; // zamienic head i tail, podpiac wskaznik
  while (temp) {
    add(temp->_data);
    temp = temp->_next;
  }
  movedList.clear();
}

MyList::MyList(int (*func)(MyNode *), int size) {
  std::cout << "KONST: funkcja generujaca" << std::endl;
  for (auto i = 0; i < size; ++i) {
    add(func(_tail));
  }
}

MyList::~MyList() {
  std::cout << "DESTRUKTOR rozmiar = " << _size << std::endl;
  clear();
}

//------------methods------------

void MyList::clear() {
  MyNode *temp = _head;
  MyNode *prev = temp;
  while (temp) {
    prev = temp;
    temp = temp->_next;
    delete prev;
    prev = nullptr;
  }
  _head = nullptr;
  _tail = nullptr;
  _size = 0;
}

void MyList::add(int number) {
  MyNode *temp = _head;
  if (_head) {
    while (temp->_next) {
      temp = temp->_next;
    }
    temp->_next = new MyNode(number);
    _tail = temp->_next;
    ++_size;
  } else {
    _head = new MyNode(number);
    _tail = _head;
    _size = 1;
  }
}

int MyList::size() const { return _size; }

void MyList::print() const {
  MyNode *temp = _head;
  std::cout << "[ ";
  while (temp) {
    std::cout << temp->_data << ", ";
    temp = temp->_next;
  }
  std::cout << "]" << std::endl;
  //   std::cout<<"Test: _head: " <<_head->_data<<"_tail:"<<_tail -> _data<<
  //   std::endl;
}
bool MyList::empty() const {
  if (_head) {
    return false;
  }
  return true;
}