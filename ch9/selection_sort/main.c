// C implementation of selection sort

#include <stdio.h>

#define SIZE 11

void print_array(int a[], int len) {

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

void selection_sort(int array[], int len){

	if(len == 1) { return; }

	void swap(int a[], int i, int j) {
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

	int largest = array[0];
	for(int i = 0; i < len; i++) {
		if(array[i] > array[largest]){
			largest = i;
		}
	}
	swap(array, largest, len - 1);
	selection_sort(array, len - 1);
}

int main() {
	int array[SIZE] = {4, 1, 2, 6, 2, 8, 9, 0, 3, 5, 7};
	printf("Array before sort: ");
	print_array(array, SIZE);
	selection_sort(array, SIZE);
	printf("\nArray after sort: ");
	print_array(array, SIZE);
	printf("\n");
	return 0;
}