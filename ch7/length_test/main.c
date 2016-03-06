// Output length of given string

#include <stdio.h>

int main () {
	int len = 0;

	printf("Enter your message: ");

	while (getchar() != '\n') {
		len += 1;
	}

	printf("Your message is %d characters long.\n", len);

	return 0;
}