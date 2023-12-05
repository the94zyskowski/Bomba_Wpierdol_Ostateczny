#ifndef PLANSZA_H
#define PLANSZA_H

#include <vector>
#include <memory>
#include <optional>
#include <string>

#include "Postac.h"
#include "KapitanBomba.h"

struct Pole {
    enum class RodzajTerenu { Trawa, Piasek, Woda, Góry, Przepaœæ };
    RodzajTerenu teren;
    std::vector<std::shared_ptr<Postac>> przeciwnicy; // Lista przeciwników
    std::optional<std::string> znalezionyPrzedmiot;

    Pole(RodzajTerenu t, std::vector<std::shared_ptr<Postac>> p = {}, std::optional<std::string> z = {})
        : teren(t), przeciwnicy(p), znalezionyPrzedmiot(z) {}
};

Pole::RodzajTerenu get_rodzaj_terenu(const std::vector<std::vector<Pole>>& plansza, int x, int y);
std::string get_rodzaj_terenu_tekstowo(std::vector<std::vector<Pole>> plansza, int x, int y);
void get_przeciwnik(const std::vector<std::vector<Pole>>& plansza, int x, int y);
void bomba_attack_przeciwnicy(KapitanBomba bomba, const std::vector<std::vector<Pole>>& plansza, int x, int y);
void get_przedmiot(const std::vector<std::vector<Pole>>& plansza, int x, int y);

#endif // PLANSZA_H
