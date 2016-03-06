// Program to print the reversed digits of a number

#include <stdio.h>

int main () {
	int n, m = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	while (n > 0) {
		m *= 10;
		m += n % 10;
		n /= 10;
	}
	printf("Reversed digits: %d\n", m);
	return 0;
}