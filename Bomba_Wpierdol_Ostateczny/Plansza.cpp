#include <memory> // Dla std::shared_ptr
#include <iostream>
#include <vector>
#include <optional>

#include "Plansza.h"

Pole::RodzajTerenu get_rodzaj_terenu(const std::vector<std::vector<Pole>>& plansza, int x, int y) {
    // Odczytanie rodzaju terenu
    Pole wybranePole = plansza[x][y];
    return wybranePole.teren;
}

void get_przeciwnik(const std::vector<std::vector<Pole>>& plansza, int x, int y) {
    // Sprawdzenie, czy na polu jest przeciwnik
    Pole wybranePole = plansza[x][y];
    if (!wybranePole.przeciwnicy.empty()) {
        std::cout << "Na polu jest przeciwnik!" << std::endl;
        // Tutaj mo¿esz dodaæ logikê do obs³ugi przeciwników
        for (const auto& przeciwnik : wybranePole.przeciwnicy) {
            // Wykonaj dzia³ania na ka¿dym przeciwniku
            std::cout << "Przeciwnik: " << przeciwnik->getName() << std::endl;
        }
    }
}

void get_przedmiot(const std::vector<std::vector<Pole>>& plansza, int x, int y) {
    // Sprawdzenie, czy na polu jest znaleziony przedmiot
    Pole wybranePole = plansza[x][y];
    if (wybranePole.znalezionyPrzedmiot) {
        std::cout << "Znaleziono przedmiot: " << *wybranePole.znalezionyPrzedmiot << std::endl;
    }
}