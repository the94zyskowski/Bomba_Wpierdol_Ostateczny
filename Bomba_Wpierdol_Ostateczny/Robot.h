#ifndef ROBOT_H
#define ROBOT_H

#include "Postac.h"

#include <string>

class Robot : public Postac {
public:
    Robot(std::string n, int h, int s, int e, int i, int a, int w, int dodatkowaS);

    void atakSpecjalny(Postac& cel);

private:
    int dodatkowaSila;
};

#endif // ROBOT_H