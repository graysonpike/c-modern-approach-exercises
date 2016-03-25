// Program to find the maximum and minimum values of an array

#include <stdio.h>

#define SIZE 8

void max_min(int array[], int len, int *max, int *min){
	*max = array[0];
	*min = array[0];
	for(int i = 1; i < len; i++) {
		if(array[i] > *max) {
			*max = array[i];
		}
		if(array[i] < *min) {
			*min = array[i];
		}
	}
}

int main() {

	int array[SIZE] = {1, 5, 4, 7, 3, 9, 1, 12};

	int min, max;

	max_min(array, SIZE, &max, &min);

	printf("The highest value is %d, lowest is %d\n", max, min);

	return 0;
}