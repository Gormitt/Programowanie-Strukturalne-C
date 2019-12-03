// ZADANIA 17 - 24

#include <stdio.h>

main() {
	// Zadanie nr. 17
	int liczbaA; // miejsce na liczba podana przez uzytkownika
	printf("Zadanie nr. 17 - program do wypisywania podanej przez uzytkownika liczby calkowitej\n");
	printf("Podaj liczbe calkowita: ");
	scanf_s("%d", &liczbaA);
	printf("Podales liczbe: %d\n", liczbaA);
	printf("Koniec programu.\n\n");

	// Zadanie nr. 18
	float liczbaB;
	printf("Zadanie nr. 18 - program do wypisania podanej przez uzytkownika liczby wymiernej\n");
	printf("Podaj liczbe wymierna: ");
	scanf_s("%f", &liczbaB);
	printf("Podales liczbe: %f\n", liczbaB);
	printf("Koniec programu.\n\n");

	// Zadanie nr. 19
	int liczbaC, liczbaD;
	printf("Zadanie nr. 19 - program do wypisania podanych przez uzytkownika dwoch liczb calkowitych\n");
	printf("Podaj pierwsza liczbe calkowita: ");
	scanf_s("%d", &liczbaC);
	printf("Podaj druga liczbe calkowita: ");
	scanf_s("%d", &liczbaD);
	printf("Podales liczby: %d, %d\n", liczbaC, liczbaD);
	printf("Koniec programu.\n\n");

	// Zadanie nr. 20
	int liczbaE, liczbaF;
	printf("Zadanie nr. 20 - program do wypisywania dwoch podanych przez uzytkownika liczb calkowitych z kontrola poprawnosci\n");
	printf("Podaj pierwsza liczbe: ");
	if (scanf_s("%d", &liczbaE) != 1 || getchar() != '\n') {
		printf("ERROR: niepoprawny format, koncze dzialanie programu\n\n");
		return 0;
	}
	printf("Podaj druga liczbe: ");
	if (scanf_s("%d", &liczbaF) != 1 || getchar() != '\n') {
		printf("ERROR: niepoprawny format, koncze dzialanie programu\n\n");
		return 0;
	}
	printf("Podane liczby to: %d, %d\n", liczbaE, liczbaF);	// zastasowany system nie gwarantuje poprawnosci: liczby 10 i 10.5
	printf("Koniec programu.\n\n");

	// Zadanie nr. 21
	printf("Zadanie nr. 21 - program do wypisania podanej przez uzytkownika liczby hexadecymalnej z kontrola bledow\n");
	int liczbaG;
	printf("Podaj liczbe w systemie szesnastkowym: ");
	if (scanf_s("%x", &liczbaG) != 1) {
		printf("ERROR: niepoprawny format, koncze dzialanie programu\n\n");
	}
	else {
		printf("Podana liczba to: %x\n", liczbaG);
		printf("Liczby ujemne nie sa wypisywane prawidlowo.\n");
	}
	printf("Koniec programu.\n\n");

	// Zadanie nr. 22
	printf("Zadanie nr. 22 - program do pobrania liczby dziesietnej od uzytkownika i wypisania w systemie szesnastkowym\n");
	int liczbaH;
	printf("Podaj calkowita liczbe w sytemie dziesietnym: ");
	if (scanf_s("%d", &liczbaH) != 1) {
		printf("ERROR: niepoprawny format, koncze dzialanie programu\n\n");
	}
	else {
		printf("Podana liczba (%d) to %x w sytemie szesnastkowym\n", liczbaH, liczbaH);
		printf("Liczby ujemne nie sa wypisywane poprawnie.\n");
	}
	printf("Koniec programu.\n\n");

	// Zadanie nr. 23
	printf("Zadanie nr. 23 - program do pobrania nieujemnej liczby calkowitej od uzytkownika i wypisania w systemie szesnastkowym\n");
	int liczbaI = 0;
	printf("Podaj nieujemna calkowita liczba w systemie dziesietnym: ");
	if (scanf_s("%d", &liczbaI) != 1) {
		printf("ERROR: niepoprawny format, koncze dzialanie programu\n\n");
	}
	else if (liczbaI < 0) {
		printf("ERROR: liczba nie moze byc ujemna, koncze dzialanie programu\n\n");
	}
	else {
		printf("Podana liczba (%d) to %x w systemie szesnastkowym\n", liczbaI, liczbaI);
	}
	printf("Koniec programu.\n\n");

	// Zadanie nr. 24
	printf("Zadanie nr. 24 - program do pobrania liczby calkowitej i okreslenia czy jest ona dodatnia czy ujemna\n");
	int liczbaJ;
	printf("Podaj liczbe calkowita: ");
	if (scanf_s("%d", &liczbaJ) != 1) {
		printf("ERROR: niepoprawny format, koncze dzielanie programu\n\n");
		return 0;
	}
	else if (liczbaJ > 0) {
		printf("Podana liczba jest dodatnia\n");
	}
	else {
		printf("Podana liczba jest niedodatnia\n");
	}
	printf("Koniec programu.\n\n");

	return 0;
}