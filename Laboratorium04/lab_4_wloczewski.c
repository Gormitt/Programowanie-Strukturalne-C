// zadanie 25 - 33

#include <stdio.h>
#include <math.h>

main() {
	// zadanie nr. 25
	printf("Zadanie nr. 25 - program do pobrania klawisza i stwierdzenia czy to 't'\n");
	printf("[pelna obsluga bledu]\n");
	printf("Wcisnij klawisz 't': ");
	if (getchar() == 't' && getchar() == '\n') {
		printf("TAK, podany znak to 't'\n");
	}
	else {
		printf("NIE, podany znak to nie 't'\n");
		// czyszczenie bufora
		while (getchar() != '\n') {}
	}
	printf("Koniec programu.\n\n");

	// zadanie nr. 26
	float pozycjaX1, pozycjaY1;
	printf("Zadanie nr. 26 - program do rozstrzygania czy dany punkt lezy w srodku okregu\n");
	printf("[srodek okregu to punkt (0, 0) a jego promien to 1]\n");
	printf("Podaj wspolrzedna x, a potem y [oddzielone spacjami lub kolejna po enterze] : ");
	if (scanf_s("%f %f", &pozycjaX1, &pozycjaY1) != 2) {
		printf("ERROR - niepoprawny format danych\n");
		// czyszczenie bufora
		while (getchar() != '\n') {}
	}
	else if (pozycjaX1 * pozycjaX1 + pozycjaY1 * pozycjaY1 < 1) {
		printf("Punkt o podanych wspolrzednych (%f i %f) lezy w okregu\n", pozycjaX1, pozycjaY1);
	}
	else {
		printf("Punkt o podanych wspolrzednych (%f i %f) nie lezy w okregu\n", pozycjaX1, pozycjaY1);
	}
	printf("Koniec programu.\n\n");

	// Zadanie nr. 27
	float pozycjaX2, pozycjaY2;
	printf("Zadanie nr. 27 - program do rozstrzygania, jakie jest polozeniu punkty wobec okregu\n");
	printf("[srodek okregu to punkt (0, 0) a jego promien to 1]\n");
	printf("Podaj wspolrzedna x, a potem y [oddzielone spacjami lub kolejna po enterze] : ");
	if (scanf_s("%f %f", &pozycjaX2, &pozycjaY2) != 2) {
		printf("ERROR - niepoprawny format danych\n");
		// czyszczenie bufora
		while (getchar() != '\n') {}
	}
	else if (pozycjaX2 * pozycjaX2 + pozycjaY2 * pozycjaY2 < 1) {
		printf("Punkt o podanych wspolrzednych (%f i %f) lezy wewnatrz okregu\n", pozycjaX2, pozycjaY2);
	}
	else if (pozycjaX2 * pozycjaX2 + pozycjaY2 * pozycjaY2 == 1) {
		printf("Punkt o podanych wspolrzednych (%f i %f) lezy na okregu\n", pozycjaX2, pozycjaY2);
	}
	else {
		printf("Punkt o podanych wspolrzednych (%f i %f) lezy poza okregiem\n", pozycjaX2, pozycjaY2);
	}
	printf("Koniec programu.\n\n");

	// Zadanie nr. 28
	float pozycjaX3, pozycjaY3;
	printf("Zadanie nr. 28 - program do rozstrzygania czy punkt o podanych przez uzytkownika wspolrzednych znajduje sie w 1. cwiartce uk. wsp\n");
	printf("Podaj wspolrzedna x, a potem y [oddzielone spacjami lub kolejna po enterze]: ");
	if (scanf_s("%f %f", &pozycjaX3, &pozycjaY3) != 2 || getchar() != '\n') {
		printf("ERROR - niepoprawny format danych\n");
		// czyszczenie bufora
		while (getchar() != '\n') {}
	}
	else if (pozycjaX3 > 0 && pozycjaY3 > 0) {
		printf("Punkt o podanych wspolrzednych znajduje sie w 1. cwiartce ukladu wspolrzednych\n");
	}
	else if (pozycjaX3 == 0 || pozycjaY3 == 0) {
		printf("Punkt o podanych wpolrzednych znajduje sie na jednej z osi, dlatego bez uprzedniego ustalenia\nnie monza ustalic w ktorej cwiartce znajduje sie dany punkt\n");
	}
	else {
		printf("Punkt o podanych wspolrzednych nie znajduje sie w 2., 3. lub 4. cwiartce ukladu spolrzednych\n");
	}
	printf("Koniec programu.\n\n");

	// Zadanie nr. 29
	float pozycjaX4, pozycjaY4;
	printf("Zadanie nr. 28 - program do rozstrzygania czy punkt o podanych przez uzytkownika wspolrzednych znajduje sie w 1. cwiartce uk. wsp\n");
	printf("Podaj wspolrzedna x, a potem y [oddzielone spacjami lub kolejna po enterze]: ");
	if (scanf_s("%f %f", &pozycjaX4, &pozycjaY4) != 2 || getchar() != '\n') {
		printf("ERROR - niepoprawny format danych\n");
		// czyszczenie bufora
		while (getchar() != '\n') {}
	}
	else if (pozycjaX4 == 0 || pozycjaY4 == 0) {
		printf("Punkt o podanych wpolrzednych znajduje sie na jednej z osi, dlatego bez uprzedniego ustalenia\nnie monza ustalic w ktorej cwiartce znajduje sie dany punkt\n");
	}
	else if (pozycjaX4 > 0 && pozycjaY4 > 0) {
		printf("Punkt o podanych wspolrzednych znajduje sie w 1. cwiartce ukladu wspolrzednych\n");
	}
	else if (pozycjaX4 < 0 && pozycjaY4 > 0) {
		printf("Punkt o podanych wspolrzednych znajduje sie w 2. cwiartce ukladu wspolrzednych\n");
	}
	else if (pozycjaX4 < 0 && pozycjaY4 < 0) {
		printf("Punkt o podanych wspolrzednych znajduje sie w 3. cwiartce ukladu wspolrzednych\n");
	}
	else if (pozycjaX4 > 0 && pozycjaY4 < 0) {
		printf("Punkt o podanych wspolrzednych znajduje sie w 4. cwiartce ukladu wspolrzednych\n");
	}
	printf("Koniec programu.\n\n");

	// Zadanie nr. 30
	float liczba1;
	printf("Zadanie nr. 30 - program do okreslenia czy podana liczba rzeczywista jest calkowita (jak nie to zaokragli w dol, do najblizszej calkowitej)\n");
	printf("Podaj liczbe rzeczywista: ");
	if (scanf_s("%f", &liczba1) != 1 || getchar() != '\n') {
		printf("ERROR - niepoprawny format\n");
		// czyszczenie bufora
		while (getchar() != '\n') {}
	}
	else if (liczba1 - (int)liczba1 != 0) {
		printf("Podana liczba jest niecalkowita, a jej zaokraglenie w dol wynosi %d\n", (int)liczba1);
	}
	else {
		printf("Podana liczba jest calkowita\n");
	}
	printf("Koniec programu.\n\n");

	// Zadanie nr. 31 
	float pozycjaX, pozycjaY;
	printf("Zadanie nr. 31 - program do okreslenia czy dany punkt nalezy do wykresu funkcji\n");
	printf("Podaj wspolrzedne punktu [oddzielone spacja] : ");
	if (scanf_s("%f %f", &pozycjaX, &pozycjaY) != 2 || getchar() != '\n') {
		printf("ERROR - niepoprawny format danych\n");
		while (getchar() != '\n') {}
	}
	else if (pozycjaX > 0 && pozycjaX < 1) {
		printf("\t1. Punkt znajduje sie w dziedzinie funkcji\n");
		float wartoscFunkcji = sqrt(abs(acos((double)pozycjaX) + exp((double)pozycjaX) / log((double)pozycjaX)));
		printf("%f\n", wartoscFunkcji);
		if (pozycjaY < wartoscFunkcji) {
			printf("\t2. Punkt znajduje sie pod wykresem funkcji\n");
		}
		else if (pozycjaY == wartoscFunkcji) {
			printf("\t2. Punkt znajduje sie na wykresie funkcji\n");
		}
		else {
			printf("\t2. Punkt znajduje sie nad wykresem funkcji\n");
		}
	}
	else {
		printf("%f %f\n", pozycjaX, pozycjaY);
		printf("punkt nie jest w dziedzinie\n");
	}
	printf("Koniec programu.\n\n");

	// Zadanie nr. 32
	int x;
	printf("Testowanie instr. przypisania.\n\n");
	x = 3;
	printf("Po x=3; wart. x jest: %d\n", x);
	x = 5;
	printf("Po x=5; wart. x jest: %d\n", x);
	x += 2;
	printf("Po x=x+2; wart. x jest: %d\n", x);
	x *= (x + 1);
	printf("Po x=x*(x+1); wart. x jest: %d\n", x);
	x++;
	printf("Po x=x+1; wart. x jest: %d\n", x);
	x -= (3 / 4);
	printf("Po x=x-(3/4); wart. x jest: %d\n", x);
	x /= (x + 1);
	printf("Po x=x/(x+1); wart. x jest: %d\n", x);
	x--;
	printf("Po x--; wart. x jest: %d\n", x);
	printf("\n\nKoniec programu. \n");

	// Zadanie nr. 33
	printf("Zadanie nr. 33 - program do testowania operacji przypisania\n");
	int y;
	x = 1;
	y = x + 7;			/*1*/
	y = (x + 1) + 7;	/*2*/
	y = 7 + x;			/*3*/
	y = 7 + (x + 1);	/*4*/
	y = 7 + (x + 1);	/*5*/	
	// te same wyniki dadza instrukcje z zadania o numerach: 1 i 3, 2 i 4 i 5
	printf("Koniec programu.\n\n");
	return 0;
}