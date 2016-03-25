// Program to decompose a double value into integer and fractional parts

#include <stdio.h>

#define VALUE 3.14

void decompose(double x, int *int_part, double *frac_part) {
	*int_part = (int) x;
	*frac_part = x - *int_part;
}

int main() {

	int int_part;
	double frac_part;
	decompose(VALUE, &int_part, &frac_part);

	printf("The decomposed form of %g is %d and %g\n", VALUE, int_part, frac_part);

	return 0;
}