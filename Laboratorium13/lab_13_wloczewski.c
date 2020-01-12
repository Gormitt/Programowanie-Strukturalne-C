// zadania 87 – 93

#include <stdio.h>
#include <stdlib.h>

#define ERROR_WCZYTYWANIE printf("ERROR - blad podczas wczytywania danych, prosze sprobuj ponownie: ");
#define ERROR_ALOKACJA printf("ERROR - blad podczas alokowania miejsca na tablice\n");
#define KONIEC_PROGRAMU printf("Koniec programu.\n\n");

enum {false, true};

void CzyszczenieBufora() {
	while (getchar() != '\n') {}
}

void Zadanie87() {
	int macierz[25][25];
	int szerokosc, wysokosc;
	printf("Zadanie nr. 87 - program do wyswietlenia macierzy\n");
	do {
		printf("podaj szerokosc macierzy i wysokosc macierzy (z przedzialu od 0 do 25): ");
		while (scanf_s("%d %d", &szerokosc, &wysokosc) != 2 || getchar() != '\n') {
			CzyszczenieBufora();
			ERROR_WCZYTYWANIE
		}
	} while (szerokosc <= 0 || szerokosc > 25 || wysokosc <= 0 || wysokosc > 25);

	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			printf("rzad %d komorka %d: ", y + 1, x + 1);
			int wpis;
			while (scanf_s("%d", &wpis) != 1 || getchar() != '\n') {
				CzyszczenieBufora();
				ERROR_WCZYTYWANIE
			}
			macierz[y][x] = wpis;
		}
	}

	printf("\npobrana macierz to: \n");
	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			printf("%3d ", macierz[y][x]);
		}
		printf("\n");
	}
	KONIEC_PROGRAMU
}

void Zadanie88() {
	printf("Zadanie nr. 88 - program do odwracania macierzy\n");
	int macierz[25][25];
	int wysokosc, szerokosc;
	do {
		printf("podaj wysokosc i szerokosc z przedzialu (0, 25] oddzielone spacja: ");
		while (scanf_s("%d %d", &wysokosc, &szerokosc) != 2 || getchar() != '\n') {
			CzyszczenieBufora();
			ERROR_WCZYTYWANIE
		}
	} while (wysokosc <= 0 || wysokosc > 25 || szerokosc <= 0 || szerokosc > 25);

	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			int wpis;
			printf("podaj komorke x: %d y: %d: ", x + 1, y + 1);
			while (scanf_s("%d", &wpis) != 1 || getchar() != '\n') {
				CzyszczenieBufora();
				ERROR_WCZYTYWANIE
			}
			macierz[y][x] = wpis;
		}
	}

	printf("\npodana macierz [nieodwrocona]\n");
	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			printf("%d ", macierz[y][x]);
		}
		printf("\n");
	}
	printf("\npodana macierz [odwrocona]\n");
	for (int x = 0; x < szerokosc; x++) {
		for (int y = 0; y < wysokosc; y++) {
			printf("%d ", macierz[y][x]);
		}
		printf("\n");
	}
	KONIEC_PROGRAMU
}

void Zadanie89() {
	printf("Zadanie nr. 89 - program do znajdowania najwiekszego elementu w tablicy\n");
	int macierz[25][25];
	int wysokosc, szerokosc;
	do {
		printf("podaj wysokosc i szerokosc z przedzialu (0, 25] oddzielone spacja: ");
		while (scanf_s("%d %d", &wysokosc, &szerokosc) != 2 || getchar() != '\n') {
			CzyszczenieBufora();
			ERROR_WCZYTYWANIE
		}
	} while (wysokosc <= 0 || wysokosc > 25 || szerokosc <= 0 || szerokosc > 25);
	
	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			printf("wpisz wartosc do komorki (%d, %d): ", x + 1, y + 1);
			int wpis;
			while (scanf_s("%d", &wpis) != 1 || getchar() != '\n') {
				CzyszczenieBufora();
				ERROR_WCZYTYWANIE
			}
			macierz[y][x] = wpis;
		}
	}

	int maxX = 0, maxY = 0;
	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			if (macierz[y][x] > macierz[maxY][maxX]) {
				maxX = x;
				maxY = y;
			}
		}
	}
	printf("najwieksza wartosc w podanej macierzy to: %d\n", macierz[maxY][maxX]);
	KONIEC_PROGRAMU
}

