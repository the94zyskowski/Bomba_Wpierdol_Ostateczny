#include "KapitanBomba.h"
#include "Kosmita.h"

#include <iostream>


KapitanBomba::KapitanBomba(std::string n, int h, int s, int e, int i, int a, int w, int dodatkowaS)
    : Postac(n, h, s, e, i, a, w), dodatkowaSila(dodatkowaS) {
    std::cout << "Czo³em têpe chuje!" << std::endl;
}

void KapitanBomba::atakSpecjalny(Postac& cel) {
    // Implementacja ataku specjalnego
}
