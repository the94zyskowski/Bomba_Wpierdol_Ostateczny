#ifndef POSTAC_H
#define POSTAC_H

#include <string>

class Postac {
public:
    Postac(std::string n, int h, int s, int e, int i, int a, int w, int X, int Y);
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

    void setPosition(int newX, int newY);

    std::pair<int, int> getPosition() const;

protected:
    std::string name;
    int health;
    int strength;
    int endurance;
    int intelligence;
    int accuracy;
    int wkurwienie;
    bool is_alive = true;
    int pozycja_X;
    int pozycja_Y;
};

#endif // POSTAC_H