void Zadanie90() {
	printf("Zadanie nr. 90 - program do okreslania ilosci jedynek w rzedzie i kolumnie\n");
	int wysokosc, szerokosc;
	int macierz[25][25];
	do {
		printf("podaj wysokosc i szerokosc z przedzialu (0, 25] oddzielone spacja: ");
		while (scanf_s("%d %d", &wysokosc, &szerokosc) != 2 || getchar() != '\n') {
			CzyszczenieBufora();
			ERROR_WCZYTYWANIE
		}
	} while (wysokosc <= 0 || wysokosc > 25 || szerokosc <= 0 || szerokosc > 25);
	
	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			int wpis;
			do {
				printf("wpis do macierzt, podaj 0 lub 1: ");
				while (scanf_s("%d", &wpis) != 1 || getchar() != '\n') {
					CzyszczenieBufora();
					ERROR_WCZYTYWANIE
				}
			} while (wpis != 0 && wpis != 1);
			macierz[y][x] = wpis;
		}
	}

	int kolumny[25] = { 0 };
	int wiersze[25] = { 0 };
	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			kolumny[x] += macierz[y][x];
			wiersze[y] += macierz[y][x];
		}
	}
	
	printf("\n");
	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			printf("%d ", macierz[y][x]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < wysokosc; i++) {
		if (kolumny[i] == 1) {
			printf("kolumna %i ma dokladnie jedna jedynke\n", i + 1);
		}
		if (wiersze[i] == 1) {
			printf("wiersz %i ma dokladnie jedna jedynke\n", i + 1);
		}
	}
	KONIEC_PROGRAMU
}

void Zadanie91() {
	printf("Zadanie nr. 91 - program do sumowania elementow tablicy\n");
	int macierz[25][25];
	int wysokosc, szerokosc;
	int suma = 0;
	do {
		printf("podaj wysokosc i szerokosc z przedzialu (0, 25] oddzielone spacja: ");
		while (scanf_s("%d %d", &wysokosc, &szerokosc) != 2 || getchar() != '\n') {
			CzyszczenieBufora();
			ERROR_WCZYTYWANIE
		}
	} while (wysokosc <= 0 || wysokosc > 25 || szerokosc <= 0 || szerokosc > 25);

	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			int wpis;
			printf("wpisz wartosc do komorki %d %d: ", x + 1, y + 1);
			while (scanf_s("%d", &wpis) != 1 || getchar() != '\n') {
				CzyszczenieBufora();
				ERROR_WCZYTYWANIE
			}
			macierz[y][x] = wpis;
		}
	}

	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			suma += macierz[y][x];
		}
	}
	  
	printf("suma elementow macierzy to: %d\n", suma);
	KONIEC_PROGRAMU
}

void Zadanie92() {
	printf("Zadanie nr. 92 - program do obliczenia sumy glownej przekatnej kwadratowej macierzy\n");
	int macierz[25][25];
	int wysokosc, szerokosc;
	int suma = 0;
	do {
		printf("podaj wysokosc i szerokosc z przedzialu (0, 25] oddzielone spacja, tak zeby byly takie same: ");
		while (scanf_s("%d %d", &wysokosc, &szerokosc) != 2 || getchar() != '\n') {
			CzyszczenieBufora();
			ERROR_WCZYTYWANIE
		}
	} while (wysokosc <= 0 || wysokosc > 25 || szerokosc <= 0 || szerokosc > 25 || wysokosc != szerokosc);

	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			int wpis;
			printf("wpisz wartosc do komorki %d %d: ", x + 1, y + 1);
			while (scanf_s("%d", &wpis) != 1 || getchar() != '\n') {
				CzyszczenieBufora();
				ERROR_WCZYTYWANIE
			}
			macierz[y][x] = wpis;
		}
	}

	int indeksPrzekatnej = 0;
	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			if (x == indeksPrzekatnej) {
				suma += macierz[y][x];
			}
		}
		indeksPrzekatnej++;
	}

	printf("suma glownej przkatnej macierzy to: %d\n", suma);
	KONIEC_PROGRAMU
}

void Zadanie93() {
	printf("Zadanie nr. 93 - program do sumownania elementow ponad glowna przekatna\n");
	int macierz[25][25];
	int wysokosc, szerokosc;
	int suma = 0;
	do {
		printf("podaj wysokosc i szerokosc z przedzialu (0, 25] oddzielone spacja, tak zeby byly takie same: ");
		while (scanf_s("%d %d", &wysokosc, &szerokosc) != 2 || getchar() != '\n') {
			CzyszczenieBufora();
			ERROR_WCZYTYWANIE
		}
	} while (wysokosc <= 0 || wysokosc > 25 || szerokosc <= 0 || szerokosc > 25 || wysokosc != szerokosc);

	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			int wpis;
			printf("wpisz wartosc do komorki %d %d: ", x + 1, y + 1);
			while (scanf_s("%d", &wpis) != 1 || getchar() != '\n') {
				CzyszczenieBufora();
				ERROR_WCZYTYWANIE
			}
			macierz[y][x] = wpis;
		}
	}

	int indeksPrzekatnej = 0;
	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			if (x > indeksPrzekatnej) {
				suma += macierz[y][x];
			}
		}
		indeksPrzekatnej++;
	}

	printf("suma elementow ponad glowna przkatna macierzy to: %d\n", suma);
	KONIEC_PROGRAMU
}

main() {
	/Zadanie87();
	Zadanie88();
	Zadanie89();
	Zadanie90();
	Zadanie91();
	Zadanie92();
	Zadanie93();
	return 0;
}