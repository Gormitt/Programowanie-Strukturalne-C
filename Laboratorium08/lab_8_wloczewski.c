// Zadania 55 - 61

#include <stdio.h>
#include <math.h>

#define LICZBA_PI 3.14159265

main() {
	/*
	// Zadanie nr. 55
	int liczba1;
	int rekord1, licznikPetli1 = 0;
	printf("Zadanie nr. 55 - program do pobrania ciagu liczb naturalnych\n");
	while(1) {
		licznikPetli1++;
		printf("wpisz: \n1)'0' aby zakonczyc wpisywanie ciagu \n2)dowolna liczba calkowita wieksza od 0, aby dodac ja do ciagu\nwpis: ");
		while (scanf_s("%d", &liczba1) != 1 || liczba1 < 0 || getchar() != '\n') {
			while (getchar() != '\n') {}
			printf("ERROR - blad wczytywania: ");
		}
		if (liczba1 == 0 && licznikPetli1 == 1) {
			printf("W ciagu nie podano zadnej wartosci\n");
			break;
		}
		else if (liczba1 == 0) {
			printf("Najmniejsza wartosc w podanyc ciagu to: %d\n", rekord1);
			break;
		}
		else if (liczba1 != 0 && licznikPetli1 == 1) {
			rekord1 = liczba1;
		}
		else {
			if (liczba1 < rekord1) {
				rekord1 = liczba1;
			}
		}
	} 
	printf("Koniec zadania.\n\n");
	
	// Zadanie nr. 56
	int licznikPetli2 = 1;
	float srednia = 0, liczba2;
	printf("Zadanie nr. 56 - program do obliczenia sredniej arytmetycznej 10 liczb\n");
	while (licznikPetli2 <= 10) {
		printf("prosze, podaj liczbe zmiennoprzecinkowa: ");
		while (scanf_s("%f", &liczba2) != 1 || getchar() != '\n') {
			while (getchar() != '\n') {}
			printf("ERROR - niepoprawnie wczytane dane, prosze sprobuj ponownie: ");
		}
		srednia += liczba2;
		licznikPetli2++;
	}
	srednia /= 10;
	printf("Srednia arytmetyczna podanych liczb to: %f\n", srednia);
	printf("Koniec programu.\n\n");
	
	// Zadanie nr. 57
	int licznikPetli3 = 0;
	double sredniaArytmetyczna = 0, sredniaGeometryczna = 1;
	printf("Zadanie nr. 57 - program do obliczania sredniej arytmetycznej i geometrycznej\n");
	while (1) {
		int liczba3 = 0;
		printf("wpisz: \n1) '0' aby zakonczyc wpisywanie ciagu \n2) dowolna liczba calkowita wieksza od 0, aby dodac ja do ciagu\nwpis: ");
		while (scanf_s("%d", &liczba3) != 1 || getchar() != '\n') {
			while (getchar() != '\n') {}
			printf("ERROR - blad wczytywania danych, prosze sprobuj ponownie: ");
		}
		if (liczba3 == 0 && licznikPetli3 == 0) {
			printf("W ciagu nie podano zadnej wartosci\n");
			break;
		}
		else if (liczba3 == 0) {
			break;
		}
		else if (liczba3 < 0) {
			printf("ERROR - wczytana liczba jest niedodatnia\n");
			continue;
		}
		else {
			licznikPetli3++;
			sredniaArytmetyczna += liczba3;
			sredniaGeometryczna *= liczba3;
		}
	}
	if (licznikPetli3 > 0) {
		sredniaArytmetyczna /= licznikPetli3;
		sredniaGeometryczna = pow(sredniaGeometryczna, (1 / (double)licznikPetli3));
		printf("srednia arytmetyczna podanych liczb: %lf\n", sredniaArytmetyczna);
		printf("srednia geometryczna podanych liczb: %lf\n", sredniaGeometryczna);
	}
	printf("Koniec programu.\n\n");
	
	// Zadanie nr. 58
	printf("Zadanie nr. 58 - program do wczytania ciagu binarnego i wyswietlenia jego wartosci\n");
	printf("Podaj ciag binarny: ");
	int licznikZnakow = 0;
	long long wartoscCiaguBinarnego = 0;
	while (1) {
		char znak = getchar();
		if (znak == '\n' && licznikZnakow == 0) {
			printf("brak wartosci, bo ciag jest pusty\n");
			break;
		}
		else if (znak == '\n') {
			printf("wartosc podanego ciagu to: %lld\n", wartoscCiaguBinarnego);
			break;
		}
		else if (znak != '0' && znak != '1') {
			printf("brak wartosci, w ciagu podano niedozwolony znak\n");
			break;
		}
		else {
			licznikZnakow++;
			if (licznikZnakow > 32) {
				printf("brak wartosci, przekroczono 32 znaki\n");
				break;
			}
			wartoscCiaguBinarnego *= 2;
			if (znak == '1') wartoscCiaguBinarnego++;
		}
	}
	printf("Koniec programu.\n\n");
	
	// Zadanie nr. 59
	double liczba4;
	int czyszczenieBufora = 0, iloscWpisanychLiczb = 0;
	double suma = 0, roznica = 0, iloczyn = 1, iloraz = 1;
	printf("Zadanie nr. 59 - program do wczytania liczb i wykonania opercaji\n");
	while (1) {
		if (czyszczenieBufora) {
			while (getchar() != '\n') {}
			czyszczenieBufora = 0;
		}

		char wybor, kolejnyZnak;
		printf("\n0. Zakoncz program\n");
		printf("1. Wczytaj liczby\n");
		printf("2. Dodaj\n");
		printf("3. Odejmij\n");
		printf("4. Pomnoz\n");
		printf("5. Podziel.\n");
		printf("wybor: ");
		wybor = getchar();
		kolejnyZnak = getchar();
		
		if (kolejnyZnak == '\n' && wybor >= '0' && wybor <= '5') {
			if (wybor == '0') {
				break;
			}
			else if (wybor == '1') {
				printf("wczytaj liczbe: ");
				while (scanf_s("%lf", &liczba4) != 1 || getchar() != '\n') {
					while (getchar() != '\n') {}
					printf("ERROR - blad podczas wczytywania danych, sprobuj ponownie: ");
				}
				iloscWpisanychLiczb++;
				suma += liczba4;
				iloczyn *= liczba4;
				if (iloscWpisanychLiczb == 1) {
					roznica = liczba4;
					iloraz = liczba4;
				}
				else {
					roznica -= liczba4;
					iloraz /= liczba4;
				}
			}
			else if (wybor == '2') {
				printf("suma wszystkich podanych liczb to: %lf\n", suma);
			}
			else if (wybor == '3') {
				printf("roznica wszystkich podanych liczb to: %lf\n", roznica);
			}
			else if (wybor == '4') {
				printf("iloczyn wszystkich podanych liczb to: %lf\n", iloczyn);
			}
			else if (wybor == '5') {
				printf("iloraz wszystkich podanych liczb to: %lf\n", iloraz);
			}
			continue;
		}
		else if (kolejnyZnak == '\n' && (wybor < '0' || wybor > '5')) {
			printf("ERROR - nie ma takiej opcji\n");
			continue;
		}
		else {
			printf("ERROR - niepoprawnie wczytane dane\n");
			czyszczenieBufora = 1;
			continue;
		}
	}
	printf("Koniec programu.\n\n");
	*/
	// Zadanie nr. 60
	char wybor;			// deklaracja miennej wyboru opcji
	double pole = 0;	// zmienna na pole, ktore liczymy
	printf("Zadanie nr. 43 - program do obliczania pola trojkata, wg. wybranej metody\n");
	while (1) {
		printf("\nwybierz na podstawie jakich danych program na obliczyc pole:\n");
		printf("(1) bok i opuszczona na niego wysokosc\n");
		printf("(2) dwa boki oraz kat pomiedzy nimi\n");
		printf("(3) trzy boki\n");
		printf("(4) wyjdz z programu\n");
		printf("wybierz opcje: ");
		wybor = getchar();	// pobranie od yzytkownika wyboru
		while (wybor < '1' || wybor > '4' || getchar() != '\n') {	// jezeli wybor to zla cyfra lub zawiera wiecej niz jeden znak
			while (getchar() != '\n') {}
			printf("prosze o wybranie opcji <1, 2, 3, 4> : ");		// zapytaj ponownie
			wybor = getchar();
		}
		// uzytkownik wybral wyjscie z programu
		if (wybor == '4') {
			break;
		}
		// jezeli wybor to: bok i opuszczona na niego wysokosc
		else if (wybor == '1') {
			double bok = 0, wysokosc = 0;	// deklaracja zmiennych na bok i wysokosc
			printf("\ndlugosc boku trojkata a nastepnie wysokosc\n");
			do {	// petla bedzie sie powtarzac tak dlugo, az podane wielkosci beda dodatnie
				printf("pamietaj, aby z podanych dlugosci dalo sie utworzyc trojkat - dlugosci: ");
				while (scanf_s("%lf %lf", &bok, &wysokosc) != 2 || getchar() != '\n') {	// jezeli podczas wczytywanie wystapi blad lub po danych zostanie wpisany dodatkowy znak
					while (getchar() != '\n') {}
					printf("blad wczytywania - spobouj podobnie: ");	// zapytaj ponownie
				}
			} while (bok <= 0 || wysokosc <= 0);
			pole = bok * wysokosc * 0.5;	// gdy wszyskie dane sa poprawne oblicz pole zgodnie z przyjeta formula
		}
		// jezeli wybor to dwa boki oraz kat miedzy nimi
		else if (wybor == '2') {
			double bok1, bok2, kat;		// zaklderaonie zmienny nach boki i kat miedzy nimi
			printf("\n(1) radiany\n");
			printf("(2) stopnie\n");
			printf("wybierz jednostke dla kata: ");
			char wybor = getchar();		// zaslaniamy zmienna wyboru aby dac mozliwosc wybrania jednostki kata
			while (wybor < '1' || wybor > '2' || getchar() != '\n') {	// jezeli wybor to zla cyfra lub zawiera wiecej niz jeden znak
				while (getchar() != '\n') {}
				printf("prosze o wybranie opcji <1, 2> : ");		// zapyaj ponownie
				wybor = getchar();
			}
			printf("podaj dlugosci dwoch sasiednich bokow trojkata\n");
			do {	// petla bedzie sie wykonywac tak dlugo az podane wielkosci beda doatnie
				printf("pamietaj, aby z podanych dlugosci dalo sie utworzyc trojkat - dlugosci: ");
				while (scanf_s("%lf %lf", &bok1, &bok2) != 2 || getchar() != '\n') {	// jezli podczsa wczytywania wystapi blad lub po danych zostanie wpisany dodatkowy znak
					while (getchar() != '\n') {}
					printf("blad wczytywania - sprobuj ponownie: ");	// zapytaj ponownie
				}
			} while (bok1 <= 0 || bok2 <= 0);
			// gdy wybrana jednostka sa radiany
			if (wybor == '1') {
				printf("podaj kat [liczba bedzie rozpatrzona jako radiany]\n");
				do {	// petala bedzie sie wykonywac tak dlugo az podany kat bedzie z zakresu (0, 1 radian)
					printf("pamietaj ze kat musi byc mniejszy od 1 radiana: ");
					while (scanf_s("%lf", &kat) != 1 || getchar() != '\n') {	// jezeli podczas wczytania wystapi blad lub po danych zostanie wpisany dodatkowy znak
						while (getchar() != '\n') {}
						printf("blad wczytywania danych - sprobuj ponownie: ");	// zapytaj ponownie
					}
				} while (kat >= 1 || kat <= 0);
				pole = 0.5 * bok1 * bok2 * sin(kat);	// gdy wszystkie dane sa poprawne oblicz pole zgodnie z przyjeta formula
			}
			// gdy wybrana jednostka to stopnie
			else if (wybor == '2') {
				printf("podaj kat [liczba bedzie rozpatrzona jako stopnie]\n");
				do {	// petla bedzie wykonywana tak dlugo az podany kat bedzie z zakresu (0, 180 stopni)
					printf("pamietaj ze kat musi byc mniejszy od 180 stopni: ");
					while (scanf_s("%lf", &kat) != 1 || getchar() != '\n') {	// jezli podczas wczytania wystapi blad lub po danych zostanie wpisany dodatkowy znak
						while (getchar() != '\n') {}
						printf("blad wczytywania danych - sprobuj ponownie: ");	// zapytaj ponownie
					}
				} while (kat >= 180 || kat <= 0);
				// konwersja kata na radiany
				// stopien <= stopien * radian / stopien = radian
				kat = kat * LICZBA_PI / 180;
				pole = 0.5 * bok1 * bok2 * sin(kat);	// gdy wszystkie dane sa poprawne oblicz pole zgdodnie z przyjeta formula
			}
		}
		// jezeli wybrana opcja to trzy boki
		else if (wybor == '3') {
			double bok1, bok2, bok3;	// deklaracja zmiennych na trzy boki
			printf("\npodaj dlugosci trzech obokow trojkata \n");
			do {	// peta bedzie sie wykonywac tak dlugo az podane wielkosci beda dodatnie i beda spelniac warunki utworzenia trojkata
				printf("pamietaj, aby z podanych dlugosci dalo sie utworzyc trojkat - dlugosci: ");
				while (scanf_s("%lf %lf %lf", &bok1, &bok2, &bok3) != 3 || getchar() != '\n') {	// jezeli podczas wczytywanie wystapi blad lub po danych zostanie wpisany dodatkowy znak
					while (getchar() != '\n') {}
					printf("blad wczytywania danych - sprobuj poniwnie: ");	// zapytaj ponownie
				}
			} while (bok1 >= bok2 + bok3 || bok2 >= bok1 + bok3 || bok3 >= bok1 + bok2 || bok1 <= 0 || bok2 <= 0 || bok3 <= 0);
			double polowaobwodu = 0.5 * (bok1 + bok2 + bok3);	// obliczenie polowy obwodu (potrzebne do wzoru herona)
			pole = sqrt(polowaobwodu * (polowaobwodu - bok1) * (polowaobwodu - bok2) * (polowaobwodu - bok3));	// gdy dane sa poprawne oblicz pole wedlug przyjetej formuly
		}
		printf("pole tego trojkata wynosi %lf\n", pole);	// na koniec wypisz wynik
	}
	printf("Koniec programu.\n\n");

	// Zadanie nr. 61
	
}