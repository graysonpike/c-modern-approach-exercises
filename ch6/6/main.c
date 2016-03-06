// Program to print all even squares between 0 and n

#include <stdio.h>

int main () {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (int i = 0; i*i <= n; i++) {
		if (i*i % 2 == 0) {
			printf("%d\n", i*i);
		}
	}
	return 0;
}