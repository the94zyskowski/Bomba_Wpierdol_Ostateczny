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

int get_rodzaj_terenu(std::vector<std::vector<Pole>> plansza, int x, int y) {
    // Odczytanie rodzaju terenu
    if (x >= 0 and y >= 0) {
        Pole wybranePole = plansza[x][y];
        switch (wybranePole.teren) {
        case Pole::RodzajTerenu::Trawa:
            std::cout << "Teren: Trawa" << std::endl;
            return 1;
            break;
        case Pole::RodzajTerenu::Piasek:
            std::cout << "Teren: Piasek" << std::endl;
            return 2;
            break;
        case Pole::RodzajTerenu::Woda:
            std::cout << "Teren: Woda" << std::endl;
            return 3;
            break;
        case Pole::RodzajTerenu::Góry:
            std::cout << "Teren: Woda" << std::endl;
            return 4;
            break;
        case Pole::RodzajTerenu::Przepaść:
            return 5;
            std::cout << "Teren: Woda" << std::endl;
            break;

        default:
            std::cout << "Nieznany teren" << std::endl;
            return 0;
        }
    }
    else
    {
        return -1; //błąd
    }


}

void get_przeciwnik(std::vector<std::vector<Pole>> plansza, int x, int y) {
    // Sprawdzenie, czy na polu jest przeciwnik
    Pole wybranePole = plansza[x][y];
    if (!wybranePole.przeciwnicy.empty()) {
        std::cout << "Na polu jest przeciwnik!" << std::endl;
        // Tutaj możesz dodać logikę do obsługi przeciwników
        for (const auto& przeciwnik : wybranePole.przeciwnicy) {
            // Wykonaj działania na każdym przeciwniku
            std::cout << "Przeciwnik: " << przeciwnik->getName() << std::endl;
        }
    }
}

void get_przedmiot(std::vector<std::vector<Pole>> plansza, int x, int y) {
    // Sprawdzenie, czy na polu jest znaleziony przedmiot
    Pole wybranePole = plansza[x][y];
    if (wybranePole.znalezionyPrzedmiot) {
        std::cout << "Znaleziono przedmiot: " << *wybranePole.znalezionyPrzedmiot << std::endl;
    }
}

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
        }, "Miecz laserowy");

    int x = 1; // indeks wiersza
    int y = 2; // indeks kolumny

    get_rodzaj_terenu(plansza, x, y);

    get_przeciwnik(plansza, x, y);

    get_przedmiot(plansza, x, y);

	return 0;
}
