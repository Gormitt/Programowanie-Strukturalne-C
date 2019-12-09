// zadania 75 - 81

#include <stdio.h>

#define KONIEC_PROGRAMU printf("Koniec programu.\n\n");
#define ERROR_WCZYTANIE printf("ERROR - blad podczas wczytania danych, prosze sprobuj ponownie: ");

void CzyszczenieBufora() {
	while (getchar() != '\n') {}
}

void Zadanie75() {
	int liczby[10];
	printf("Zadanie nr. 75 - program do pobrania 10 liczb i wypisania w odwrotnej kolejnosci\n");
	printf("Podaj 10 liczb oddzielonych enterem\n");
	for (int i = 0; i < 10; i++) {
		int n;
		printf("liczba %d.: ", i);
		while (scanf_s("%d", &n) != 1 || getchar() != '\n') {
			CzyszczenieBufora();
			ERROR_WCZYTANIE
		}
		liczby[i] = n;
	}
	printf("podane liczby to: ");
	for (int i = 9; i >= 0; i--) {
		printf("%d ", liczby[i]);
	}
	printf("\n");
	KONIEC_PROGRAMU
}

main() {
	//Zadanie75();

	return 0;
}