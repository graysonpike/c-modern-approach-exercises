// Sum the elements of a 2d int array using pointers

#include <stdio.h>

#define ROWS 3
#define COLS 5

int sum_2d(int array[][COLS], int rows, int cols){
	int sum = 0;
	for(int *p = &array[0][0]; p <= &array[rows-1][cols-1]; p++){
		sum += *p;
	}
	return sum;
}

int main(){
	int array[ROWS][COLS] = {
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5}
	};
	printf("Sum of array: %d\n", sum_2d(array, ROWS, COLS));
	return 0;
}