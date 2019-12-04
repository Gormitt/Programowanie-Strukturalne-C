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
	
	// Zadanie nr. 56
	int licznikPetli2 = 1;
	float srednia = 0, liczba2;
	printf("Zadanie nr. 56 - program do obliczenia sredniej arytmetycznej 10 liczb\n");
	while (licznikPetli2 <= 10) {
		printf("prosze, podaj liczbe zmiennoprzecinkowa: ");
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
		if (liczba3 == 0 && licznikPetli3 == 0) {
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
	if (licznikPetli3 > 0) {
		sredniaArytmetyczna /= licznikPetli3;
		sredniaGeometryczna = pow(sredniaGeometryczna, (1 / (double)licznikPetli3));
		printf("srednia arytmetyczna podanych liczb: %lf\n", sredniaArytmetyczna);
		printf("srednia geometryczna podanych liczb: %lf\n", sredniaGeometryczna);
	}
	printf("Koniec programu.\n\n");
	
	// Zadanie nr. 58
	printf("Zadanie nr. 58 - program do wczytania ciagu binarnego i wyswietlenia jego wartosci\n");
	printf("Podaj ciag binarny: ");
	int licznikZnakow = 0;
	long long wartoscCiaguBinarnego = 0;
	while (1) {
		char znak = getchar();
		if (znak == '\n' && licznikZnakow == 0) {
			printf("brak wartosci, bo ciag jest pusty\n");
			break;
		}
		else if (znak == '\n') {
			printf("wartosc podanego ciagu to: %lld\n", wartoscCiaguBinarnego);
			break;
		}
		else if (znak != '0' && znak != '1') {
			printf("brak wartosci, w ciagu podano niedozwolony znak\n");
			break;
		}
		else {
			licznikZnakow++;
			if (licznikZnakow > 32) {
				printf("brak wartosci, przekroczono 32 znaki\n");
				break;
			}
			wartoscCiaguBinarnego *= 2;
			if (znak == '1') wartoscCiaguBinarnego++;
		}
	}
	printf("Koniec programu.\n\n");
	*/
	// Zadanie nr. 59
	double liczba4;
	int czyszczenieBufora = 0, iloscWpisanychLiczb = 0;
	double suma = 0, roznica = 0, iloczyn = 1, iloraz = 1;
	printf("Zadanie nr. 59 - program do wczytania liczb i wykonania opercaji\n");
	while (1) {
		if (czyszczenieBufora) {
			while (getchar() != '\n') {}
			czyszczenieBufora = 0;
		}

		char wybor, kolejnyZnak;
		printf("\n0. Zakoncz program\n");
		printf("1. Wczytaj liczby\n");
		printf("2. Dodaj\n");
		printf("3. Odejmij\n");
		printf("4. Pomnoz\n");
		printf("5. Podziel.\n");
		printf("wybor: ");
		wybor = getchar();
		kolejnyZnak = getchar();
		
		if (kolejnyZnak == '\n' && wybor >= '0' && wybor <= '5') {
			if (wybor == '0') {
				break;
			}
			else if (wybor == '1') {
				printf("wczytaj liczbe: ");
				while (scanf_s("%lf", &liczba4) != 1 || getchar() != '\n') {
					while (getchar() != '\n') {}
					printf("ERROR - blad podczas wczytywania danych, sprobuj ponownie: ");
				}
				iloscWpisanychLiczb++;
				suma += liczba4;
				iloczyn *= liczba4;
				if (iloscWpisanychLiczb == 1) {
					roznica = liczba4;
					iloraz = liczba4;
				}
				else {
					roznica -= liczba4;
					iloraz /= liczba4;
				}
			}
			else if (wybor == '2') {
				printf("suma wszystkich podanych liczb to: %lf\n", suma);
			}
			else if (wybor == '3') {
				printf("roznica wszystkich podanych liczb to: %lf\n", roznica);
			}
			else if (wybor == '4') {
				printf("iloczyn wszystkich podanych liczb to: %lf\n", iloczyn);
			}
			else if (wybor == '5') {
				printf("iloraz wszystkich podanych liczb to: %lf\n", iloraz);
			}
			continue;
		}
		else if (kolejnyZnak == '\n' && (wybor < '0' || wybor > '5')) {
			printf("ERROR - nie ma takiej opcji\n");
			continue;
		}
		else {
			printf("ERROR - niepoprawnie wczytane dane\n");
			czyszczenieBufora = 1;
			continue;
		}
	}
	printf("Koniec programu.\n\n");
}