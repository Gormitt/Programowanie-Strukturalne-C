// Zadania 82 - 86

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define CZYSZCZENIE_BUFORA while(getchar() != '\n') {}
#define ERROR_WCZYTYWANIE printf("ERROR - blad podczas wczytywania danych, prosze sprobuj ponownie: ");
#define ERROR_ALOKACJA printf("ERROR - blad podczas alokowania miejsca na tablice\n");
#define KONIEC_PROGRAMU printf("Koniec programu.\n\n");

void Zadanie82() {
	printf("Zadanie nr. 82 - program do wczytania n liczb i wyswietlenia par\n");
	int n; // ilosc liczb do pobrania
	do { 
		printf("podaj n (od 0 do 100 wylacznie) : ");
		while (scanf_s("%d", &n) != 1 || getchar() != '\n') {
			CZYSZCZENIE_BUFORA
			ERROR_WCZYTYWANIE
		}
	} while (n <= 0 || n >= 100);

	int* tab = (int*)malloc(sizeof(int) * n); // tablica na liczby
	if (tab != NULL) { 
		int wpis; // zmienna na wczytywanie kolejnych elementow
		for (int i = 0; i < n; i++) { // wczytanie 
			printf("podaj wpis nr. %d: ", i + 1);
			while (scanf_s("%d", &wpis) != 1 || getchar() != '\n') {
				CZYSZCZENIE_BUFORA
				ERROR_WCZYTYWANIE
			}
			*(tab + i) = wpis; // wpisanie do odpowiedniego miejsca w tablicy
		}

		// ALGORYTM NA SZUKANIE PARY:
		// iteruj po i od pierwszego do przedostatniego elementu tablicy
		// dla kazdego i iteruj po j od i + 1 do ostatniego elemtu talblicy
		// gdy tab[i] == tab[j] to policz to jako powtorzenie
		// gdy podczas dodawania powtorzenia, ich ilosc przekroczy 1 tzn ze w zbiorze sa wiecej niz 2 takie same elementy (to nie para) - wtedy kazdy kolejny taki sam element zmieniamy na null
		// dzieki temu, gdy nasz wskaznik i przesunie sie na kolejna liczbe ktora wystepuje czesciej niz 2 razy, to nie wykrujemy powtorzenia
		int iloscPar = 0;
		for (int i = 0; i < n - 1; i++) { 
			int iloscPowtorzen = 0;
			for (int j = i + 1; j < n; j++) {
				if (*(tab + i) == *(tab + j)) {
					iloscPowtorzen++;
					if (iloscPowtorzen > 1) {
						*(tab + j) = NULL; // poprawiæ niezgodnoœæ typu !!!
					}
				}
			}
			// w naszej tablicy jedyna powtarzajaca sie wartoscia moga byc albo pary, albo wartoscii NULL, dlatego odrzucamy ten drugi przypadek
			if (iloscPowtorzen == 1 && *(tab + i) != NULL) {
				printf("w podanym zestawie liczba %d wystepuje dokladnie 2 razy\n", *(tab + i));
				iloscPar++;
			}
		}
		if (iloscPar == 0) {
			printf("w podanym zestawie liczb nie wystepuje zadna para\n");
		}
		free(tab);
	}
	else {
		ERROR_ALOKACJA
	}
	KONIEC_PROGRAMU
}

void Zadanie83() {
	printf("Zadanie nr. 83 - program do obliczenia wartosci wielomianu\n");
	// wczytanie stopnia wielomianu
	int stopienWielomianu = 1; 
	do { 
		printf("podaj stopien wielomianu: ");
		while (scanf_s("%d", &stopienWielomianu) != 1 || getchar() != '\n') {
			CZYSZCZENIE_BUFORA
			ERROR_WCZYTYWANIE
		}
	} while (stopienWielomianu < 0 || stopienWielomianu > 100);

	// wyswietlenie uzytkonwikowi, w jakiej formie jest rozpatrywany dany wielomian
	printf("wspolczynniki oraz x rozpatrujemy jako liczby calkowite\nwielomian ma postac: W(x) =");
	for (int i = 0; i < stopienWielomianu + 1; i++) {
		printf(" a%d*x^%d", i, stopienWielomianu - i);
		if (i != stopienWielomianu) {
			printf("+");
		}
		else {
			printf("\n");
		}
	}

	// wczytanie wspolczynnikow, stojacych przy x-ach danego wielomianu
	stopienWielomianu++;
	int* wspolczynniki = (int*)malloc(sizeof(int) * stopienWielomianu);
	if (wspolczynniki != NULL) {
		int x; // dla tego argumentu policzymy W(x)
		int potegaLiczbyX = 1;
		int wynik = 0;
		for (int i = 0; i < stopienWielomianu; i++) {
			int wpis;
			printf("podaj wspolczynnik a%d: ", i);
			while (scanf_s("%d", &wpis) != 1 || getchar() != '\n') {
				CZYSZCZENIE_BUFORA
				ERROR_ALOKACJA
			}
			*(wspolczynniki + i) = wpis;
		}
		// wczytanie, dla jakiego x liczymy wartosc podanego wielomianu
		printf("podaj x, dla ktorego program policzy wartosc: ");
		while (scanf_s("%d", &x) != 1 || getchar() != '\n') {
			CZYSZCZENIE_BUFORA
			ERROR_WCZYTYWANIE
		}
		for (int i = stopienWielomianu - 1; i >= 0; i--) {
			wynik += *(wspolczynniki + i) * potegaLiczbyX;
			potegaLiczbyX *= x;
		}
		printf("W(%d) = %d\n", stopienWielomianu, wynik);
		free(wspolczynniki);
	}
	else {
		ERROR_ALOKACJA
	}
	KONIEC_PROGRAMU
}

