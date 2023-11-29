#include "Kosmita.h"
#include "KapitanBomba.h"

#include <iostream>

Kosmita::Kosmita(std::string n, int h, int s, int e, int i, int a, int w, int dodatkowaS)
    : Postac(n, h, s, e, i, a, w), dodatkowaSila(dodatkowaS) {
    std::cout << name << " jestem!" << std::endl;
}

void Kosmita::atakSpecjalny(Postac& cel) {
    // Implementacja ataku specjalnego
}
