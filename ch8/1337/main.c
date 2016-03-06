// Convert normal message to annoying 1337 speak

#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

int main () {

	char entry[500] = { '\0' };

	printf("Enter a message (500 char max): ");

	int i = 0;
	while ((entry[i] = getchar()) != '\n' && i < 500) {
		i += 1;
	}

	for (int j = 0; j < i; j++) {
		char temp = entry[j];
		temp = toupper(temp);
		switch (temp) {
			case 'A':
				temp = '4';
				break;
			case 'B':
				temp = '8';
				break;
			case 'E':
				temp = '3';
				break;
			case 'I':
				temp = '1';
				break;
			case 'O':
				temp = '0';
				break;
			case 'S':
				temp = '5';
				break;
			default:
				break;
		}
		printf("%c", temp);
	}

	// Print random number of exclamation marks from 5 to 12
	srand((unsigned) time(NULL));
	int marks = 5 + rand() % 8;
	for (int i = 0; i < marks; i ++) {
		printf("!");
	}
	printf("\n");

	return 0;
}