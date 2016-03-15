// Program to determine the area of a triangle given base and height

#include <stdio.h>

double triangle_area(double base, double height) {
	return base * height / 2.0;
}

int main() {
	double base = 5.25, height = 3.2;
	printf("Area of trainge with base %g and height %g is %g\n", base, height, triangle_area(base, height));
	return 0;
}