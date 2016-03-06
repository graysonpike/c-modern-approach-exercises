// Determine largest value n possible to calculate
// n^2 given integral data type.

#include <stdio.h>
#include <math.h>

int main () {
	printf("%d\n", (int) sizeof(int));
	printf("Largest n with short int: %d\n", (int) sqrt(pow(2, 8 * sizeof(short int))));
	printf("Largest n with int: %d\n", (int) sqrt(pow(2, 8 * sizeof(int))));
	printf("Largest n with long int: %ld\n", (long int) sqrt(pow(2, 8 * sizeof(long int))));
	return 0;
}