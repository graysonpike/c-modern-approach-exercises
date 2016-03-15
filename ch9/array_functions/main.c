// Program with various array functions

#include <stdio.h>
#include "array_funcs.h"

#define SIZE 11

int main() {

	int array[SIZE] = {4, 1, 2, 6, 2, 8, 9, 0, 3, 5, 7};

	printf("Array is: ");
	print_array(array, SIZE);
	printf("\nAverage of array: %lf\n", average(array, SIZE));
	int lrgst_elem_ind = largest_element_index(array, SIZE);
	printf("Largest element in array: %d at index %d\n", array[lrgst_elem_ind], lrgst_elem_ind);
	printf("Number of positive elements in the array: %d\n", num_positive_elements(array, SIZE));
	quicksort(array, 0, SIZE - 1);
	printf("Sorted array: ");
	print_array(array, SIZE);
	printf("\n");

	return 0;
}