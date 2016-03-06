// Print the factorial of a given positive integer.

#include <stdio.h>

int main () {
	long double n;
	int original;
	printf("Enter a number: ");
	scanf("%d", &original);
	n = original;
	for (int i = n-1; i > 0; i -= 1) {
		n *= i;
	}
	printf("The factorial of %d is %1.3Le\n", original, n);
	return 0;
}