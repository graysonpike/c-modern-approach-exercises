// Program to test parameterized macros

#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))
#define PRODUCT_LESS(x, y) ((x) * (y) < 100 ? 1 : 0)

int main() {
	printf("Cube of 5 is %d\n", CUBE(5));
	printf("Is the product less than 100?\n");
	printf("5 and 5: %s\n", PRODUCT_LESS(5, 5) ? "True" : "False");
	printf("20 and 6: %s\n", PRODUCT_LESS(20, 6) ? "True" : "False");
	return 0;
}