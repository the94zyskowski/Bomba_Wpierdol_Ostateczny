#include "Bomba_Wpierdol_Ostateczny.h"

#include <string>
#include <locale>
#include <vector>

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
