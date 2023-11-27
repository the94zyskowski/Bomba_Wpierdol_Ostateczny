#include "Bomba_Wpierdol_Ostateczny.h"
#include "KapitanBomba.h"
#include <string>
#include <locale>
#include <iostream>


int main()
{
    setlocale(LC_ALL, "Polish");

    KapitanBomba tytus_bomba("Kapitan Tytus Bomba", 100, 9, 10, 7, 5, 5);

	return 0;
}
