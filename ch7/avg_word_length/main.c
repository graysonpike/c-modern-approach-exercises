// Program to find average length of words in a sentence

#include <stdio.h>

int main () {

	char entry;
	int letters = 0, words = 1;

	printf("Enter a sentence: ");

	while ((entry = getchar()) != '\n') {
		if (entry == ' ') {
			words += 1;
		} else {
			letters += 1;
		}
	}

	printf("Average word length: %.1f\n", (float)letters / words);

	return 0;
}