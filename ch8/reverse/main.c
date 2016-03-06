// Print series of numbers in reverse

#include <stdio.h>

int main () {

	int length;
	printf("Enter length of array: ");
	scanf("%d", &length);

	int array[length];

	for (int i = 0; i < length; i ++) {
		printf("> ");
		scanf("%d", &array[i]);
	}

	printf("{ ");
	for (int i = length - 1; i >= 0; i -= 1) {
		printf("%d ", array[i]);
	}
	printf("}");


	return 0;
}