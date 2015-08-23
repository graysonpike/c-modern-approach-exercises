// Program to print reversed digits of three digit number
// using scanf trickery instead of arithmetic

#include <stdio.h>

int main(void) {
	int digit1, digit2, digit3;
	printf("Enter a three digit number: ");
	scanf("%1d%1d%1d,", &digit1, &digit2, &digit3);
	printf("Reversed digits: %d%d%d\n", digit3, digit2, digit1);
	return 0;
}