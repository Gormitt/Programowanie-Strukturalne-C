// zadania 87 – 93

#include <stdio.h>
#include <stdlib.h>

main() {
	// nevermind :
	int size = 7;
	int* tab = (int*)malloc(sizeof(int) * size);
	if (tab != NULL) {
		for (int i = 0; i < size; i++) {
			tab[i] = i + 1;
		}
		for (int i = 0; i < size; i++) {
			printf("%d ", tab[i]);
		}
	}
	return 0;
	// nevermind end ;)
}