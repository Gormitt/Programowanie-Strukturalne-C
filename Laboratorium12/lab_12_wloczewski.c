// Zadania 82 - 86

#include <stdio.h>
#include <stdlib.h>

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
						*(tab + j) = NULL;
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
	printf("wielomian ma postac: W(x) =");
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
	int* wspolczynniki = (int*)malloc(sizeof(int) * stopienWielomianu);
	if (wspolczynniki != NULL) {
		for (int i = 0; i < wspolczynniki; i++) {
			int wpis;
			printf("podaj wspolczynnik a%d: ", i);
			while (scanf_s("%d", &wpis) != 1 || getchar() != '\n') {
				CZYSZCZENIE_BUFORA
				ERROR_WCZYTYWANIE
			}
		}
		// wczytanie, dla jakiego x liczymy wartosc podanego wielomianu

	}
	else {
		ERROR_ALOKACJA
	}
	KONIEC_PROGRAMU
}

main() {
	//Zadanie82();
	Zadanie83();
	return 0;
}