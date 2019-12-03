// Zadania 55 - 61

#include <stdio.h>
#include <math.h>

main() {
	/*
	// Zadanie nr. 55
	int liczba1;
	int rekord1, licznikPetli1 = 0;
	printf("Zadanie nr. 55 - program do pobrania ciagu liczb naturalnych\n");
	while(1) {
		licznikPetli1++;
		printf("wpisz: \n1)'0' aby zakonczyc wpisywanie ciagu \n2)dowolna liczba calkowita wieksza od 0, aby dodac ja do ciagu\nwpis: ");
		while (scanf_s("%d", &liczba1) != 1 || liczba1 < 0 || getchar() != '\n') {
			while (getchar() != '\n') {}
			printf("ERROR - blad wczytywania: ");
		}
		if (liczba1 == 0 && licznikPetli1 == 1) {
			printf("W ciagu nie podano zadnej wartosci\n");
			break;
		}
		else if (liczba1 == 0) {
			printf("Najmniejsza wartosc w podanyc ciagu to: %d\n", rekord1);
			break;
		}
		else if (liczba1 != 0 && licznikPetli1 == 1) {
			rekord1 = liczba1;
		}
		else {
			if (liczba1 < rekord1) {
				rekord1 = liczba1;
			}
		}
	} 
	printf("Koniec zadania.\n\n");
	*/
	// Zadanie nr. 56
	int licznikPetli2 = 1;
	float srednia = 0, liczba2;
	printf("Zadanie nr. 56 - program do obliczenia sredniej arytmetycznej 10 liczb\n");
	while (licznikPetli2 <= 10) {
		printf("prosze, podja liczbe zmiennoprzecinkowa: ");
		while (scanf_s("%f", &liczba2) != 1 || getchar() != '\n') {
			while (getchar() != '\n') {}
			printf("ERROR - niepoprawnie wczytane dane, prosze sprobuj ponownie: ");
		}
		srednia += liczba2;
		licznikPetli2++;
	}
	srednia /= 10;
	printf("Srednia arytmetyczna podanych liczb to: %f\n", srednia);
	printf("Koniec programu.\n\n");
	
	// Zadanie nr. 57
	int licznikPetli3 = 0;
	double sredniaArytmetyczna = 0, sredniaGeometryczna = 1;
	printf("Zadanie nr. 57 - program do obliczania sredniej arytmetycznej i geometrycznej\n");
	while (1) {
		int liczba3 = 0;
		printf("wpisz: \n1) '0' aby zakonczyc wpisywanie ciagu \n2) dowolna liczba calkowita wieksza od 0, aby dodac ja do ciagu\nwpis: ");
		while (scanf_s("%d", &liczba3) != 1 || getchar() != '\n') {
			while (getchar() != '\n') {}
			printf("ERROR - blad wczytywania danych, prosze sprobuj ponownie: ");
		}
		if (liczba3 == 0 && licznikPetli3 == 1) {
			printf("W ciagu nie podano zadnej wartosci\n");
			break;
		}
		else if (liczba3 == 0) {
			break;
		}
		else if (liczba3 < 0) {
			printf("ERROR - wczytana liczba jest niedodatnia\n");
			continue;
		}
		else {
			licznikPetli3++;
			sredniaArytmetyczna += liczba3;
			sredniaGeometryczna *= liczba3;
		}
	}
	sredniaArytmetyczna /= licznikPetli3;
	sredniaGeometryczna = pow(sredniaGeometryczna, (double)(1 / licznikPetli3));
	printf("srednia arytmetyczna podanych liczb: %lf\n", sredniaArytmetyczna);
	printf("srednia geometryczna podanych liczb: %lf\n", sredniaGeometryczna);
	printf("Koniec programu.\n\n");

	// Zadanie nr. 58
	printf("Zadanie nr. 58 - program do wczytania ciagu binarnego i wyswietlenia jego wartosci\n");

}