#include "Robot.h"

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

std::string toHex(const std::string& input) {
    std::stringstream hexStream;

    for (char c : input) {
        hexStream << std::uppercase << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(c);
    }

    return hexStream.str();
}

Robot::Robot(std::string n, int h, int s, int e, int i, int a, int w, int X, int Y, int dodatkowaS)
    : Postac(n, h, s, e, i, a, w, X, Y), dodatkowaSila(dodatkowaS) {
    //std::cout << "0x'" << toHex(name) << " Dla przyjació³ " << name << "." << std::endl;
}

void Robot::atakSpecjalny(Postac& cel) {
    // Implementacja ataku specjalnego
}
