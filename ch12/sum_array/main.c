// Sum elements of int array by incrementing a pointer

#include <stdio.h>

int sum(int array[], int len) {
	int sum = 0;
	for(int *p = &array[0]; p < &array[0] + len; p++){
		sum += *p;
	}
	return sum;
}

int main(){
	int array[] = {1, 2, 3, 4, 5};
	printf("Sum of array: %d\n", sum(array, 5));
	return 0;
}