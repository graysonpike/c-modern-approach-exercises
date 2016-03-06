// Determine if a number is prime

#include <stdio.h>
#include <stdbool.h>

int main () {
	int n;
	bool prime = false;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (int i = 2; i < n-1; i ++) {
		if (n % i == 0) {
			printf("%d is not prime; divisible by %d and %d\n", n, i, n/i);
			prime = true;
			break;
		}
	}
	if(!prime){
		printf("%d is prime\n", n);
	}
	return 0;
}