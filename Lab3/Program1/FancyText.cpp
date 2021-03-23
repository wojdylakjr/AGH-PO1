#include "FancyText.h"

FancyText::FancyText() {}

FancyText::FancyText(const char *text) {
  int textSize = strlen(text) + 1;
  _textData = new char[textSize];
  strcpy(_textData, text);
  _amountOfChars = textSize - 1;
  _sizeOfList = 1;
  _head = this;
  _next = nullptr;
}

FancyText::FancyText(const FancyText &copiedObject) {
  int textSize = strlen(copiedObject._textData) + 1;
  _textData = new char[textSize];
  strcpy(_textData, copiedObject._textData);
  _amountOfChars = copiedObject._amountOfChars;
  _sizeOfList = copiedObject._sizeOfList;
  _head = copiedObject._head;
  _next = copiedObject._next;
}

FancyText::FancyText(FancyText &&movedObject) {
  _textData = std::__exchange(movedObject._textData, nullptr);
  _head = std::__exchange(movedObject._head, nullptr);
  _next = std::__exchange(movedObject._next, nullptr);
  _sizeOfList = std::__exchange(movedObject._sizeOfList, 0);
  _amountOfChars = std::__exchange(movedObject._amountOfChars, 0);
}

FancyText::~FancyText() {
  if (_textData) {
    delete[] _textData;
    _textData = nullptr;
    if (_next) {
      delete _next;
      _next = nullptr;
    }
  }
}

void FancyText::operator+=(const char *text) {
  FancyText *current = new FancyText(text);
  FancyText *temp = _head;
  if (_head) {
    while (temp->_next) {
      temp = temp->_next;
    }
    temp->_next = current;
    // std::cout << "Added: "<<current->str()<<std::endl;
  }
  ++_sizeOfList;
  _amountOfChars += strlen(text);
}

void FancyText::operator+=(FancyText &&movedObject) {
  FancyText *temp = new FancyText(std::move(movedObject));
  FancyText *prev = temp;
  while (temp) {
    *this += temp->_textData;
    prev = temp;
    temp = temp->_next;

    delete[] prev->_textData;
    prev->_textData = nullptr;
    if (prev) {
      delete prev;
      prev = nullptr;
    }
  }
}

FancyText &FancyText::operator=(FancyText &&movedObject) {
  if (this == &movedObject) {
    return *this;
  }
  _textData = std::__exchange(movedObject._textData, nullptr);
  _head = std::__exchange(movedObject._head, nullptr);
  _next = std::__exchange(movedObject._next, nullptr);
  _sizeOfList = std::__exchange(movedObject._sizeOfList, 0);
  _amountOfChars = std::__exchange(movedObject._amountOfChars, 0);
  return *this;
}

int FancyText::size() const { return _amountOfChars; }

int FancyText::fragments() const { return _sizeOfList; }

const FancyText &FancyText::fragment(int n) const {
  if (n == 0)
    return *this;
  else
    return _next->fragment(n - 1);
}

const char *FancyText::str() const { return _textData; }

std::ostream &operator<<(std::ostream &stream, const FancyText &text) {

  if (text._textData == nullptr) {
    return stream;
  }
  else if (text._next == nullptr) {
    return stream << text._textData;
  } else {
    return stream << text._textData << *text._next;
  }
}