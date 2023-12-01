#include "Bomba_Wpierdol_Ostateczny.h"

#include <string>
#include <locale>
#include <vector>
#include <random>
#include <utility> // Dla std::pair

std::pair<int, int> generate_starting_point() {
    // Zakładając, że rozmiar planszy to 10x10
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(3, 7);

    int startX = distr(gen);
    int startY = distr(gen);

    // Ustawienie pozycji startowej Kapitana Bomby

    return std::make_pair(startX, startY);
}

int main()
{
    setlocale(LC_ALL, "Polish");

    // Tworzenie macierzy 10x10
    std::vector<std::vector<Pole>> plansza(10, std::vector<Pole>(10, Pole(Pole::RodzajTerenu::Trawa)));

    std::pair<int, int> xy = generate_starting_point();

    KapitanBomba tytus_bomba("Kapitan Tytus Bomba", 100, 10, 10, 6, 4, 5, xy.first, xy.second, 0);

    // Ustawienie konkretnego pola z przeciwnikami
    //plansza[1][2] = Pole(Pole::RodzajTerenu::Piasek, {
    //    std::make_shared<Kosmita>("Michaś", 20, 3, 7, 4, 3, 1, 0),
    //    std::make_shared<Kosmita>("Zdzichu", 15, 5, 6, 3, 2, 2, 1),
    //   std::make_shared<Robot>("Kutaminator-01", 8, 3, 6, 4, 3, 2, 0)
    //    }, "Miecz laserowy");

	return 0;
}
