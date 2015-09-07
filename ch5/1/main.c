// Program to print the number of digits in a given number.
// Limit 0 <= x <= 9999

#include <stdio.h>

int main(void) {
	int n, digits = 0;
	printf("Enter a number (0 - 9999): ");
	scanf("%d", &n);

	if(n < 9) {
		digits = 1;
	}
	else if(n < 99) {
		digits = 2;
	}
	else if(n < 999) {
		digits = 3;
	}
	else if(n < 9999) {
		digits = 4;
	}

	if(digits == 1) {
		printf("There is 1 digit in %d\n", n);
	} else {
		printf("There are %d digits in %d\n", digits, n);
	}
	return 0;
}