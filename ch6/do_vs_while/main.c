// Comparison of 'do while' and 'while'

#include <stdio.h>

int main () {
	printf("Loop params: \niterator int i = 0\ncondition i < 5\nincrement i += 1\n");
	int i = 0;
	
	printf("While Loop:\n");
	while (i < 5) {
		printf("i -> %d\n", i);
		i += 1;
	}

	i = 0;
	printf("Do While Loop:\n");
	do {
		printf("i -> %d\n", i);
		i += 1;
	} while (i < 5);

	printf("\nLoop params: \niterator int i = 0\ncondition i > 0\nincrement i -= 1\n");
	i = 0;
	
	printf("While Loop:\n");
	while (i > 0) {
		printf("i -> %d\n", i);
		i -= 1;
	}

	i = 0;
	printf("Do While Loop:\n");
	do {
		printf("i -> %d\n", i);
		i -= 1;
	} while (i > 0);
}