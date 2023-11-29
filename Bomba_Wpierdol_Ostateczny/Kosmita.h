#ifndef KOSMITA_H
#define KOSMITA_H

#include "Postac.h"

#include <string>

class KapitanBomba;

class Kosmita : public Postac {
public:
    Kosmita(std::string n, int h, int s, int e, int i, int a, int w, int dodatkowaS);

    void atakSpecjalny(Postac& cel);

private:
    int dodatkowaSila;
};

#endif // KOSMITA_H