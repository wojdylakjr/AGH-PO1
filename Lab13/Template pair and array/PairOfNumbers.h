#pragma once
#include <iostream>

//szablon funkcji o typach T i N, odpoiwadajacy za przechowywanie pary liczb, pierwsza ma typ T, druga typ N
template <typename T, typename N> class PairOfNumbers{
public:
//konstruktor jako argumnety przyjmuje referencje do typu N i T i inicjalizuje first i second
  PairOfNumbers<T,N>(T& first, N& second);
  //metoda zwracajaca para liczb, ale w zmienionej kolejnosci, nie przyjmuje argumnetow
  PairOfNumbers<N,T> Swapped();
  //metoda typu void, nie przyjmuje argumentow, wypisuje pare liczb
  void Print()const;
  //metoda typu void,jako argumnet przyjmuje liczbe n, ktora jest dodawana do pary 
  void Add(int n);
  //metoda typu void,jako argumnet przyjmuje liczbe n, ktora jest mnozona przez elemnty pary 
  void Scale(int n);
  //metoda typu void, nie przyjmuje argumentow, wypisuje, ze para jest const czy nie
  void Info()const;
  void Info();

  
//referencja do typu T, przechowujaca pierwszy element pary
  T& first;
//referencja do typu T, przechowujaca drugi element pary
  N& second;

};


template <typename T, typename N> PairOfNumbers<T,N>::PairOfNumbers(T& f, N& s):first(f), second(s) {
  // first = f;
  // second = s;
}

template <typename T, typename N> PairOfNumbers<N,T> PairOfNumbers<T,N>::Swapped(){
  return PairOfNumbers<N, T>(second, first);
}

template <typename T, typename N> void PairOfNumbers<T,N>::Print()const{
  std::cout << "Print method: " << first << " " << second << std::endl;
}
template <typename T, typename N> void PairOfNumbers<T,N>::Add(int n){
  first += n;
  second += n;
}
template <typename T, typename N> void PairOfNumbers<T,N>::Scale(int n){
  first *= n;
  second *= n;
}
template <typename T, typename N> void PairOfNumbers<T,N>::Info(){
    std::cout << "This is NON-const pair of numbers"<<std::endl;
}
template <typename T, typename N> void PairOfNumbers<T,N>::Info()const{
    std::cout<<"This is const pair of numbers"<<std::endl;
}