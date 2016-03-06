// Generate a random integer between two given values

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {

	int low, high;

	printf("Enter lower inclusive bound: ");
	scanf("%d", &low);
	printf("Enter upper inclusive bound: ");
	scanf("%d", &high);

	// Initialize RNG with time seed
	srand((unsigned) time(NULL));
	
	for (int i = 0; i < 101; i++) {
		printf("> %d\n", low + (rand() % (high - low + 1)));
	}

	return 0;
}