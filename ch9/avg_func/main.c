// Function to average two doubles

#include <stdio.h>

double average (double a, double b) {
	return (a + b) / 2.0l;
}

int main () {

	double a, b;

	printf("Enter two numbers (x y) : ");
	scanf("%lf %lf", &a, &b);

	printf("%G is the average of %G and %G.\n", average(a, b), a, b);

	return 0;
}