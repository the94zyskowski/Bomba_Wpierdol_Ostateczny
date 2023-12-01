#include "Postac.h"
#include "KapitanBomba.h"
#include "Kosmita.h"

#include <iostream>
#include <random>
#include <cmath> 

Postac::Postac(std::string n, int h, int s, int e, int i, int a, int w, int X, int Y) : name(n), health(h), strength(s), endurance(e), intelligence(i), accuracy(a), wkurwienie(w), pozycja_X(X), pozycja_Y(Y) {}


void Postac::attack(Postac& postac)
{
    if (postac.isAlive()) {
        std::cout << "Jeb! Jeb! Jeb!" << std::endl;
        int defense = postac.defend();
        double tempDamage = (static_cast<double>(strength * accuracy) / defense) + wkurwienie;
        int damage = static_cast<int>(std::round(tempDamage));
        double newHealth = postac.getHealth() - damage;
        postac.setHealth(newHealth);
    }
    else {
        std::cout << "Przerwaæ ogieñ! Jebany gryzie ju¿ piach." << std::endl;
    }
}

int Postac::defend() {
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

bool Postac::isAlive() const { return is_alive; }

std::string Postac::getName() const { return name; }
void Postac::setName(std::string n) { name = n; }

int Postac::getHealth() const { return health; }
void Postac::setHealth(int h) {
    if (h <= 0) {
        // Ustaw stan obiektu jako "nie¿ywy"
        is_alive = false;
        health = 0;
    }
    else {
        health = h;
    }
}

int Postac::getStrength() const { return strength; }
void Postac::setStrength(int s) { strength = s; }

int Postac::getEndurance() const { return endurance; }
void Postac::setEndurance(int e) { endurance = e; }

int Postac::getIntelligence() const { return intelligence; }
void Postac::setIntelligence(int i) { intelligence = i; }

int Postac::getAccuracy() const { return accuracy; }
void Postac::setAccuracy(int a) { accuracy = a; }

int Postac::getWkurwienie() const { return wkurwienie; }
void Postac::setWkurwienie(int w) { wkurwienie = w; }

void Postac::setPosition(int newX, int newY) {
    pozycja_X = newX;
    pozycja_Y = newY;
}

std::pair<int, int> Postac::getPosition() const {
    return { pozycja_X, pozycja_Y };
}

Postac::~Postac() {
    // Tutaj mo¿na umieœciæ kod potrzebny do destrukcji
}