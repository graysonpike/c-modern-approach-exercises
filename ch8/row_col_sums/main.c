// Print sums of rows and columns of a matrix

#include <stdio.h>

#define HIEGHT 5
#define WIDTH 5

int main () {

	// Generated using matix_gen.py
	int matrix[HIEGHT][WIDTH] = {
		{ 5, 5, 5, 5, 5 },
		{ 5, 5, 5, 5, 5 },
		{ 5, 5, 5, 5, 5 },
		{ 5, 5, 5, 5, 5 },
		{ 5, 5, 5, 5, 5 }
	};

	int total = 0;

	// Print matrix and row sums
	int sum;
	for (int i = 0; i < HIEGHT; i++) {
		sum = 0;
		for (int j = 0; j < WIDTH; j++) {
			printf("%d\t", matrix[i][j]);
			sum += matrix[i][j];
		}
		printf("| %d\n", sum);
		total += sum;
	}

	// Print col sums
	for (int i = 0; i < WIDTH + 1; i++) {
		printf("_\t");
	}
	printf("\n");
	for (int i = 0; i < WIDTH; i++) {
		sum = 0;
		for (int j = 0; j < HIEGHT; j++) {
			sum += matrix[j][i];
		}
		printf("%d\t", sum);
		total += sum;
	}
	printf("|%d\n", total);

	return 0;
}