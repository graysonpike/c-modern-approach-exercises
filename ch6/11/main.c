// Program to approximate mathematical const e given accuracy n
// where n is as shown below

// e = 1 + 1/1! + 1/2! + 1/3! ... 1/n!

#include <stdio.h>

int main () {
	int n;
	long double e = 1;
	unsigned long long int d;

	printf("Enter accuracy: (largest effective given quadruple precision float is 9): ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		d = i;
		for (int j = d-1; j > 0; j--) {
			d *= j;
		}
		e += 1.0L / d;
	}
	printf("e ~= %Lf\n", e);
	return 0;
}