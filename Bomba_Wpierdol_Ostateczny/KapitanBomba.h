#ifndef KAPITAN_BOMBA_H
#define KAPITAN_BOMBA_H

#include "Postac.h"
#include <string>

class KapitanBomba : public Postac {
public:
    KapitanBomba(std::string n, int h, int s, int e, int i, int a, int w, int dodatkowaS);

    void atakSpecjalny(Postac& cel);

private:
    int dodatkowaSila;
};

#endif // KAPITAN_BOMBA_H
