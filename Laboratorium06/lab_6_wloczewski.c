// Zadanie 41 - 47

#include <stdio.h>
#include <math.h>
#include <ctype.h>

#define LICZBA_PI 3.141592653589

main() {
	// Zadanie nr. 41
	float vec1x, vec1y, vec2x, vec2y;	// [vec1x, vec1y]	[vec2x, vec2y]
	printf("Zadanie nr. 41 - program do okreslenia jak dwa wektory sa polozone wzgledem siebie\n");
	printf("Podaj wspolrzedne pierwszego wektora: ");
	while (scanf_s("%f %f", &vec1x, &vec1y) != 2 || getchar() != '\n') {
		while (getchar() != '\n') {}
		printf("ERROR - niepoprawny format danych sprobuj ponownie: ");
	}
	printf("Podaj wspolrzedne drugiego wektora: ");
	while (scanf_s("%f %f", &vec2x, &vec2y) != 2 || getchar() != '\n') {
		while (getchar() != '\n') {}
		printf("ERROR - niepoprawny format danych sprobuj ponownie: ");
	}
	if ((vec1x == 0 && vec1y == 0) || (vec2x == 0 && vec2y == 0)) {
		printf("Jeden lub dwa wektory sa zerowe\n");
	}
	else {
		float prostopadlosc = vec1x * vec2x + vec1y * vec2y;
		float rownoleglosc = vec1x * vec2y - vec2x * vec1y;
		if (prostopadlosc == 0) {
			printf("Wektory sa prostopadle\n");
		}
		else if (rownoleglosc == 0) {
			printf("Wektory sa rownolegle\n");
		}
		else {
			printf("Wektory sa nieprostopadle inierownolegle\n");
		}
	}
	printf("Koniec programu.\n\n");

	// Zadanie nr. 42
	char wybor;			// deklaracja miennej wyboru opcji
	double pole = 0;	// zmienna na pole, ktore liczymy
	printf("Zadanie nr. 42 - program do obliczania pola trojkata, wg. wybranej metody\n");
	printf("Wybierz na podstawie jakich danych program na obliczyc pole:\n");
	printf("(1) bok i opuszczona na niego wysokosc\n");
	printf("(2) dwa boki oraz kat pomiedzy nimi\n");
	printf("(3) trzy boki\n");
	printf("Wybierz opcje: ");
	wybor = getchar();	// pobranie od yzytkownika wyboru
	while (wybor < '1' || wybor > '3' || getchar() != '\n') {	// jezeli wybor to zla cyfra lub zawiera wiecej niz jeden znak
		while (getchar() !=  '\n') {}
		printf("Prosze o wybranie opcji <1, 2, 3> : ");		// zapytaj ponownie
		wybor = getchar();
	}
	// jezeli wybor to: bok i opuszczona na niego wysokosc
	if (wybor == '1') {
		double bok = 0, wysokosc = 0;	// deklaracja zmiennych na bok i wysokosc
		printf("\nDlugosc boku trojkata a nastepnie wysokosc\n");
		do {	// petla bedzie sie powtarzac tak dlugo, az podane wielkosci beda dodatnie
			printf("Pamietaj, aby z podanych dlugosci dalo sie utworzyc trojkat - dlugosci: ");
			while (scanf_s("%lf %lf", &bok, &wysokosc) != 2 || getchar() != '\n') {	// jezeli podczas wczytywanie wystapi blad lub po danych zostanie wpisany dodatkowy znak
				while (getchar() != '\n') {}
				printf("blad wczytywania - spobouj podobnie: ");	// zapytaj ponownie
			}
		} while (bok <= 0 || wysokosc <= 0);
		pole = bok * wysokosc * 0.5;	// gdy wszyskie dane sa poprawne oblicz pole zgodnie z przyjeta formula
	}
	// jezeli wybor to dwa boki oraz kat miedzy nimi
	else if (wybor == '2') {
		double bok1, bok2, kat;		// zaklderaonie zmienny nach boki i kat miedzy nimi
		printf("\n(1) radiany\n");
		printf("(2) stopnie\n");
		printf("Wybierz jednostke dla kata: ");
		char wybor = getchar();		// zaslaniamy zmienna wyboru aby dac mozliwosc wybrania jednostki kata
		while (wybor < '1' || wybor > '2' || getchar() != '\n') {	// jezeli wybor to zla cyfra lub zawiera wiecej niz jeden znak
			while (getchar() != '\n') {}
			printf("Prosze o wybranie opcji <1, 2> : ");		// zapyaj ponownie
			wybor = getchar();
		}
		printf("Podaj dlugosci dwoch sasiednich bokow trojkata\n");
		do {	// petla bedzie sie wykonywac tak dlugo az podane wielkosci beda doatnie
			printf("Pamietaj, aby z podanych dlugosci dalo sie utworzyc trojkat - dlugosci: ");
			while (scanf_s("%lf %lf", &bok1, &bok2) != 2 || getchar() != '\n') {	// jezli podczsa wczytywania wystapi blad lub po danych zostanie wpisany dodatkowy znak
				while (getchar() != '\n') {}
				printf("blad wczytywania - sprobuj ponownie: ");	// zapytaj ponownie
			}
		} while (bok1 <= 0 || bok2 <= 0);
		// gdy wybrana jednostka sa radiany
		if (wybor == '1') {
			printf("Podaj kat [liczba bedzie rozpatrzona jako radiany]\n");
			do {	// petala bedzie sie wykonywac tak dlugo az podany kat bedzie z zakresu (0, 1 radian)
				printf("Pamietaj ze kat musi byc mniejszy od 1 radiana: ");
				while (scanf_s("%lf", &kat) != 1 || getchar() != '\n') {	// jezeli podczas wczytania wystapi blad lub po danych zostanie wpisany dodatkowy znak
					while (getchar() != '\n') {}
					printf("blad wczytywania danych - sprobuj ponownie: ");	// zapytaj ponownie
				}
			} while (kat >= 1 || kat <= 0);
			pole = 0.5 * bok1 * bok2 * sin(kat);	// gdy wszystkie dane sa poprawne oblicz pole zgodnie z przyjeta formula
		}
		// gdy wybrana jednostka to stopnie
		else if (wybor == '2') {
			printf("Podaj kat [liczba bedzie rozpatrzona jako stopnie]\n");
			do {	// petla bedzie wykonywana tak dlugo az podany kat bedzie z zakresu (0, 180 stopni)
				printf("Pamietaj ze kat musi byc mniejszy od 180 stopni: ");
				while (scanf_s("%lf", &kat) != 1 || getchar() != '\n') {	// jezli podczas wczytania wystapi blad lub po danych zostanie wpisany dodatkowy znak
					while (getchar() != '\n') {}
					printf("blad wczytywania danych - sprobuj ponownie: ");	// zapytaj ponownie
				}
			} while (kat >= 180 || kat <= 0);
			// konwersja kata na radiany
			// stopien <= stopien * radian / stopien = radian
			kat = kat * LICZBA_PI / 180;
			pole = 0.5 * bok1 * bok2 * sin(kat);	// gdy wszystkie dane sa poprawne oblicz pole zgdodnie z przyjeta formula
		}
	}
	// jezeli wybrana opcja to trzy boki
	else if (wybor == '3') {
		double bok1, bok2, bok3;	// deklaracja zmiennych na trzy boki
		printf("\nPodaj dlugosci trzech obokow trojkata \n");
		do {	// peta bedzie sie wykonywac tak dlugo az podane wielkosci beda dodatnie i beda spelniac warunki utworzenia trojkata
			printf("Pamietaj, aby z podanych dlugosci dalo sie utworzyc trojkat - dlugosci: ");
			while (scanf_s("%lf %lf %lf", &bok1, &bok2, &bok3) != 3 || getchar() != '\n') {	// jezeli podczas wczytywanie wystapi blad lub po danych zostanie wpisany dodatkowy znak
				while (getchar() != '\n') {}
				printf("blad wczytywania danych - sprobuj poniwnie: ");	// zapytaj ponownie
			}
		} while (bok1 >= bok2 + bok3 || bok2 >= bok1 + bok3 || bok3 >= bok1 + bok2 || bok1 <= 0 || bok2 <= 0 || bok3 <= 0);
		double polowaObwodu = 0.5 * (bok1 + bok2 + bok3);	// obliczenie polowy obwodu (potrzebne do wzoru herona)
		pole = sqrt(polowaObwodu * (polowaObwodu - bok1) * (polowaObwodu - bok2) * (polowaObwodu - bok3));	// gdy dane sa poprawne oblicz pole wedlug przyjetej formuly
	}
	printf("Pole tego trojkata wynosi %lf\n", pole);	// na koniec wypisz wynik
	printf("Koniec programu.\n\n");

	// Zadanie nr. 43
	printf("Zadanie nr. 43 - program do wybrania minimanlej liczby sposrod trzech podanych\n");
	float n1, n2, n3;
	printf("Podaj 3 liczy: ");
	while (scanf_s("%f %f %f", &n1, &n2, &n3) != 3 || getchar() != '\n') {
		while (getchar() != '\n') {}
		printf("blad wczytywania danych - sprobuj ponownie: ");
	}
	if (n1 >= n2 && n1 >= n3) {
		printf("Najwieszka podana przez uzytkownika liczba to %f\n", n1);
	}
	else if (n2 >= n1 && n2 >= n3) {
		printf("Najwieksza podana przez uzytkownika liczba to %f\n", n2);
	}
	else if (n3 >= n1 && n3 >= n2) {
		printf("Najwieksza podana przez uztykowniak liczba to %f\n", n3);
	}
	printf("Koniec programu.\n\n");

	// Zadanie nr. 44
	printf("Zadanie nr. 44 - program do wyswietlenia kodu ASCII podanego znaku\n");
	printf("Podaj znak: ");
	char znak = getchar();
	while (getchar() != '\n') {
		while (getchar() != '\n') {}
		printf("Prosze podaj jeden znak : ");
		znak = getchar();
	}
	printf("Kod ASCII podanego znaku to: %d\n", znak);
	printf("Koniec programu.\n\n");

	// Zadanie nr. 45
	int kodZnaku;
	printf("Zadanie nr. 46 - program do wypisania znaku po podaniu jego kodu ascii\n");
	do {
		printf("Podaj kod znaku z przedzialu <0, 255> : ");
		while (scanf_s("%d", &kodZnaku) != 1 || getchar() != '\n') {
			while (getchar() != '\n') {}
			printf("blad wczytywania - sprobuj ponownie: ");
		}
	} while (kodZnaku < 0 || kodZnaku > 127);
	if (!isprint(kodZnaku)) {
		printf("Znak jest niedrukowalny\n");
	}
	else {
		printf("podany kod to: %c\n", kodZnaku);
	}
	printf("Koniec programu.\n\n");
	
	// Zadanie nr. 46
	int godzina, minuta, godzina1, godzina2, dwukropek, minuta1, minuta2;
	int czyWyczyscicBufor = 0;
	printf("Zadanien nr. 47 - program do wczytania godziny\n");
	while (1) {
		if (czyWyczyscicBufor) {
			while (getchar() != '\n') {}
		}
		czyWyczyscicBufor = 0;

		printf("Podaj godzine: ");
		godzina1 = getchar();
		if (godzina1 == '\n') printf("<enter>");
		godzina2 = getchar();
		if (godzina2 == '\n') printf("<enter>");
		dwukropek = getchar();
		if (dwukropek == '\n') printf("<enter>");
		minuta1 = getchar();
		if (minuta1 == '\n') printf("<enter>");
		minuta2 = getchar();
		if (minuta2 == '\n') printf("<enter>");

		if (getchar() != '\n') {
			czyWyczyscicBufor = 1;
			printf("ERROR - linia nie zakonczona klawiszem ENTER\n");
			continue;
		}
		else if (!(isdigit(godzina1) && isdigit(godzina2) && isdigit(minuta1) && isdigit(minuta2))) {
			printf("ERROR - na miejscu przeznaczonym dla liczby stoi inny znak\n");
			continue;
		}
		else if ((char)dwukropek != ':') {
			printf("ERROR - godziny i minuty nie sa przedzielone dwukropkiem\n");
			continue;
		}
		else {
			godzina = (godzina1 - 48) * 10 + godzina2 - 48;
			minuta = (minuta1 - 48) * 10 + minuta2 - 48;
			if (godzina > 23 || minuta > 59) {
				printf("ERROR - nie ma takiej godziny\n");
				continue;
			}
			else {
				break;
			}
		}
	}
	printf("%d ", minuta);
	
	if (minuta == 1) printf("minuta");
	else if (minuta == 2 || minuta == 3 || minuta == 4) printf("minuty");
	else if ((char)minuta1 != '1' && ((char)minuta2 == '2' || (char)minuta2 == '3' || (char)minuta2 == '4')) printf("minuty");
	else printf("minut");

	printf(" po godzinie %d\n", godzina);
	printf("Koniec programu.\n\n");
	
	// Zadanie nr. 47
	int rok1, rok2, miesiac1, miesiac2, dzien1, dzien2, kropka1, kropka2;
	int rok, miesiac, dzien;
	int wyczysc = 0;
	printf("Zadanie nr. 47 - program do wypisania wczytaj daty\n");
	while (1) {
		if (wyczysc) {
			while (getchar() != '\n') {}
		}
		wyczysc = 0;

		printf("Podaj date: ");
		rok1 = getchar();
		rok2 = getchar();
		kropka1 = getchar();
		miesiac1 = getchar();
		miesiac2 = getchar();
		kropka2 = getchar();
		dzien1 = getchar();
		dzien2 = getchar();

		if (getchar() != '\n') {
			wyczysc = 1;
			printf("ERROR - linia nie zakonczona klawiszem ENTER\n");
			continue;
		}
		else if (!(isdigit(rok1) && isdigit(rok2) && isdigit(miesiac1) && isdigit(miesiac2) && isdigit(dzien1) && isdigit(dzien2))) {
			printf("ERROR - na miejscu przeznaczonym dla liczby stoi inny znak\n");
			continue;
		}
		else if ((char)kropka1 != '.' || (char)kropka2 != '.') {
			printf("ERROR - rok i miesiac lub miesiac i dzien nie sa oddzielone kropka\n");
			continue;
		}
		rok = (rok1 - 48) * 10 + rok2 - 48;
		miesiac = (miesiac1 - 48) * 10 + miesiac2 - 48;
		dzien = (dzien1 - 48) * 10 + dzien2 - 48;
		if (rok < 1 || rok > 49) {
			printf("ERROR - data nie jest z przedzialu lat 2001 - 2050\n");
			continue;
		}
		else if (miesiac > 12) {
			printf("ERROR - miesiac wiekszy od 12\n");
			continue;
		}
		else if (miesiac <= 7 && miesiac % 2 == 0 && dzien > 30) {
			printf("ERROR - zadany miesiac moze miec tylko 30 dni\n");
			continue;
		}
		else if (miesiac <= 7 && miesiac % 2 == 1 && dzien > 31) {
			printf("ERROR - zadany miesiac moze miec tylko 31 dni\n");
			continue;
		}
		else if (miesiac >= 8 && miesiac % 2 == 0 && dzien > 31) {
			printf("ERROR - zadany miesiac moze miec tylko 31 dni\n");
			continue;
		}
		else if (miesiac >= 8 && miesiac % 2 == 1 && dzien > 30) {
			printf("ERROR - zadany miesiac moze miec tylko 30 dni\n");
			continue;
		}
		else if (miesiac == 2 && rok % 4 == 0 && dzien > 29) {
			printf("ERROR - ten rok jest przestepny i luty moze miec tylko 29 dni\n");
			continue;
		}
		else if (miesiac == 2 && rok % 4 != 0 && dzien > 28) {
			printf("ERROR - podany rok nie jest przestepny i luty moze miec tylko 28 dni\n");
			continue;
		}
		else {
			break;
		}
	}
	printf("%d ", dzien);
	switch (miesiac) {
	case 1:
		printf("styczen");
		break;
	case 2:
		printf("luty");
		break;
	case 3:
		printf("marzec");
		break;
	case 4:
		printf("kwiecien");
		break;
	case 5:
		printf("maj");
		break;
	case 6:
		printf("czerwiec");
		break;
	case 7:
		printf("licpiec");
		break;
	case 8:
		printf("sierpien");
		break;
	case 9:
		printf("wrzesien");
		break;
	case 10:
		printf("pazdziernik");
		break;
	case 11:
		printf("listopad");
		break;
	case 12:
		printf("grudzien");
		break;
	}
	if (rok < 10) printf(" 200%d\n", rok);
	else printf(" 20%d\n", rok);

	return 0;
}