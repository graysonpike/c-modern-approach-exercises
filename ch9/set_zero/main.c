// Function to set array elements to zero in a given array

#include <stdio.h>

void set_zero (int a[], int len) 
{
	for (int i = 0; i < len; i++) {
		a[i] = 0;
	}
}

void print_array(int a[], int len) 
{
	for (int i = 0; i < len; i++) {
		if (i < len - 1) {
			printf("%d, ", a[i]);
		} else {
			printf("%d", a[i]);
		}
	}
}

int main () 
{
	int array[] = {1, 2, 3, 4, 5};

	printf("Array before: ");
	print_array(array, 5);
	printf("\n");

	set_zero(array, 5);

	printf("Array after: ");
	print_array(array, 5);
	printf("\n");

	return 0;
}