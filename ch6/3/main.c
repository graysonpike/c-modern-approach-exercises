// Program to simplify a fraction

#include <stdio.h>

int main () {
	int numerator, denominator, n, m, temp;
	while (1) {
		printf("Enter a fraction in the format x/x. (0/0 to exit): ");
		scanf("%d/%d", &numerator, &denominator);
		if (denominator == 0 && numerator == 0){
			return 0;
		}
		if (denominator == 0 && numerator != 0){
			printf("Cannot divide by zero.\n");
		} else {
			n = numerator;
			m = denominator;
			while (n != 0) {
				temp = m % n;
				m = n;
				n = temp;
			}
			numerator /= m;
			denominator /= m;
			if (m != 1) {
				printf("Simplified fraction: %d/%d\n", numerator, denominator);
			} else {
				printf("Faction is already in simplest form.\n");
			}
		}
	}
	return 0;
}