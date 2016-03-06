// Function to sum elements of an array

#include <stdio.h>

int sum(int a[], int len) {

	int total = 0;

	for (int i = 0; i < len; i++) {
		total += a[i];
	}

	return total;
}

int main () {

	int array[] = {1, 2, 3, 4, 5};

	printf("Sum of array: %d\n", sum(array, 5));

	return 0;
}