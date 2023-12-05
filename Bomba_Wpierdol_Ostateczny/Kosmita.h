#ifndef KOSMITA_H
#define KOSMITA_H

#include "Postac.h"

#include <string>

class Kosmita : public Postac {
public:
    Kosmita(std::string n, int h, int s, int e, int i, int a, int w, int X, int Y, int dodatkowaS);

    void atakSpecjalny(Postac& cel);

    std::string get_class_name();

private:
    int dodatkowaSila;
};

#endif // KOSMITA_H