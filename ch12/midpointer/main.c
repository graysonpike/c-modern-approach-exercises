// Use pointer arithmatic to find the middle (or median) element of
// an array given top and bottom pointers

#include <stdio.h>

int *median(int *bottom, int *top) {
	printf("%ld\n", top - bottom + 1);
	return bottom + (top - bottom + 1) / 2;
}

int main() {
	int array[] = {1, 2, 10, 4, 5};
	printf("Median element: %d\n", *median(array, &array[4]));
	return 0;
}