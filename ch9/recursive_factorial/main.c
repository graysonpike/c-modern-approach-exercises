// Program to find a factorial using recursion

#include <stdio.h>

int factorial(int n) {
	if (n <= 0) {
		return 1;
	}
	return n * factorial(n-1);
}

int main() {

	int x = 5;

	printf("The factorial if %d is %d\n", x, factorial(x));

	return 0;
}