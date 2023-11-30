#include "Bomba_Wpierdol_Ostateczny.h"

#include <string>
#include <locale>
#include <iostream>
#include <vector>
#include <optional>

#include <memory> // Dla std::shared_ptr

struct Pole {
    enum class RodzajTerenu { Trawa, Piasek, Woda, Góry, Przepaść };
    RodzajTerenu teren;
    std::vector<std::shared_ptr<Postac>> przeciwnicy; // Lista przeciwników
    std::optional<std::string> znalezionyPrzedmiot;

    Pole(RodzajTerenu t, std::vector<std::shared_ptr<Postac>> p = {}, std::optional<std::string> z = {})
        : teren(t), przeciwnicy(p), znalezionyPrzedmiot(z) {}
};




int main()
{
    setlocale(LC_ALL, "Polish");

    // Tworzenie macierzy 10x10
    std::vector<std::vector<Pole>> plansza(10, std::vector<Pole>(10, Pole(Pole::RodzajTerenu::Trawa)));

    // Ustawienie konkretnego pola z przeciwnikami
    plansza[1][2] = Pole(Pole::RodzajTerenu::Piasek, {
        std::make_shared<Kosmita>("Michaś", 20, 3, 7, 4, 3, 1, 0),
        std::make_shared<Kosmita>("Zdzichu", 15, 5, 6, 3, 2, 2, 1),
        std::make_shared<Robot>("Kutaminator-01", 8, 3, 6, 4, 3, 2, 0)
        });

	return 0;
}
