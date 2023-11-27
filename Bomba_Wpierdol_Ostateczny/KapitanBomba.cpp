#include "KapitanBomba.h"
#include "Kosmita.h"

#include <iostream>

KapitanBomba::KapitanBomba(std::string n, int h, int s, int e, int i, int a, int w) : name(n), health(h), strength(s), endurance(e), intelligence(i), accuracy(a), wkurwienie(w) { std::cout << "Czo³em têpe chuje!" << std::endl; }

// Metody

void KapitanBomba::attack_z_karabinka(Kosmita &kosmita)
{
    if (kosmita.isAlive()) {
        double damage = (strength * accuracy) / 10.0 + wkurwienie;
        double newHealth = kosmita.getHealth() - damage;
        kosmita.setHealth(newHealth);
    }
    else {
        std::cout << "Przerwaæ ogieñ! Jebany gryzie ju¿ piach." << std::endl;
    }
}

void KapitanBomba::defend_get_down() {
    // Logika obrony
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
    std::cout << "Kurwa, maj¹ mnie!" << std::endl;
}
