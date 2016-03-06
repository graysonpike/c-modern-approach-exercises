// Count vowels in given sentence

#include <stdio.h>
#include <ctype.h>

int main () {
	
	int vowels = 0;
	char entry = '\0';
	
	printf("Enter a sentence: ");
	entry = getchar();
	while (entry != '\n') {
		entry = toupper(entry);
		if (entry == 'A' || entry == 'E' || entry == 'I' || entry == 'O' || entry == 'U') {
			vowels += 1;
		}
		entry = getchar();
	}
	printf("%d vowels\n", vowels);

	return 0;
}