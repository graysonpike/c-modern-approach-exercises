// Program to return the kth digit of n
// e.g. digit(15436, 2) -> 3

#include <stdio.h>

int digit(int n, int k) {
	if(k == 1) {
		return n % 10;
	} else {
		return digit(n/10, k - 1);
	}
}

int main() {
	int x = 87456;
	printf("The 4th digit of %d is %d\n", x, digit(x, 4));
	return 0;
}