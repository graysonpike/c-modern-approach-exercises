// Progam to determine how many digits are in n

#include <stdio.h>

int num_digits(int n){
	if(n == 0) {
		return 0;
	} else {
		return 1 + num_digits(n/10);
	}
}

int main() {
	int x = 123456;
	printf("There are %d digits in %d\n", num_digits(x), x);
}