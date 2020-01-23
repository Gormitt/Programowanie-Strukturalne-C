// Zadanie 94 - 100

#include <stdio.h>

#define ERROR_WCZYTYWANIE printf("ERROR - blad podczas wczytywania danych, prosze sprobuj ponownie: ");
#define ERROR_ALOKACJA printf("ERROR - blad podczas alokowania miejsca na tablice\n");
#define ERROR_ZAKRES printf("ERROR - liczba spoza zakresu, prosze sprobuj ponownie. ");
#define KONIEC_PROGRAMU printf("Koniec programu.\n\n");
#define ROZMIAR_MACIERZY 25

void CzyszczenieBufora() {
	while (getchar() != '\n') {}
}

// funkcja do wypisywania zawartosci macierzy
void WypiszMacierz(int macierz[ROZMIAR_MACIERZY][ROZMIAR_MACIERZY], int wysokosc, int szerokosc) {
	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			printf("%d ", macierz[y][x]);
		}
		printf("\n");
	}
}

// funkcja do wczytania liczby calkowitej z zakresu [min, max]
int WczytajLiczbe(int min, int max) {
	int pierwszaProba = 1;
	int liczba;
	do {
		if (!pierwszaProba) ERROR_ZAKRES
		printf("podaj liczbe z zakresu [%d, %d] : ", min, max);
		while (scanf_s("%d", &liczba) != 1 || getchar() != '\n') {
			CzyszczenieBufora();
			ERROR_WCZYTYWANIE
		}
		pierwszaProba = 0;
	} while (liczba < min || liczba > max);
	return liczba;
}

void Zadanie94() {
	printf("Zadanie nr. 94 - program do sprawdzenia, czy wsztkie elementy pod przekatna to zera\n");
	int macierz[ROZMIAR_MACIERZY][ROZMIAR_MACIERZY];
	int rozmiar;
	
	printf("wczytywanie rozmiaru macierzy, ");
	rozmiar = WczytajLiczbe(1, ROZMIAR_MACIERZY);

	for (int y = 0; y < rozmiar; y++) {
		for (int x = 0; x < rozmiar; x++) {
			printf("wczytywanie wspolrzednej x: %d y: %d, ", x + 1, y + 1);
			int wpis = WczytajLiczbe(0, 1);
			macierz[y][x] = wpis;
		}
	}

	int indeksPrzekatnej = 0, przerwijPetle = 0;
	for (int y = 0; y < rozmiar; y++) {
		for (int x = 0; x < rozmiar; x++) {
			if (x <= indeksPrzekatnej && macierz[y][x] != 0) {
				przerwijPetle = 1;
			}
		}
		if (przerwijPetle) {
			break;
		}
	}

	if (przerwijPetle) {
		printf("ponizej przekatnej (wlacznie z nia) nie ma samych zer\n");
	}
	else {
		printf("ponizej przekatnej (wlacznie z nia) sa same zera\n");
	}
	KONIEC_PROGRAMU
}

void Zadanie95() {
	printf("Zadanie 95 - program do zamiany wierszy w macierzy\n");
	int macierz[ROZMIAR_MACIERZY][ROZMIAR_MACIERZY];
	int wysokosc, szerokosc;
	
	printf("wczytywanie wysokosci macierzy, ");
	wysokosc = WczytajLiczbe(1, ROZMIAR_MACIERZY);
	printf("wczytywanie szerokosci macierzy, ");
	szerokosc = WczytajLiczbe(1, ROZMIAR_MACIERZY);

	for (int y = 0; y < wysokosc; y++) {
		for (int x = 0; x < szerokosc; x++) {
			int wpis;
			printf("wczytywanie wspolrzednej x: %d y: %d, ", x + 1, y + 1);
			wpis = WczytajLiczbe(0, 9);
			macierz[y][x] = wpis;
		}
	}

	printf("rzad, ktory zmieniamy, ");
	int a = WczytajLiczbe(0, wysokosc - 1);	// rzad ktory chcemy zamienic
	printf("rzad, ktory bedziemy tam wstawiac");
	int b = WczytajLiczbe(0, wysokosc - 1); // rzad ktory uzyjemy do podmiany
	for (int x = 0; x < szerokosc; x++) {
		int tmp = macierz[a][x];
		macierz[a][x] = macierz[b][x];
		macierz[b][x] = tmp;
	}

	WypiszMacierz(macierz, wysokosc, szerokosc);

	KONIEC_PROGRAMU
}

main() {
	//Zadanie94();
	//Zadanie95();

	return 0;
}