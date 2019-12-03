// zadanie 34 - 40

#include <stdio.h>
#include <math.h>

main() {
	// zadanie nr. 34
	float x1 = 0;
	printf("Zadanie nr. 34 - Program do obliczania wartosci funkcji dla podanego przez uzytkownika argumentu\n");
	printf("Podaj argument x (x -> R): ");
	if (scanf_s("%f", &x1) != 1 || getchar() != '\n') {
		printf("ERROR - niepoprawny format");
		// czyszczenie bufora
		while (getchar() != '\n') {}
	}
	else {
		float wyrazenie = x1 * x1 + 1;
		float wartoscFunkcji = sqrt((double)wyrazenie) + log((double)wyrazenie) / (5 + sin((double)wyrazenie)) - exp(sin((double)wyrazenie));
		printf("Wartosc funkcji dla podanego argumentu to: %f\n", wartoscFunkcji);
	}
	printf("Koniec programu.\n\n");
	//
	// metoda na sprawdzenie czy program poprawnie liczy wartosc funkcji:
	// 1. zamieniam x na takie wartosci float dla ktorych wynik jest oczywisty
	// 2. tworze 3 pomocnicze zmienne float (test1, test2, test3) ktore przechowuja wartosci 0, 2.7182, 4
	// 3. wstawiam do wyrazenia funkcji te zmienne tak aby sinus byl policzony dla 0, pierwiastek dla 4, a ln dla 2.71...
	// 4. wiem ze wynikiem bedzie 1.2 i sprawdzam czy komputer policzy tak samo, jak tak to mam pewnosc ze po wstawieniu wlasciwych wartosci wynik bedzie poprawny
	//

	// Zadanie nr. 35
	float x2;
	printf("Zadanie nr. 35 - program do obliczenia x^8\n");
	printf("Podaj liczbe: ");
	if (scanf_s("%f", &x2) != 1 || getchar() != '\n') {
		printf("ERROR - niepoprawny format\n");
		// czyszczenie bufora
		while (getchar() != '\n') {}
	}
	else {
		x2 *= x2 *= x2 *= x2;
		printf("wynikiem potegowania jest liczba %.1f\n", x2);
	}
	printf("Koniec programu.\n\n");

	// Zadanie nr. 36
	float x3;
	printf("Zadanie nr. 36 - program do liczenie wartosci funkcji dla podanego argumantu\n");
	printf("Podaj liczbe: ");
	if (scanf_s("%f", &x3) != 1 || getchar() != '\n') {
		printf("ERROR - niepoprawny format\n");
		// czyszczenie bufora
		while (getchar() != '\n') {}
	}
	else {
		x3 -= 2;
		float wynik = x3 * (x3 *(x3 * 23 + 17) + 13);
		printf("Wynik to: %f\n", wynik);
	}
	printf("Koniec programu.\n\n");

	// Zasanie nr. 37
	float x4, x5; // nie wprowadzam kolejnej zmiennej y, tylko bazuje na x
	printf("Zadanie nr. 37 - program do obliczenia wartosci funkcji f(x, y)\n");
	printf("Podaj liczbe x <-1, 1> a nastepnie y <-1, 1> [oddzielone spacjami albo enterem] : ");
	if (scanf_s("%f %f", &x4, &x5) != 2 || getchar() != '\n') {
		printf("ERROR - niepoprawny format danych\n");
		while (getchar() != '\n') {}
	}
	else if (x4 < -1 || x4 > 1 || x5 < -1 || x5 > 1){
		printf("ERROR - zadane liczby nie sa z podanego zakresu\n");
	}
	else {
		float tmp = x4 * x4 + x5 * x5;
		float wynik = x5 + sqrt(tmp) + tmp / cos((double)(x4));
		printf("Wynik to: %.2f\n", wynik);
	}
	printf("Koniec programu.\n\n");

	// Zadanie nr. 38
	float x6, x7;
	printf("Zadanie nr. 38 - kalkulator [wersja if]\n");
	printf("Podaj dwie liczby: ");
	if (scanf_s("%f %f", &x6, &x7) != 2 || getchar() != '\n') {
		printf("ERROR - niepoprawny format danych\n");
		while (getchar() != '\n') {}
	}
	else {
		printf("mozliwosci dzialania: \n");
		printf("(1) %.2f + %.2f\n", x6, x7);
		printf("(2) %.2f - %.2f\n", x6, x7);
		printf("(3) %.2f * %.2f\n", x6, x7);
		printf("(4) %.2f / %.2f\n", x6, x7);
		printf("wybor: ");

		char w = getchar();
		if (w == '1') {
			float tmp = x6 + x7;
			printf("Wynikiem dodawanie jest liczba: %.2f\n", tmp);
		}
		else if (w == '2') {
			float tmp = x6 - x7;
			printf("Wynikiem odejmowania jest liczba: %.2f\n", tmp);
		}
		else if (w == '3') {
			float tmp = x6 * x7;
			printf("Wynikiem mnozenia jest liczba: %.2f\n", tmp);
		}
		else if (w == '4') {
			if (x7 != 0) {
				float tmp = x6 / x7;
				printf("Wynikiem dzielenia jest liczba: %.2f\n", tmp);
			}
			else {
				printf("Nie wolno dzielic przez zero...\n");
			}
		}
		else {
			printf("Nie ma takiego dzialania\n");
		}
	}

	printf("\n");

	printf("Zadanie nr. 38 - kalkulator [wersja switch]\n");
	printf("Podaj dwie liczby: ");
	if (scanf_s("%f %f", &x6, &x7) != 2 || getchar() != '\n') {
		printf("ERROR - niepoprawny format danych\n");
		while (getchar() != '\n') {}
	}
	else {
		printf("mozliwosci dzialania: \n");
		printf("(1) %.2f + %.2f\n", x6, x7);
		printf("(2) %.2f - %.2f\n", x6, x7);
		printf("(3) %.2f * %.2f\n", x6, x7);
		printf("(4) %.2f / %.2f\n", x6, x7);
		printf("wybor: ");

		char w = getchar();
		float tmp;
		switch (w) {
		case '1':
			tmp = x6 + x7;
			printf("Wynikiem dodawanie jest liczba: %.2f\n", tmp);
			break;
		case '2':
			tmp = x6 - x7;
			printf("Wynikiem odejmowania jest liczba: %.2f\n", tmp);
			break;
		case '3':
			tmp = x6 * x7;
			printf("Wynikiem mnozenia jest liczba: %.2f\n", tmp);
			break;
		case '4':
			tmp = x6 / x7;
			printf("Wynikiem dzielenia jest liczba: %.2f\n", tmp);
			break;
		default:
			printf("Nie ma takiego dzialania\n");
			break;
		}
	}
	printf("Koniec zadania.\n\n");

	// Zadanie nr. 39
	float x8;
	printf("Zadanie nr. 39 - program do obliczania wartosci funkcji, dla argumentu zmiennopozycyjnego\n");
	printf("Podaj liczbe: ");
	if (scanf_s("%f", &x8) != 1 || getchar() != '\n') {
		printf("ERROR - niepoprawny format\n");
	}
	else {
		float tmp = x8 > 0 ? pow(2, x8) : -1;
		printf("Wartosc funkcji dla argumentu %.2f to %.2f\n", x8, tmp);
	}
	printf("Koniec programu.\n\n");
	
	// Zadanie nr. 40
	double x, y;
	printf("Zadanie nr. 40 - program do obliczania odleglosci zadanego punktu od poczatku uk. wspolrzednych\n");
	printf("Podaj wspolrzedna x a potem y: ");
	if (scanf_s("%lf %lf", &x, &y) != 2 || getchar() != '\n') {
		printf("ERROR - niepoprawny format\n");
	}
	else {
		// obliczenie wg. klasycznego algorytmu
		double klasyczny = sqrt(pow(x, 2) + pow(y, 2));
		// obliczenie wg. spejcalnego algorytmu
		double specjalny = 0;
		double modulx = abs(x);
		double moduly = abs(y);
		if (x == 0) {	// x = 0
			specjalny = moduly;
		}
		else if (modulx >= moduly && x != 0) {
			specjalny = modulx * sqrt(1 + pow(y / x, 2));
		}
		else if (moduly >= modulx && y != 0) {
			specjalny = moduly * sqrt(1 + pow(x / y, 2));
		}

		if (klasyczny == specjalny) {
			printf("ALGORYTMY DAJA TEN SAM WYNIK\nOdleglosc punktu (%lf, %lf) od (0, 0) wynosi: %lf", x, y, klasyczny);
		}
		else {
			printf("ALGORYTMY DAJA ROZNE WYNIKI\nOdleglosc punktu (%lf, %lf) od (0,0) wynosi:\n", x, y);
			printf("-wg. algorytmu klasycznego %lf\n", klasyczny);
			printf("-wg. algorytmu specjalnego %lf\n", specjalny);
			double blad = abs(klasyczny - specjalny);
			printf("Wartosc bezwzgledna roznicy miedzy wynikami: %lf", blad);
		}
	}
	printf("Koniec programu.\n\n");

	return 0;
}