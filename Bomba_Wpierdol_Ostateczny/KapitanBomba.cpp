#include "KapitanBomba.h"
#include <iostream>

KapitanBomba::KapitanBomba(std::string n, int h, int s, int e, int i, int a, int w) : name(n), health(h), strength(s), endurance(e), intelligence(i), accuracy(a), wkurwienie(w) { std::cout << "Czo³em têpe chuje!" << std::endl; }

// Metody

void KapitanBomba::attack_z_karabinka()
{
}

void KapitanBomba::defend_get_down() {
    // Logika obrony
}

// Gettery i Settery (dobre praktyki enkapsulacji)
std::string KapitanBomba::getName() const { return name; }
void KapitanBomba::setName(std::string n) { name = n; }

int KapitanBomba::getHealth() const { return health; }
void KapitanBomba::setHealth(int h) { health = h; }

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
    std::cout << "Kurwa, maj¹ mnie!\nSu³tan Kosmitów zwyciê¿y³..." << std::endl;
}
