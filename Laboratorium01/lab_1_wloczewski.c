// ZADANIE 1-7

#include <stdio.h>
#include <math.h>

main() {
	// Zadanie nr. 1
	printf("Zadanie nr. 1\n");
	printf("Oto szesciany wybranych liczb:\n\n");
	printf("%c\t%s\n\n", 'k', "k*k*k");
	printf("%d\t%d\n", 21, 21 * 21 * 21);
	printf("%d\t%d\n", 32, 32 * 32 * 32);
	printf("%d\t%d\n", -53, -53 * -53 * -53);
	printf("\nKoniec programu.\n\n");
	// Zadanie nr. 2
	printf("Zadanie nr. 2\n");
	printf("Oto szesciany wybranych liczb:\n\n");
	printf("%3c%10s\n\n", 'k', "k*k*k");
	printf("%3d%10d\n", 21, 21 * 21 * 21);
	printf("%3d%10d\n", 32, 32 * 32 * 32);
	printf("%3d%10d\n", -53, -53 * -53 * -53);
	printf("\nKoniec programu.\n\n");
	// Zadanie nr. 3
	printf("Zadanie nr. 3\n");
	printf("Oto szesciany wybranych liczb\nw zapisane w systemie osemkowym\n\n");
	printf("%c%30s", 'k', "k*k*k (system osemkowy)\n\n");
	printf("%d%17o\n", 2, 2 * 2 * 2);
	printf("%d%17o\n", 3, 3 * 3 * 3);
	printf("%d%17o\n", 5, 5 * 5 * 5);
	printf("\nKoniec programu.\n\n");
	// Zadanie nr. 4
	printf("Zadanie nr. 4\n");
	printf("Oto pierwiastki kwadratowe wybranych liczb\n\n");
	printf("%2c%17s", 'k', "sqrt(k)\n\n");
	printf("%2d%15f\n", 21, sqrt(21.0));
	printf("%2d%15f\n", 32, sqrt(32.0));
	printf("%2d%15f\n", 53, sqrt(53.0));
	printf("\nKoniec programu.\n\n");
	// Zadanie nr. 5
	printf("Zadanie nr. 5\n");
	printf("Oto pierwiastki kwadratowe wybranych liczb\n\n");
	printf("%2c%13s", 'k', "sqrt(k)\n\n");
	printf("%2d%24.18f\n", 21, sqrt(21.0));
	printf("%2d%24.18f\n", 32, sqrt(32.0));
	printf("%2d%24.18f\n", 53, sqrt(53.0));
	printf("\nKoniec programu.\n\n");
	// Zadanie nr. 6
	printf("Zadanie nr. 6\n");
	printf("Oto pierwiastki kwadratowe wybranych liczb\n\n");
	printf("%5c%16s", 'k', "sqrt(k)\n\n");
	printf("%5d%17e\n", 21, sqrt(21.0));
	printf("%5d%17e\n", 132, sqrt(132.0));
	printf("%5d%17e\n", 11153, sqrt(11153.0));
	printf("\nKoniec programu.\n\n");
	// Zadanie nr. 7
	printf("Zadanie nr. 7\n");
	printf("Oto pierwiastki kwadratowe wybranych liczb\n\n");
	printf("%14s%15g\n", "0.000000001", sqrt(0.000000001));
	printf("%14s%15g\n", "0.00000001", sqrt(0.00000001));
	printf("%14s%15g\n", "9876543210123", sqrt(9876543210123));
	printf("%14s%15g\n", "987654321012", sqrt(987654321012));
	printf("\nKoniec programu.\n\n");
}