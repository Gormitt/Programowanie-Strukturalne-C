// zadania 75 - 81
// w zadaniach stosuje statyczne alokowanie tablic, wyjatkiem sa rozwiazania dwoch ostatnich zadan

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define KONIEC_PROGRAMU printf("Koniec programu.\n\n");
#define ERROR_WCZYTANIE printf("ERROR - blad podczas wczytania danych, prosze sprobuj ponownie: ");

void CzyszczenieBufora() {
	while (getchar() != '\n') {}
}

void QuickSort(int* lewy, int* prawy) {
	if (lewy >= prawy) return;
	int* pivot = lewy + (prawy - lewy + 1) / 2;

	int wartPivotu = *pivot;
	*pivot = *prawy;
	*prawy = wartPivotu;

	int* i = lewy;
	int* j = lewy;
	while (i < prawy) {
		if (*i < wartPivotu) {
			int tmp = *i;
			*i = *j;
			*j = tmp;
			j++;
		}
		i++;
	}

	*prawy = *j;
	*j = wartPivotu;

	QuickSort(lewy, j - 1);
	QuickSort(j + 1, prawy);
}

void SortowanieTablicy(int* tab, int wielkosc) {// wskaznik tab, posluzy nam jako bufor, do wpisywnaia najmniejszych wartosci z tablicy
	int elementyDoPosortowania = wielkosc; // ilosc elementow do posortowania
	while (elementyDoPosortowania > 1) {
		int* iterator = tab; // ustawiam sobie wskaznik do miejsca, od ktorego rozpoczne znajdowanie najmniejszej wartosci

		int najmniejszaWartosc = *iterator; // inicjalizuje pomocnicza zmienna do przechowania najmniejszej wartosco
		int* wskDoNajmniejszejWar = iterator; // inicjalizuje wskaznik do najmniejszej wartosci
		for (int i = 0; i < elementyDoPosortowania; i++) { // przechodze przez wszystkie elemtny pozostawione do posortowania
			if (*iterator < najmniejszaWartosc) { // jezeli napotkany element jest mniejszy od najmniejszego to nadpisuje najmniejszy
				najmniejszaWartosc = *iterator;
				wskDoNajmniejszejWar = iterator;
			}
			iterator++;	 // przemiszczam wskanzik, aby w nastepnym wykonaniu porowanc kolejna wartosc do najmniejszej zapisanej
		} // po zakonczeniu petli posiadamy najmniejsza wartosc, w sprawdzanym obszarze tablicy (od wskaznika tab, do konca)
		int tmp = *tab; // wiec zamieniamy nasza najmniejsza wartosc z buforem				
		*tab = najmniejszaWartosc;
		*wskDoNajmniejszejWar = tmp;

		tab++; // przesuwamy bufor o jedno miejsce w prawo, czym zawezamy obszar sortowania kolejnych elementow
		elementyDoPosortowania--; // zmniejszamy liczbe elementow do posortowania 
	}
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

	int ciag[21] = { 1, 1 };
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
	int iloscLiczb = 10;
	int* tab = (int*)malloc(sizeof(int) * iloscLiczb);

	printf("Zadanie nr. 79 - program do pobrania 10 liczb i posortowania ich\n");
	if (tab != NULL) {
		for (int i = 0; i < iloscLiczb; i++) {
			printf("podaj liczbe nr. %d - ", i);
			while (scanf_s("%d", (tab + i)) != 1 || getchar() != '\n') {
				CzyszczenieBufora();
				ERROR_WCZYTANIE
			}
		}

		// sortowanie tablicy (algorytm zaproponowany w zadaniu)
		SortowanieTablicy(tab, iloscLiczb);

		for (int i = 0; i < iloscLiczb; i++) {
			printf("%d ", *(tab + i));
		}
		printf("\n");
	}
	else {
		printf("ERROR - nie udalo sie zaalokowac miejsca na tablice\b");
	}
	KONIEC_PROGRAMU
}

void Zadanie80() {
	int iloscLiczb = 10;
	int* tab = (int*)malloc(sizeof(int) * iloscLiczb);

	printf("Zadanie nr. 80 - program do wylosowania 10 liczb i wypisania ich w kolejnosci\n");
	if (tab != NULL) {
		printf("tablica nieposortowana: ");
		for (int i = 0; i < 10; i++) {
			*(tab + i) = rand() % 100 + 1;
			printf("%d ", *(tab + i));
		}
		printf("\n");

		QuickSort(tab, tab + iloscLiczb - 1);

		printf("tablica posortowana: \t");
		for (int i = 0; i < 10; i++) {
			printf("%d ", *(tab + i));
		}
		printf("\n");
	}
	else {
		printf("ERROR - nie udalo sie zaalokowac miejsca na talice\n");
	}
	KONIEC_PROGRAMU
}

void Zadanie81() {
	int iloscLiczb = 10; // ilosc liczb do losowanie
	int min = 1; // przedzial do losowanie [min, max]
	int max = 2;
	float* tab = (float*)malloc(sizeof(float) * iloscLiczb); // tablica na przechowanie liczb
	printf("Zadanie nr. 81 - program do wylosowania 10 liczb z przedzialu [1, 2]\n");

	if (tab != NULL) { // gdy udalo sie poprawnie zaalokowac pamiec
		printf("wylosowany zestaw: ");
		for (int i = 0; i < iloscLiczb; i++) { // dla kazdej liczby
			float skala = rand() / (float)RAND_MAX; // wylosuj liczbe z przedzialu [0, 1]
			float los = min + skala * (max - min); // to wyrazenie nam zwraca liczbe losowa z przedzialu [min, max]

			*(tab + i) = los; // wpisuje do odpowiedniego wskaznika los
			printf("%f ", *(tab + i)); // wypisuje go na ekran, aby uzytkownik wiedzial co zostalo wylosowane
		}
		printf("\nposortowany zestaw: ");
		QuickSort(tab, tab + iloscLiczb - 1); // tak na prawde nie wiem czm to dziala bo nie powinno, funkcja sortujaca jest napisana na wskaznikach typu int ...
		for (int i = 0; i < iloscLiczb; i++) {
			printf("%f ", *(tab + i)); // wypisuje posortowany zestaw na ekran
		}
		printf("\n");
	}
	else { // przypadek nieudanego zaalokowania miejsca na nasza tablice
		printf("ERROR - nie udalo sie zaalokowac miejsca na tablice\n");
	}
	KONIEC_PROGRAMU
}

main() {
	srand(time(NULL)); // do losowania
	Zadanie75();
	Zadanie76();
	Zadanie77();
	Zadanie78();
	Zadanie79();
	Zadanie80();
	Zadanie81();
	return 0;
}
