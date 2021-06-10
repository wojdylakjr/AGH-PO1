#pragma once

template <void (Pomieszczenie::*fun)(void) const >
void Lokaj(Pomieszczenie& pomieszczenie){
    (pomieszczenie.*fun)();
}


template <void (Pomieszczenie::*fun)(void) const >
void Lokaj(const Pomieszczenie& pomieszczenie){
    std::cout<<"Pomieszczenie "<< pomieszczenie.getName() <<" jest zamknięte." <<std::endl;
}

template <int N>
void Lokaj(const Pomieszczenie& pomieszczenie){
    std::cout<<"Nic nie robie." <<std::endl;
}
