#include "Kosmita.h"

#include <iostream>

Kosmita::Kosmita(std::string n, int h, int s, int e, int i, int a, int w, int X, int Y, int dodatkowaS)
    : Postac(n, h, s, e, i, a, w, X, Y), dodatkowaSila(dodatkowaS) {
    std::cout << name << " jestem!" << std::endl;
}

void Kosmita::atakSpecjalny(Postac& cel) {
    // Implementacja ataku specjalnego
}
