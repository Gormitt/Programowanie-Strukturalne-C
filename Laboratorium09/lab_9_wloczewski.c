// Zadanie 62 - 66

#include <stdio.h>

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
	printf("Koniec programu.\n\n");
}

main() {
	// Zadanie nr. 62
	Zadanie62();
	return 0;
}