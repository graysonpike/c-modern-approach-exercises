// Print digits which are repeated in a number

#include <stdio.h>

int main () {

	long int entry;
	int used[10] = { 0 };

	printf("Enter a number: ");
	scanf("%ld", &entry);

	while(entry > 0) {
		used[entry % 10] += 1;
		entry /= 10;
	}

	printf("Digit:     \t");
	for (int i = 0; i < 10; i ++) {
		printf("%d  ", i);
	}
	printf("\nOccurances:\t");
	for (int i = 0; i < 10; i ++) {
		printf("%d  ", used[i]);
	}
	printf("\n");

	return 0;
}