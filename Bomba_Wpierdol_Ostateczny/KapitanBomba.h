#ifndef KAPITAN_BOMBA_H
#define KAPITAN_BOMBA_H

#include <string>

class Kosmita;

class KapitanBomba {
private:
    // Atrybuty (pola prywatne)
    //Atrybuty poza zdrowiem w zakresie od 0 do 10, ze poziomem standardowym na 5.
    std::string name;
    int health;
    int strength;
    int endurance;
    int intelligence;
    int accuracy;
    int wkurwienie;
    bool is_alive = true;
    // Mo¿esz dodaæ wiêcej atrybutów

public:

    // Konstruktor
    KapitanBomba(std::string n, int h, int s, int e, int i, int a, int w);

    // Metody
    void attack_z_karabinka(Kosmita& kosmita);
    void defend_get_down();

    // Gettery i Settery (dobre praktyki enkapsulacji)

    bool isAlive() const;

    std::string getName() const;
    void setName(std::string n);

    int getHealth() const;
    void setHealth(int h);

    int getStrength() const;
    void setStrength(int s);

    int getEndurance() const;
    void setEndurance(int e);

    int getIntelligence() const;
    void setIntelligence(int i);

    int getAccuracy() const;
    void setAccuracy(int a);

    int getWkurwienie() const;
    void setWkurwienie(int w);

    // Mo¿esz dodaæ wiêcej metod

    // Destruktor

    ~KapitanBomba();
};

#endif // KAPITAN_BOMBA_H