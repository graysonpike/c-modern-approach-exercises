// Determine if there are repeating digits in given number n

#include <stdio.h>
#include <stdbool.h>

int main () {
	
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	bool seen[10] = {false};

	while (n > 0) {
		if(seen[n % 10] == true) {
			printf("Number has repeating digit (%d).\n", n % 10);
			return 0; 
		} else {
			seen[n % 10] = true;
		}
		n /= 10;
	}
	printf("No repeating digits.\n");
	return 0;
}