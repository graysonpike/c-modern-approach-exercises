// Program to determine x^n using recursion

#include <stdio.h>

int power(int x, int n) {
	if(n < 1){
		return 1;
	}
	return x * power(x, n-1);
}

int main() {
	int x = 2, n = 10;
	printf("%d to the power of %d is %d\n", x, n, power(x, n));
	return 0;
}