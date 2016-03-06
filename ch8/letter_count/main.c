// Count number of each type of letter in string of chars

#include <stdio.h>
#include <ctype.h>

int main () {

	char count[26] = { '\0' };
	char entry;

	printf("Enter a string: ");

	while((entry = getchar()) != '\n'){
		count[toupper(entry) - 'A'] += 1;
	}

	for (int i = 0; i < 13; i++) {
		printf("%c - %d\t%c - %d\n", 'A'+i, count[i], 'A'+13+i, count[13+i]);
	}

	return 0;
}