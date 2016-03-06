// Determine if two words are anagrams of each other

#include <stdio.h>
#include <ctype.h>

int main () {

	char count1[26] = { '\0' };
	char count2[26] = { '\0' };
	char entry;

	printf("Enter a word: ");

	while((entry = getchar()) != '\n'){
		count1[toupper(entry) - 'A'] += 1;
	}

	printf("Enter another word: ");

	while((entry = getchar()) != '\n'){
		count2[toupper(entry) - 'A'] += 1;
	}

	for (int i = 0; i < 26; i++) {
		if (count1[i] != count2[i]) {
			printf("These words are not anagrams.\n");
			return 0;
		}
	}

	printf("These words are anagrams.\n");

	return 0;
}