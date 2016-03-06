// Program to demonstrate a compound literal array

#include <stdio.h>

void print_array(int a[], int len) {
	for (int i = 0; i < len; i++) {
		if (i < len - 1) {
			printf("%d, ", a[i]);
		} else {
			printf("%d", a[i]);
		}
	}
}

int main() {
	print_array((int[]){1, 2, 3, 4, 5}, 5);
	printf("\n");
	return 0;
}