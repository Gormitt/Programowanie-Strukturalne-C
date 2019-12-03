// Zadania 48 - 54

#include <stdio.h>
#include <math.h>

main() {
	// Zadanie nr. 48
	int wykladnik = 1;
	long long int potega = 1;
	printf("Zadanie nr. 48 - program do wypisania 50 pierwszych poteg liczby 2\n");
	while (wykladnik <= 50) {
		potega *= 2;
		printf("2 do %d to %lld\n", wykladnik, potega);
		wykladnik++;
	}
	printf("Koniec programu.\n\n");
	
	// Zadanie nr. 49
	int numer = 1;
	long double silnia = 1;
	printf("Zadanie nr. 49 - program do wypisania od 1! do 73!\n");
	while (numer <= 73) {
		silnia *= numer;
		printf("%d! = %llf\n", numer, silnia);
		numer++;
	}
	printf("Koniec programu.\n\n");
	
	// Zadanie nr. 50
	double n1 = 0;
	double wartoscFunkcji1 = 1;
	printf("Zadanie nr. 50 - program do policzenia wartosci funkcji dla n <1, 200>:\n");
	while (n1 < 200) {
		n1++;
		wartoscFunkcji1 *= (double)3 / (n1 + (double)1);
		printf("dla n=%.0lf wartosc to %.50lf\n", n1, wartoscFunkcji1);
	}
	printf("Koniec programu.\n\n");
	
	// Zadanie nr. 51
	double n2 = 0;
	double wartoscFunkcji2 = 1;
	printf("Zadanie nr. 51 - program do okreslenia najmniejszej liczby naturalnej, dla ktorej wartosc funkcji bedzie mniejsza od 1\n");
	do {
		n2++;
		wartoscFunkcji2 *= (double)90 / (n2 + (double)1);
	} while (wartoscFunkcji2 > 1);
	printf("Najmniejsza liczba spelniajaca warunki zadania to %.0lf", n2);
	printf("Koniec programu.\n\n");
	
	// Zadanie nr. 52
	printf("Zadanie nr. 52 - program do wypisania podanego tekstu bez spacji\n");
	printf("Podaj tekst: ");
	char znak;
	char znakPoprzedni = 'c';
	do {
		znak = getchar();
		if (znak != ' ') {
			printf("%c", znak);
			znakPoprzedni = znak;
		}
		else if (znakPoprzedni != ' ') {
			printf("%c", znak);
			znakPoprzedni = znak;
		}
	} while (znak != '\n');
	printf("Koniec programu.\n\n");
	
	// Zadanie nr. 53
	int liczbaNaturalna = 0;
	printf("Zadanie nr. 53 - program do wczytanie liczb za pomoca petli\n");
	do {
		printf("Podaj liczbe naturalna: ");
		while (scanf_s("%d", &liczbaNaturalna) != 1 || getchar() != '\n') {
			while (getchar() != '\n') {}
			printf("ERROR - liczba jest niepoprawna, sprobuj ponownie: ");
		}
	} while (liczbaNaturalna <= 0);
	printf("Podana liczba to: %d\n", liczbaNaturalna);
	printf("Koniec programu.\n\n");

	// Zadanie nr. 54
	char symbol;
	int wyczyscBufor = 0;
	printf("Zadanie nr. 54 - program do wczytywania znakow az do momentu pobrania 't'\n");
	printf("Podaj znak: ");
	while (1) {
		if (wyczyscBufor) {
			while (getchar() != '\n') {}
		}
		wyczyscBufor = 0;
		symbol = getchar();

		if (symbol == 't') {
			break;
		}
		else if (symbol == '\n') {
			printf("Podany znak to nie 't', sprobuj ponownie: ");
			continue;
		}
		else if (symbol != 't' && getchar() == '\n') {
			printf("Podany znak to nie 't', sprobuj ponownie: ");
			continue;
		}
		else {
			printf("Podany znak to nie 't', sprobuj ponownie: ");
			wyczyscBufor = 1;
			continue;
		}
	}
	printf("Koniec programu.\n\n");
	return 0;
}