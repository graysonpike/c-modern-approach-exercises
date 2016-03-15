#include <stdio.h>
#include "array_funcs.h"

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

double average(int array[], int len) {
	int total = 0;
	for(int i = 0; i < len; i++) {
		total += array[i];
	}
	return total / (double) len;
}

int largest_element_index(int array[], int len) {
	int largest_index = 0;
	for(int i = 1; i < len; i++){
		if(array[i] > array[largest_index]){
			largest_index = i;
		}
	}
	return largest_index;
}

int num_positive_elements(int array[], int len){
	int positive_element_count = 0;
	for(int i = 0; i < len; i ++){
		if(array[i] > 0){
			positive_element_count += 1;
		}
	}
	return positive_element_count;
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