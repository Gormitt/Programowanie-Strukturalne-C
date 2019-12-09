// Zaadnia 67 – 74

#include <stdio.h>
#include <math.h>

#define KONIEC_PROGRAMU printf("Koniec programu.\n\n");
#define ERROR_WCZYTANIE printf("ERROR - blad podczas wczytania danych, prosze spobuj ponownie: ");

void CzyszczenieBufora() {
	while (getchar() != '\n') {}
}

void Zadanie67() {
	int liczbaGwiazdek = 0;
	printf("Zadanie nr. 67 - program do rysowania gwiazdek\n");
	printf("ile gwiazdek chcesz aby narysowac na ekranie: ");
	while (scanf_s("%d", &liczbaGwiazdek) != 1 || getchar() != '\n') {
		CzyszczenieBufora();
		ERROR_WCZYTANIE
	}
	for (int i = 0; i < liczbaGwiazdek; i++) {
		printf("* ");
	}
	printf("\n");
	KONIEC_PROGRAMU
}

void Zadanie68() {
	int rozmiar;
	printf("Zadanie nr. 68 - program do narysowania kwadratu z gwaizdek o zadanej szerokosci\n");
	printf("podaj szerokosc kwadratu: ");
	while (scanf_s("%d", &rozmiar) != 1 || getchar() != '\n') {
		CzyszczenieBufora();
		ERROR_WCZYTANIE
	}
	for (int y = 0; y < rozmiar; y++) {
		for (int x = 0; x < rozmiar; x++) {
			printf("* ");
		}
		printf("\n");
	}
	KONIEC_PROGRAMU
}

void Zadanie69() {
	int liczbaRzedow = 0;
	printf("Zadanie nr. 69 - program do narysowania prostokata z gwiazdek\n");
	printf("prosze, podaj liczbe rzedow: ");
	while (scanf_s("%d", &liczbaRzedow) != 1 || getchar() != '\n') {
		CzyszczenieBufora();
		ERROR_WCZYTANIE
	}
	for (int y = 0; y < liczbaRzedow; y++) {
		for (int x = 0; x < liczbaRzedow * 2; x++) {
			printf("* ");
		}
		printf("\n");
	}
	KONIEC_PROGRAMU
}

void Zadanie70() {
	int liczbaRzedow = 0;
	printf("Zadanie nr. 70 - program do narysowania trojkata o zadanej liczbie rzedow\n");
	printf("prosze, podaj liczbe rzedow: ");
	while (scanf_s("%d", &liczbaRzedow) != 1 || getchar() != '\n') {
		CzyszczenieBufora();
		ERROR_WCZYTANIE
	}
	for (int y = 0; y < liczbaRzedow; y++) {
		for (int x = 0; x < y + 1; x++) {
			printf("* ");
		}
		printf("\n");
	}
	KONIEC_PROGRAMU
}

void Zadanie71() {
	int liczbaRzedow = 0;
	printf("Zadanie nr. 71 - program do narysowania trojkata o zadanej liczbie rzedow\n");
	while (scanf_s("%d", &liczbaRzedow) != 1 || getchar() != '\n') {
		CzyszczenieBufora();
		ERROR_WCZYTANIE
	}

	int liczbaSpacji = liczbaRzedow;
	for (int y = 0; y < liczbaRzedow; y++) {
		liczbaSpacji--;
		for (int x = 0; x < liczbaSpacji; x++) {
			printf(" ");
		}
		for (int x = 0; x < liczbaRzedow * 2 - 1 - liczbaSpacji * 2; x++) {
			printf("*");
		}
		for (int x = 0; x < liczbaSpacji; x++) {
			printf(" ");
		}
		printf("\n");
	}
	KONIEC_PROGRAMU
}

void Zadanie72() {
	printf("Zadanie nr. 72 - program do wypisania tabliczki mnozenia\n");
	for (int y = 0; y < 17; y++) {
		for (int x = 0; x < 16; x++) {
			if (y == 0 && x == 0) {
				printf("%4c", ' ');
			}
			else if (y == 0 && x != 0) {
				printf("%4d", x);
			}
			else if (y == 1) {
				printf("----");
			}
			else if (x == 0) {
				printf("%2d%2c", y - 1, '|');
			}
			else {
				int iloczyn = (y - 1) * x;
				printf("%4d", iloczyn);
			}
		}
		printf("\n");
	}
	KONIEC_PROGRAMU
}

void Zadanie73() {
	printf("Zadanie nr. 73 - program do wypisania tabliyc ascii\n");
	printf("%s\t%s\n", "kod", "symbol");
	for (int i = 0; i <= 255; i++) {
		if (i == 0) printf("0\tnull\n");
		else if (i == 7) printf("7\tbel\n");
		else if (i == 8) printf("8\tbs\n");
		else if (i == 9) printf("9\tht\n");
		else if (i == 10) printf("10\tnl\n");
		else if (i == 11) printf("11\tvt\n");
		else if (i == 12) printf("12\tnp\n");
		else if (i == 13) printf("!3\tcr\n");
		else if (i == 26) printf("26\teof\n");
		else if (i == 27) printf("27\tesc\n");
		else if (i == 126) printf("127\tdel\n");
		else printf("%d\t%c\n", i, i);
	}
	KONIEC_PROGRAMU
}

void Zadanie74() {
	int n, suma = 0;
	printf("Zadanie nr. 74 - program ktory wypisze sume\n");
	printf("prosze podaj liczbe: ");
	while (scanf_s("%d", &n) != 1 || getchar() != '\n') {
		CzyszczenieBufora();
		ERROR_WCZYTANIE
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			printf("%d", i);
			suma += i * pow(10.0, j);
		}
		if (i != n) printf("+");
		else printf(" = %d\n", suma);
	}
	KONIEC_PROGRAMU
}

main() {
	Zadanie67();
	Zadanie68();
	Zadanie69();
	Zadanie70();
	Zadanie71();
	Zadanie72();
	Zadanie73();
	Zadanie74();
	return 0;
}