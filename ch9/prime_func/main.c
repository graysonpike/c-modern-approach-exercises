// Determine if a number is prime

#include <stdio.h>
#include <stdbool.h>

bool isPrime (int n) {

	for (int i = 2; i < n-1; i ++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;	
}

int main () {

	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	if (isPrime(n)) {
		printf("%d is prime.\n", n);
	} else {
		printf("%d is not prime.\n", n);
	}

	return 0;
}