#include "Kosmita.h"
#include <iostream>

Kosmita::Kosmita(std::string n, int h, int s, int e, int i, int a, int w) : name(n), health(h), strength(s), endurance(e), intelligence(i), accuracy(a), wkurwienie(w) { std::cout << n <<" jestem!" << std::endl; }

// Metody

void Kosmita::attack()
{
}

void Kosmita::defend() {
    // Logika obrony
}

// Gettery i Settery (dobre praktyki enkapsulacji)
std::string Kosmita::getName() const { return name; }
void Kosmita::setName(std::string n) { name = n; }

int Kosmita::getHealth() const { return health; }
void Kosmita::setHealth(int h) {
    if (h <= 0) {
        is_alive = false;
        health = 0;
    }
    else {
        health = h;
    }
}

int Kosmita::getStrength() const { return strength; }
void Kosmita::setStrength(int s) { strength = s; }

int Kosmita::getEndurance() const { return endurance; }
void Kosmita::setEndurance(int e) { endurance = e; }

int Kosmita::getIntelligence() const { return intelligence; }
void Kosmita::setIntelligence(int i) { intelligence = i; }

int Kosmita::getAccuracy() const { return accuracy; }
void Kosmita::setAccuracy(int a) { accuracy = a; }

int Kosmita::getWkurwienie() const { return wkurwienie; }
void Kosmita::setWkurwienie(int w) { wkurwienie = w; }

// Mo¿esz dodaæ wiêcej metod

//Destruktor

Kosmita::~Kosmita() {
    std::cout << "Jebaniutki... Ahhh..." << std::endl;
}
