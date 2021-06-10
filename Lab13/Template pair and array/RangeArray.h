#pragma once
#include "PairOfNumbers.h"
//szablon bedacy konentenerem na liczby typu N
template < typename N> class RangeArray{
public:
//konstruktor jako argumnet przyjmuje pare liczb<T, N> i ustawia rozmiar tablicy
  template <typename T>
  RangeArray<N>(PairOfNumbers<T,N> pair){
    _arraySize = pair.second - pair.first;
    _array = new N[_arraySize];
  }
  

  RangeArray<N>(const RangeArray<N>& copied){
      std::cout<<"Konstruktor kopiujacy" << std::endl;
   _arraySize = copied._arraySize;
   _array = new N[_arraySize];
   for(int i = 0; i < _arraySize; i++){
       _array[i] = copied._array[i];
   }
  }

~RangeArray();
//metoda zwracajaca rozmiar tablicy
  int Size() const;
  //przeciazony operator [], pozwala na przypisanie warotsci w tablicy
  N& operator[](int index);
  //metoda zwracajaca obiket typu N w tablicy o danym indeksie
  const N At(int index) const;
  
private:
  //rozmiar tablicy
  int _arraySize;
  //wsakznik na tablice typu N
  N* _array = nullptr;

};

  template < typename N> RangeArray<N>:: ~RangeArray(){
    if(_array){
        delete []_array;
        _array = nullptr;
    }
  }
  template < typename N>int RangeArray<N>:: Size() const{
    return _arraySize;
  }
  template < typename N>N& RangeArray<N>::operator[](int index){
      if(index >= 0){
          return _array[index];
      }
      else{
          return _array[_arraySize + index];
      }
  
    
  }
  template < typename N>const N RangeArray<N>::At(int index) const{
          if(index >= 0){
          return _array[index];
      }
      else{
          return _array[_arraySize + index];
      }
  }