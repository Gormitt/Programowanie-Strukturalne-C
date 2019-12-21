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
	printf("Zadanie nr. 87 - program do wyswietlenia macierzy\n");

	KONIEC_PROGRAMU
}

main() {
	
}