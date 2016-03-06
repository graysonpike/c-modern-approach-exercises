// Name formatter

#include <stdio.h>
#include <ctype.h>

int main () {
	
	printf("Enter a name: (First Last): ");

	char first = toupper(getchar());
	char last[50] = { '\0' };

	while(getchar() != ' ');

	int i = 0;
	while((last[i] = getchar()) != '\n') { i++; }

	printf("Formatted name: %c. ", first);
	char temp;
	i = 0;
	while (i < 50 && (temp = last[i]) != '\n') {
		i ++;
		printf("%c", temp);
	}
	printf("\n");

	return 0;
}