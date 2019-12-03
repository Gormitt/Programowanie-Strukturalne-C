// ZADANIA 8 - 16

#include <stdio.h>

main() {
	// rozwiazanie zadania 8
	printf("Zadanie nr. 8\n");
	printf("Liczby zapisane w kolumnie, posiadaja znak (dodatnia/ujemna) [modyfikator '+']:\n");
	printf("%+10d\n", -11);
	printf("%+10d\n", 0);
	printf("%+10d\n", 11111);

	printf("Liczby zapisane w kolumnie, wyrownane do lewej strony [modyfikator '-']:\n");
	printf("%-10d\n", -11);
	printf("%-10d\n", 0);
	printf("%-10d\n", 11111);
	printf("Koniec programu.\n\n");
	// rozwiazanie zadania 9
	printf("Zadanie nr. 9\n");
	printf("Liczby zapisane w jednej kolumnie o szerokosci 10, z uzyciem modyfikatorem 0:\n");
	printf("%010d\n", -11);
	printf("%010d\n", 0);
	printf("%010d\n", 11111);
	printf("Koniec programu.\n\n");
	// rozwiazanie zadanie 10
	printf("Zadanie nr. 10 - wypisanie za pomoc¹ instrukcji putchar\n");
	putchar('x');
	putchar(':');
	putchar('\t');
	putchar('f');
	putchar('(');
	putchar('x');
	putchar(')');
	putchar(':');
	putchar('\n');
	// zakonczenie pierwszej linii
	putchar('3');
	putchar('\t');
	putchar('5');
	putchar('\n');
	// zakonczenie drugiej linii
	printf("Koniec programu.\n\n");
	// rozwiazanie zadania 11
	printf("Zadanie nr. 11\n");
	printf("%14d\twypisanie liczby z modyfikatorem d\n", -5);
	printf("%14o\twypisanie liczby z modyfikatorem o (liczba calkowita bez znaku)\n", -5);
	printf("%14u\twypisanie liczby z modyfikatorem u (iczba calkowita dziesiêtna bez znaku)\n", -5);
	printf("%14f\twypisanie liczby z modyfikatorem f (liczba zmiennoprzecinkowa)\n", -5);
	printf("%14e\twypisanie liczby z modyfikatorem e (liczba w notacji naukowej)\n", -5);
	printf("%14g\twypisanie liczby z modyfikatorem g (liczba zmiennoprzecinkowa w formacie inteligentym)\n", -5);
	// podczas uzycia modyfikatora 's' program zawiesza sie na kilka sekund i przechodzi do kolejnej instrukcji
	printf("Koniec programu.\n\n");
	// rozwiazanie zadania 12
	printf("Zadanie nr. 12\n");
	printf("%14d\twypisanie liczby z modyfikatorem d\n", -5.0);
	printf("%14o\twypisanie liczby z modyfikatorem o (liczba calkowita bez znaku)\n", -5.0);
	printf("%14u\twypisanie liczby z modyfikatorem u (iczba calkowita dziesiêtna bez znaku)\n", -5.0);
	printf("%14f\twypisanie liczby z modyfikatorem f (liczba zmiennoprzecinkowa)\n", -5.0);
	printf("%14e\twypisanie liczby z modyfikatorem e (liczba w notacji naukowej)\n", -5.0);
	printf("%14g\twypisanie liczby z modyfikatorem g (liczba zmiennoprzecinkowa w formacie inteligentym)\n", -5.0);
	// podczas uzycia modyfikatora 's' program zawiesza sie na kilka sekund i przechodzi do kolejnej instrukcji
	printf("Koniec programu.\n\n");
	// rozwiazanie zadanie 13
	printf("Zadanie nr. 13\n");
	// podpunkt 1
	printf("\npodpunkt nr. 1 (arg.1: liczba zmiennoprzecinkowa, arg.2: liczba zmiennoprzecinkowa, wynik: liczba zmiennoprzecinkowa) :\n");
	printf("%.1f + %.1f = %.2f\n", 2.0, 3.0, 2.0 + 3.0);
	printf("%.1f - %.1f = %.2f\n", 2.0, 3.0, 2.0 - 3.0);
	printf("%.1f * %.1f = %.2f\n", 2.0, 3.0, 2.0 * 3.0);
	printf("%.1f / %.1f = %.2f\n", 2.0, 3.0, 2.0 / 3.0);
	printf("%.1f / %.1f = %.2f\n", 3.0, 2.0, 3.0 / 2.0);
	// podpunkt 2
	printf("\npodpunkt nr. 2 (arg.1: liczba calkowita, arg.2: liczba calkowita, wynik: liczba calkowita):\n");
	printf("%d + %d = %d\n", 2, 3, 2 + 3);
	printf("%d - %d = %d\n", 2, 3, 2 - 3);
	printf("%d * %d = %d\n", 2, 3, 2 * 3);
	printf("%d / %d = %d\n", 2, 3, 2 / 3);
	printf("%d / %d = %d\n", 3, 2, 3 / 2);
	// podpunkt 3
	printf("\npodpunkt nr. 3 (arg.1: liczba calkowita, arg.2: liczba zmiennoprzecinkowa, wynik: liczba zmiennoprzecinkowa):\n");
	printf("%d + %.1f = %.2f\n", 2, 3.0, 2 + 3.0);
	printf("%d - %.1f = %.2f\n", 2, 3.0, 2 - 3.0);
	printf("%d * %.1f = %.2f\n", 2, 3.0, 2 * 3.0);
	printf("%d / %.1f = %.2f\n", 2, 3.0, 2 / 3.0);
	printf("%d / %.1f = %.2f\n", 3, 2.0, 3 / 2.0);
	// podpunkt 4
	printf("\npodpunkt nr. 4 (arg.1: liczba calkowita, arg.2: liczba zmiennoprzecinkowa, wynik: liczba calkowita):\n");
	printf("%d + %.1f = %d\n", 2, 3.0, 2 + 3.0);
	printf("%d - %.1f = %d\n", 2, 3.0, 2 - 3.0);
	printf("%d * %.1f = %d\n", 2, 3.0, 2 * 3.0);
	printf("%d / %.1f = %d\n", 2, 3.0, 2 / 3.0);
	printf("%d / %.1f = %d\n", 3, 2.0, 3 / 2.0);
	printf("Koniec programu.\n\n");
	// rozwiazanie zadania 14
	printf("Zadanie nr. 14 - wypisanie string z poprawnym modyfikatorem\n");
	printf("%s\n", "ala");		// poprawne wypisanie na ekranie stringa "ala"
	//printf("%s\n", ’ala’);		// error: identifier 'ala' is undefined 
	//printf("%s\n", ala);			// error: -------------||--------------
	//printf("%s\n""ala");			// program dziala, ale ze wzgledu na brak odniesienia argumentu to modyfikatora %s program wypisuje na ekranie smieci z pamieci
	//printf("%s\n", "5");			// program wypisuje ne ekranie string "5"
	//printf("%s\n", ’5’);			// error: identifier '5' is undefined
	//printf("%s\n", 5);			// program dziala, ale ze wzgledu na niezgodnosc modyfikatora z podanym typem program nie wypisuje nic na ekranie
	printf("Koniec programu.\n\n");
	// rozwiazanie zadania 15
	printf("Zadanie nr. 15 - testowanie sekwencji specjalnych\n");
	printf("\ttabulacja pozioma\n");
	printf("\vtabulacja pionowa\n");
	printf("\bbackspace\n");
	printf("\rpowrot karetki\n");
	printf("\fformfeed\n");
	printf("\adzwonek\n");
	printf("\\backslash\n");
	printf("\'apostrof\n");
	printf("\"cudzyslow\n");
	printf("Koniec programu.\n\n");
	// rozwiazanie zadania 16
	printf("Zadanie nr. 16 - wypisanie na ekranie wiadomosci podanej w tresi zadania (szkolace wstawianie znakow specjalnych)\n");
	for (int i = 0; i < 38; i++) {
		printf("\\");
	}
	printf("\nCzy \"a\" oznacza w C to samo co \'a\' ?\n");
	for (int i = 0; i < 38; i++) {
		printf("\\");
	}
	printf("\n\aKoniec programu.\n\n");
	return 0;
}