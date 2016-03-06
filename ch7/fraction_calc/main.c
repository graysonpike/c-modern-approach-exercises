// Fraction calculator

#include <stdio.h>

int main () {
	int n, m, temp, num1, num2, denom1, denom2, numerator = 0, denominator = 1;
	char operation;

	printf("Enter operation: (x/x + x/x): ");
	scanf("%d/%d %c %d/%d", &num1, &denom1, &operation, &num2, &denom2);

	if (operation == '*') {
		numerator = num1 * num2;
		denominator = denom1 * denom2;
	} else if (operation == '/') {
		numerator = num1 * denom2;
		denominator = denom1 * num2;
	} else if (operation == '+') {
		numerator = (num1 * denom2) + (num2 * denom1);
		denominator = denom1 * denom2;
	} else if (operation == '-') {
		numerator = (num1 * denom2) - (num2 * denom1);
		denominator = denom1 * denom2;
	}

	// Simplify Fraction
	n = numerator;
	m = denominator;
	while (n != 0) {
		temp = m % n;
		m = n;
		n = temp;
	}
	numerator /= m;
	denominator /= m;

	printf("Result: %d/%d\n", numerator, denominator);

	return 0;
}