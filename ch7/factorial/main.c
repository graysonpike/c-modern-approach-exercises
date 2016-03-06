// Print the factorial of a given positive integer.

#include <stdio.h>

int main () {
	long int n;
	int original;
	printf("Enter a number: ");
	scanf("%ld", &n);
	original = n;
	for (int i = n-1; i > 0; i -= 1) {
		n *= i;
	}
	printf("The factorial of %d is %ld\n", original, n);
	return 0;
}