// Program to demonstrate pointers to functions

#include <stdio.h>

int square(int x) {
	return x * x;
}

int cube(int x) {
	return x * x * x;
}

int apply(int (*operation)(int), int x) {
	return (*operation)(x);
}

int main() {

	printf("5 sqaured: %d\n", apply(&square, 5));
	printf("5 cubed: %d\n", apply(&cube, 5));

	return 0;
}