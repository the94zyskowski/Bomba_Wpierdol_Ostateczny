#include "KapitanBomba.h"
#include "Kosmita.h"

#include <iostream>
#include <random>
#include <cmath> 

KapitanBomba::KapitanBomba(std::string n, int h, int s, int e, int i, int a, int w) : name(n), health(h), strength(s), endurance(e), intelligence(i), accuracy(a), wkurwienie(w) { std::cout << "Czo³em têpe chuje!" << std::endl; }

// Metody

void KapitanBomba::attack_z_karabinka(Kosmita &kosmita)
{
    if (kosmita.isAlive()) {
        std::cout << "Jeb! Jeb! Jeb!" << std::endl;
        int defense = kosmita.defend();
        double tempDamage = (static_cast<double>(strength * accuracy) / defense) + wkurwienie;
        int damage = static_cast<int>(std::round(tempDamage));
        double newHealth = kosmita.getHealth() - damage;
        kosmita.setHealth(newHealth);
    }
    else {
        std::cout << "Przerwaæ ogieñ! Jebany gryzie ju¿ piach." << std::endl;
    }
}

int KapitanBomba::defend() {
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


bool KapitanBomba::isAlive() const { return is_alive; }

std::string KapitanBomba::getName() const { return name; }
void KapitanBomba::setName(std::string n) { name = n; }

int KapitanBomba::getHealth() const { return health; }
void KapitanBomba::setHealth(int h) {
    if (h <= 0) {
            // Ustaw stan obiektu jako "nie¿ywy"
            is_alive = false;
            health = 0;
        }
        else {
            health = h;
        }
    }

int KapitanBomba::getStrength() const { return strength; }
void KapitanBomba::setStrength(int s) { strength = s; }

int KapitanBomba::getEndurance() const { return endurance; }
void KapitanBomba::setEndurance(int e) { endurance = e; }

int KapitanBomba::getIntelligence() const { return intelligence; }
void KapitanBomba::setIntelligence(int i) { intelligence = i; }

int KapitanBomba::getAccuracy() const { return accuracy; }
void KapitanBomba::setAccuracy(int a) { accuracy = a; }

int KapitanBomba::getWkurwienie() const { return wkurwienie; }
void KapitanBomba::setWkurwienie(int w) { wkurwienie = w; }

// Mo¿esz dodaæ wiêcej metod

//Destruktor

KapitanBomba::~KapitanBomba() {
    std::cout << std::endl;
}
