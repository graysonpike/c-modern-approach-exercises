// Swap the values of two integers

#include <stdio.h>

void swap(int *i, int *j) {
	int temp = *i;
	*i = *j;
	*j = temp;
}

int main() {
	int a = 1;
	int b = 5;
	printf("Before: a=%d, b=%d\n", a, b);
	swap(&a, &b);
	printf("After: a=%d, b=%d\n", a, b);
}