#ifndef POSTAC_H
#define POSTAC_H

#include <string>

class Postac {
public:
    Postac(std::string n, int h, int s, int e, int i, int a, int w);
    virtual ~Postac();

    virtual void attack(Postac& postac);
    virtual int defend();

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

protected:
    std::string name;
    int health;
    int strength;
    int endurance;
    int intelligence;
    int accuracy;
    int wkurwienie;
    bool is_alive = true;
};

#endif // POSTAC_H
