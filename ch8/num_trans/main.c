// Translate phone number with letters, retain formatting

#include <stdio.h>
#include <ctype.h>

int main () {

	char number[30] = { '\0' };

	printf("Enter a phone number: ");

	int i = 0;
	while((number[i] = toupper(getchar())) != '\n') {
		i++;
	}

	char temp;
	i = 0;
	while((temp = number[i]) != '\n') {
		i++;
		if (temp >= 'A' && temp <= 'Z') {
			printf("%d", (temp - 'A') / 3 + 1);
		} else {
			printf("%c", temp);
		}
	}
	printf("\n");

}