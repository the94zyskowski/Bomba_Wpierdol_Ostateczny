﻿#include "Bomba_Wpierdol_Ostateczny.h"

#include <string>
#include <locale>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Polish");

    KapitanBomba tytus_bomba("Kapitan Tytus Bomba", 100, 9, 10, 7, 5, 5, 10);

    Kosmita kosmita_1("Michaś", 20, 3, 10, 7, 2, 3, 0);

	return 0;
}
