// Program to sum a 2-dimensional array

#include <stdio.h>

int sum_2d_array(int r, int c, int a[r][c]) {

	int total = 0;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			total += a[i][j];
		}
	}

	return total;
}

int main() {

	int array[][5] = {
		{1, 2, 3, 4, 5},
		{2, 3, 4, 5, 6},
		{3, 4, 5, 6, 7}
	};

	printf("Sum of array: %d\n", sum_2d_array(3, 5, array));

	return 0;
}