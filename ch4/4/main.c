// Progam to print the octal value of a number

#include <stdio.h>

int main(void) {
	int n;
	printf("Enter a decimal number (0 < n < 32767) : ");
	scanf("%d", &n);
	printf("Number in octal: %05o\n", n);
	return 0;
}