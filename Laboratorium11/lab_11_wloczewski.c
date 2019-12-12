// zadania 75 - 81

#include <stdio.h>
#include <stdlib.h>

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

void Zadanie76() {
	int iloscLiczb = 0, suma = 0, iloczyn = 1;
	// int liczby[100];
	// int indeksWpisywania = 0;
	printf("Zadanie nr. 76 - program do policzenia sumy i iloczynu ciaguo niezerowych elementach\n");
	while (1) {
		int liczba;
		printf(" - wpisz dowolna liczbe aby wpisac ja do ciagu\n");
		printf(" - wpisz zero aby zakonczyc wpisywanie liczb do ciagu\n");
		printf("wejscie: ");
		while (scanf_s("%d", &liczba) != 1 || getchar() != '\n') {
			CzyszczenieBufora();
			ERROR_WCZYTANIE
		}

		iloscLiczb++;
		if (iloscLiczb > 100) {
			printf("ERROR - podano za duzo liczb (limit do 100)\n");
			break;
		}
		else if (liczba == 0 && iloscLiczb == 1) {
			printf("nie podano zadnej liczby w ciagu\n");
			break;
		}
		else if (liczba == 0 && iloscLiczb > 1) {
			/*
			for (int i = 0; i <= indeksWpisywania; i++) {
				iloczyn *= liczby[i];
				suma += liczby[i];
			}
			*/
			printf("iloczyn podanych liczb to: %d\n", iloczyn);
			printf("suma podanych liczb to: %d\n", suma);
			break;
		}
		else {
			// liczby[indeksWpisywania] = liczba;
			// indeksWpisywania++;
			suma += liczba;
			iloczyn *= liczba;
		}
	}
	KONIEC_PROGRAMU
}

void Zadanie77() {
	printf("Zadanie nr. 77 - wyswietlenie liczb z przedzialu <100, 999> ktorej suma szescianow cyfr wynosi tej liczbie\n");
	int potegi[10];
	for (int i = 0; i <= 9; i++) {
		potegi[i] = i * i * i;
	}
	for (int i = 1; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= 9; k++) {
				if (i * 100 + j * 10 + k == potegi[i] + potegi[j] + potegi[k]) {
					printf("%d%d%d\n", i, j, k);
				}
			}
		}
	}
	KONIEC_PROGRAMU
}

void Zadanie78() {
	int n;
	printf("Zadanie nr. 78 - program do wypisania n wyrazow ciagu fibbonacciego\n");
	do {
		printf("podaj ile wyrazow wypisac (wiecej niz 0, co najwyzej 20) : ");
		while (scanf_s("%d", &n) != 1 || getchar() != '\n') {
			CzyszczenieBufora();
			ERROR_WCZYTANIE
		}
	} while (n <= 0 || n > 20);
	
	int ciag[21] = {1, 1};
	for (int i = 2; i < n; i++) {
		ciag[i] = ciag[i - 2] + ciag[i - 1];
	}
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", ciag[i]);
	}
	printf("\n");
	KONIEC_PROGRAMU
}

void Zadanie79() {
	int tab[10];
	printf("Zadanie nr. 79 - program do pobrania 10 liczb i posortowania ich\n");
	for (int i = 0; i < 10; i++) {
		printf("podaj liczbe nr. %d - ", i);
		while (scanf_s("%d", &tab[i]) != 1 || getchar() != '\n') {
			CzyszczenieBufora();
			ERROR_WCZYTANIE
		}
	}
	// sortowanie tablicy (bubble sort)
	/*
	int trzebaPosortowac = 10;	
	do {
		for (int i = 0; i < trzebaPosortowac - 1; i++) {
			if (tab[i] > tab[i + 1]) {
				int tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
		}
		trzebaPosortowac--;
	} while (trzebaPosortowac > 1);
	*/
	// sortowanie tablicy (algorytm zaproponowany w zadaniu)
	int indeksWstawiania = 0;
	while (indeksWstawiania < 10 - 1) {
		int najmniejszaWartosc; 
		int indeksNajmniejszejWartosci;
		for (int i = indeksWstawiania; i < 10; i++) {
			if (i == indeksWstawiania) {
				najmniejszaWartosc = tab[i];
				indeksNajmniejszejWartosci = i;
			}
			else if (tab[i] < najmniejszaWartosc) {
				najmniejszaWartosc = tab[i];
				indeksNajmniejszejWartosci = i;
			}
		}
		int tmp = tab[indeksWstawiania];
		tab[indeksWstawiania] = tab[indeksNajmniejszejWartosci];
		tab[indeksNajmniejszejWartosci] = tmp;
		indeksWstawiania++;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", tab[i]);
	}
	printf("\n");
	
	KONIEC_PROGRAMU
}

main() {
	//Zadanie75();
	//Zadanie76();
	//Zadanie77();
	//Zadanie78();
	Zadanie79();
	return 0;
}