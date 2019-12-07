// Zadanie 62 - 66

#include <stdio.h>
#include <math.h>
#include <limits.h>

#define KONIEC_PROGRAMU printf("Koniec programu.\n\n");

void CzyszczenieBufora() {
	while (getchar() != '\n') {}
}

void Zadanie62() {
	int imieNiepoprawne = 1;
	
	printf("Zadanie nr. 62 - program do pobrania imienia uzytkownika\n");
	while (imieNiepoprawne) {
		printf("Jak masz na imie?\n");

		int imieZMalejLiter = 0, liczbaZnakow = 0;
		while (1) {
			liczbaZnakow++;
			char znak = getchar();
			
			if (liczbaZnakow == 1) {
				printf("Masz na imie ");
				if (znak < 'A' || znak > 'Z') {
					imieZMalejLiter = 1;
				}
			}
			if (liczbaZnakow == 1 && ((znak >= 'a' && znak <= 'z') || (znak >= 'A' && znak <= 'Z'))) {
				printf("%c", znak);
			}
			else if (znak >= 'a' && znak <= 'z') {
				printf("%c", znak);
			}
			else if (znak == '\n'){
				if (imieZMalejLiter) {
					for (int i = 0; i < liczbaZnakow + 13; i++) {
						printf("\b");
					}
					printf("Imie nie moze zaczynak sie z malej litery\n");
					break;
				}
				else {
					printf("\n");
					imieNiepoprawne = 0;
					break;
				}
			}
			else {
				CzyszczenieBufora();
				printf("...?\n");
				break;
			}
		}
	}
	KONIEC_PROGRAMU
}

void Zadanie63() {
	double pocz = 0.0;	// poczatek przedzialu
	double kon = 0.125;	// koniec przedzialu
	int ile = 33;		// ile punktow

	double krok = (kon - pocz) / ((double)ile - 1);	//odl. miedzy pkt.
	printf("Zadanie nr. 63 - program oblicza bledy przyblizenia\n");
	printf("funkcji sin(x) przez x dla %d", ile);
	printf(" rownoodleglych punktow z przedzialu");
	printf(" [%.g,%g].\n\n%-14s", pocz, kon, "x");
	printf("%-13s%-12s", "sin(x)", "x-sin(x)");
	printf("%-12s\n", "|(x-sin(x))/x|");

	for (int i = 0; i <= ile; i++) {
		double x = pocz + i * krok;
		double sin_x = sin(x);
		double bl_b = x - sin_x;
		double bl_w = x != 0.0 ? fabs(bl_b / x) : -1.0;
		printf("\n%11.9f%14.9f%12.3e", x, sin_x, bl_b);
		if (bl_w != -1.0)
			printf("%12.3e", bl_w);
	}
	printf("\n");
	KONIEC_PROGRAMU
}

void Zadanie64() {
	long long liczba = INT_MAX - 5;
	printf("%d\n", INT_MAX);
	printf("Zadanie nr. 64 - program do wypisania 10 kolejnych liczb naturalnych, od max_int - 5\n");
	for (int i = 1; i <= 10; i++) {
		printf("liczba nr. %2d : %lld\n", i, liczba);
		liczba++;
	}
	KONIEC_PROGRAMU
}

void Zadanie65() {
	printf("Zadanie nr. 65 - program do wypisania n kolejnych potegi liczby 2\n");
	int n, potega = 1;
	do {
		printf("podaj n: ");
	} while (scanf_s("%d", &n) != 1);
	for (int i = 0; i < n; i++) {
		printf("wyliczenie nr. %d - 2 ^ %d = %d\n", i + 1, i, potega);
		potega *= 2;
	}
	KONIEC_PROGRAMU
}

main() {
	//Zadanie62();
	//Zadanie63();
	//Zadanie64();
	Zadanie65();
	return 0;
}