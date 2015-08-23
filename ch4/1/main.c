// Program to print a two digit number
// with its digits in reversed order.

#include <stdio.h>

int main(void) {
	int n;
	printf("Enter a two digit number: ");
	scanf("%d", &n);
	printf("Reversed Digits: %d%d\n", n%10, n/10);
}