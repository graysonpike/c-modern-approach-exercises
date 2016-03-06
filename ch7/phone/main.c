// Translate letters to numbers for phone number

#include <stdio.h>

int main () {
	char letter = '\0';
	long int number = 0;

	while (1) {
		letter = getchar();
		if (letter == '\n') { break; }
		number *= 10;
		if (letter >= 'A' && letter <= 'Z') {
			number += (letter - 'A') / 3 + 1;
		} else {
			number += letter - '0';
		}
		
	}

	printf("Number: %ld\n", number);

	return 0;
}