void Zadanie84() {
	/*
	wg. mnie najoptymalniejszym algorytmem jest ostatni z wyszczegolnionych
	(1) i (2) pierwszy jest zdecydowanie najgorszy: trzeba policzyc osobno licznik i mianownik, a potem podzielic
	(3) i (4) sa wg. mnie porownywalnie szybkie, lecz ten ostatni jest prostrzy w zapisie algorytmicznym
	*/
	printf("Zadanie nr. 84 - program do wyswietlenia trojkata Pascala\n");
	// obliczenie 29 po 14
	double wartoscDwumianu = 1;
	int n = 29;
	int k = 14;
	for (int i = 1; i <= n - k; i++) {
		wartoscDwumianu *= (1 + (double)k / (double)i);
	}
	printf("wynikiem %d po %d jest %.0lf\n", n, k, wartoscDwumianu);
	// narysowanie trojkata pascala z 35 wierszy
	int liczbaWierszy = 35;
	int liczbaOperacji = 0;
	for (int wiersz = 0; wiersz <= liczbaWierszy; wiersz++) {
		if (wiersz == 0) {
			printf("  1\n");
		}
		else {
			// tu jest rekurencyjny wzor na silnie n po k + 1
			// n po k + 1 to n po k razy (n - k) / (k + 1)
			// wiemy ze kazdy wiersz zaczyna sie od 1, zatem kazda kolejna komorke w rzedzie nalezy pomnozyc przez (n - k) / (k + 1)
			// gdzie n i k to sa skladniki potrzebne do policzenia poprzedniego symbolu newtona
			wartoscDwumianu = 1;
			for (int kolumna = 1; kolumna < wiersz + 1; kolumna++) {
				printf("%8.0lf ", wartoscDwumianu);
				n = wiersz;
				k = kolumna - 1;
				wartoscDwumianu *= ((double)n - (double)k) / ((double)k + 1.0);
				liczbaOperacji += 4; // policzenie kazdego symbolu newtona to jest pommnozenie przez iloraz dwoch sum z³o¿onych z n i k z poprzedniego symbolu [a ze pierwszy w rzedzie nie wymaga zadnej operacji, bo to 1, wystarcza 4 do obliczenia kazdej komorki]
			}
			printf("%8.0lf\n", wartoscDwumianu);
		}
	}
	printf("ilosc rzedow: %d, ilosc matematycznych operacji: %d\n", liczbaWierszy, liczbaOperacji);

	KONIEC_PROGRAMU
}

void Zadanie86() {
	// jedna wspolrzedna na x to wartosc 0.196349
	printf("Zadanie nr. 86 - program do wyswietlenia wykresu funkcji\n");

	double jednostkaOsiX = 0.196349;
	double jednostkaOsiY = 0.25;
	int dlugoscNaX = 32;
	int dlugoscNaY = 5;

	double* wartosciFunkcji = (double*)malloc(sizeof(double) * dlugoscNaX);
	if (wartosciFunkcji != NULL) {
		// wczytanie wartosci funkcji do tablicy
		double argument = 0;
		for (int i = 0; i < dlugoscNaX; i++) {
			*(wartosciFunkcji + i) = sin(argument);
			argument += jednostkaOsiX;
		}
		// narysowanie tego na ukladzie wspolrzednych
		// 1. narysowanie wszytkiego nad osia x
		printf("^\n");
		for (int y = dlugoscNaY; y > 0; y--) {
			for (int x = 0; x < dlugoscNaX; x++) {
				if (*(wartosciFunkcji + x) <= (y + 0.5) * jednostkaOsiY && *(wartosciFunkcji + x) > (y - 0.5) * jednostkaOsiY) {
					printf("*");
				}
				else if (x == 0){
					printf("|");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
		// 2. narysowanie osi x
		for (int x = 0; x < dlugoscNaX; x++) {
			if (*(wartosciFunkcji + x) <= 0.5 * jednostkaOsiY && *(wartosciFunkcji + x) >= -0.5 * jednostkaOsiY) {
				printf("*");
			}
			else if (x == 0) {
				printf("|");
			}
			else {
				printf("-");
			}
		}
		printf(">\n");
		// 3. narysowanie wszystkiego pod osia x
		for (int y = -1; y >= -dlugoscNaY; y--) {
			for (int x = 0; x < dlugoscNaX; x++) {
				if (*(wartosciFunkcji + x) < (y + 0.5) * jednostkaOsiY && *(wartosciFunkcji + x) >= (y - 0.5) * jednostkaOsiY) {
					printf("*");
				}
				else if (x == 0) {
					printf("|");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
		free(wartosciFunkcji);
	}
	else {
		ERROR_ALOKACJA
	}
	KONIEC_PROGRAMU
}

main() {
	Zadanie82();
	Zadanie83();
	Zadanie84();
	Zadanie86();
	return 0;
}