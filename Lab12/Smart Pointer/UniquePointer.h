#pragma once
#include <cstring>
#include <iostream>

template <typename T> class UniquePointer {
public:
  UniquePointer<T>(T *ptr);
  UniquePointer(UniquePointer &copiedPointer);
  ~UniquePointer();
  //   friend std::ostream &operator<<(std::ostream &s, const UniquePointer<T>
  //   &smartPointer);

  T &operator*();
  operator T *();
  UniquePointer<T> &operator=(UniquePointer &smartPointer);
  bool isPointerPointing() const;

private:
  T *_ptr = nullptr;
};



template <typename T>
std::ostream &operator<<(std::ostream &s,
                         const UniquePointer<T> &smartPointer) {
  if (smartPointer.isPointerPointing()) {
    s << "[" << &smartPointer << "]";
  } else {
    s << "[pointing to 0]";
  }

  return s;
}

template <typename T> UniquePointer<T>::UniquePointer(T *ptr) : _ptr(ptr) {}

template <typename T>
UniquePointer<T>::UniquePointer(UniquePointer &copiedPointer) {
  _ptr = new T;
  *_ptr = *copiedPointer._ptr;
  delete copiedPointer._ptr;
  copiedPointer._ptr = nullptr;
}

template <typename T> UniquePointer<T>::~UniquePointer() {
  if (_ptr) {
    delete _ptr;
    _ptr = nullptr;
  }
}

template <typename T> T &UniquePointer<T>::operator*() { return *_ptr; }

template <typename T> UniquePointer<T>::operator T *() { return _ptr; }

template <typename T>
UniquePointer<T> &UniquePointer<T>::operator=(UniquePointer &copiedPointer) {
  if (&copiedPointer == this)
    return *this;

  *_ptr = *copiedPointer._ptr;
  delete copiedPointer._ptr;
  copiedPointer._ptr = nullptr;
  return *this;
}

template <typename T> bool UniquePointer<T>::isPointerPointing() const {
  return _ptr;
}