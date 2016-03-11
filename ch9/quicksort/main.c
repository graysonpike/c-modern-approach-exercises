// Recursive implementation of quicksort

#include <stdio.h>

#define LEN 8

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

void quicksort(int a[], int low, int high) {

	int split(int a[], int low, int high) {

		void swap(int a[], int i, int j) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}

		int pivot = low;
		while(1){
			while(a[low] < a[pivot] && low < high) {
				low += 1;
			}
			while(a[high] >= a[pivot] && high > low) {
				high -= 1;
			}
			if(low != high) {
				swap(a, low, high);
			} else {
				swap(a, pivot, low);
				return low;
			}
		}
	}

	if(low >= high) { return; }
	int partition = split(a, low, high);
	quicksort(a, low, partition - 1);
	quicksort(a, partition + 1, high);
}

int main() {
	int array[LEN] = {1, 5, 4, 7, 3, 9, 1, 12};
	print_array(array, LEN);
	quicksort(array, 0, LEN-1);
	printf(" -> ");
	print_array(array, LEN);
	printf("\n");
}