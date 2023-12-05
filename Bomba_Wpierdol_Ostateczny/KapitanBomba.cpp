#include "KapitanBomba.h"
#include "Kosmita.h"

#include <iostream>


KapitanBomba::KapitanBomba(std::string n, int h, int s, int e, int i, int a, int w, int X, int Y, int dodatkowaS)
    : Postac(n, h, s, e, i, a, w, X, Y), dodatkowaSila(dodatkowaS) {
    std::cout << "Kurwa! Ale tu pizga." << std::endl;
}

void KapitanBomba::atakSpecjalny(Postac& cel) {
    // Implementacja ataku specjalnego
}


