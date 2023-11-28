#include "Kosmita.h"
#include "KapitanBomba.h"

#include <iostream>
#include <random>
#include <cmath> 

Kosmita::Kosmita(std::string n, int h, int s, int e, int i, int a, int w) : name(n), health(h), strength(s), endurance(e), intelligence(i), accuracy(a), wkurwienie(w) { std::cout << n <<" jestem!" << std::endl; }

// Metody

void Kosmita::attack(KapitanBomba& bomba)
{
    if (bomba.isAlive()) {
        std::cout << "Pyk! Pyk! Pyk!" << std::endl;
        int defense = bomba.defend();
        double tempDamage = (static_cast<double>(strength * accuracy) / defense) + wkurwienie;
        int damage = static_cast<int>(std::round(tempDamage));
        double newHealth = bomba.getHealth() - damage;
        bomba.setHealth(newHealth);
    }
    else {
        std::cout << "£ooo! Ale mu zajeba³e!" << std::endl;
    }
}

int Kosmita::defend() {
    // Tworzenie generatora liczb losowych
    std::random_device rd;  // Urz¹dzenie do generowania ziarna
    std::mt19937 gen(rd()); // Generator (Mersenne Twister)

    // Definiowanie rozk³adu zmiennoprzecinkowego od 0 do 1
    std::uniform_real_distribution<> dis(0, 1);

    // Obliczanie poziomu obrony
    double result = (static_cast<double>(strength) + endurance + wkurwienie) / 3;
    int defense_level = static_cast<int>(std::round(result)); // Zak³adamy, ¿e to wartoœæ od 0 do 10

    // Konwersja poziomu obrony na prawdopodobieñstwo
    double probability = defense_level / 10.0;

    // Generowanie losowej liczby i decyzja o aktywacji obrony
    if (dis(gen) < probability) {
        std::cout << "Obrona aktywowana!" << std::endl;
        if (defense_level > 1) {
            return defense_level;
        }
        else {
            return 1;
        }
    }
    else {
        std::cout << "Obrona nieaktywowana." << std::endl;
        return 1;
    }
}

// Gettery i Settery (dobre praktyki enkapsulacji)

bool Kosmita::isAlive() const { return is_alive; }

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
    std::cout << std::endl;
}
