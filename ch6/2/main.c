// Program to calculate Greatest Common Denominator

#include <stdio.h>

int main () {
	int n, m, temp;
	while (1) {
		printf("Enter two integers seperated by spaces (0 0 to quit): ");
		scanf("%d %d", &n, &m);
		if (n == 0 && m == 0) {
			return 0;
		}
		while (n != 0) {
			temp = m % n;
			m = n;
			n = temp;
		}
		printf("%d is the GCD\n", m);
	}
	return 0;
}