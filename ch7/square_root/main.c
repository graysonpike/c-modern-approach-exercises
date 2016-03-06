// Program to use Newton's method to calculate the square
// root of a positive integer x.

#include <stdio.h>

int main () {

	int x;
	double y = 1.0L;

	printf("Enter a number: ");
	scanf("%d", &x);

	for (int i = 0; i < 10; i++) {
		// DANGER: Access and modification of same var in expression
		// Should work given operator precedence
		if (y - (y = (y + x/y) / 2) == 0.0L) {
			break;
		}
	}

	printf("Approximate sqrt(%d) is %lf\n", x, y);

	return 0;
}