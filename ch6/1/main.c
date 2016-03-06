// Program to print the largest number of
// an inputted list

#include <stdio.h>

int main () {

	double entry;
	double largest = 0.0;

	while (1) {
		printf("Enter a number. (Enter 0 to quit)\n");
		scanf("%lf", &entry);
		if (entry > largest) {
			largest = entry;
		}
		if (entry <= 0) {
			printf("Largest number is %f\n", largest);
			return 0;
		}
	}
}