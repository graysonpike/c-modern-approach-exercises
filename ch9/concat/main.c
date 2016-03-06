// Function to concatenate arrays a and b into array c of
// greater or equal length to sum of lengths a and b

#include <stdio.h>

void concatenate(int len_a, int len_b, int a[len_a], int b[len_b], int c[len_a + len_b]) {
	for (int i = 0; i < len_a; i++) {
		c[i] = a[i];
	}
	for (int i = 0; i < len_b; i++) {
		c[i+len_a] = b[i];
	}
}

void print_array(int a[], int len) 
{
	printf("{ ");
	for (int i = 0; i < len; i++) {
		if (i < len - 1) {
			printf("%d, ", a[i]);
		} else {
			printf("%d", a[i]);
		}
	}
	printf(" }");
}

int main () {
	
	int a[] = {1, 2, 3, 4, 5};
	int b[] = {6, 7, 8, 9, 10};
	int c[10];

	printf("Array a: ");
	print_array(a, 5);
	printf("\n");

	printf("Array b: ");
	print_array(b, 5);
	printf("\n");

	concatenate(5, 5, a, b, c);

	printf("Array c after concat: ");
	print_array(c, 10);
	printf("\n");

}