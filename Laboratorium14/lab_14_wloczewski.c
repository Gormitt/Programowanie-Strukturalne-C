// Zadanie 94 - 100

#include <stdio.h>

#define ERROR_WCZYTYWANIE printf("ERROR - blad podczas wczytywania danych, prosze sprobuj ponownie: ");
#define ERROR_ALOKACJA printf("ERROR - blad podczas alokowania miejsca na tablice\n");
#define KONIEC_PROGRAMU printf("Koniec programu.\n\n");
#define ROZMIAR_MACIERZY 25

void CzyszczenieBufora() {
	while (getchar() != '\n') {}
}

void Zadanie94() {
	printf("Zadanie nr. 94 - program do sprawdzenia, czy wsztkie elementy pod przekatna to zera\n");
	int macierz[ROZMIAR_MACIERZY][ROZMIAR_MACIERZY];
	int rozmiar;
	do {
		printf("podaj szerokosc kwadratowej macierzy: ");
		while (scanf_s("%d", &rozmiar) != 1 || getchar() != '\n') {
			CzyszczenieBufora();
			ERROR_WCZYTYWANIE
		}
	} while (rozmiar <= 0 || rozmiar > 25);

	for (int y = 0; y < rozmiar; y++) {
		for (int x = 0; x < rozmiar; x++) {
			int wpis;
			printf("podaj wspolrzedna x: %d y: %d: ", x + 1, y + 1);
			while (scanf_s("%d", &wpis) != 1 || getchar() != '\n' || (wpis != 0 && wpis != 1)) {
				CzyszczenieBufora();
				ERROR_WCZYTYWANIE
			}
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
	printf("Zadanie 95 - program do \n");

	KONIEC_PROGRAMU
}

main() {
	Zadanie94();
	return 0;
}