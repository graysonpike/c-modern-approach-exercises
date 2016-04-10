// Count the number of spaces in a string using subscripting

#include <stdio.h>

int count_spaces(const char *string){
	int spaces = 0, i = 0;
	while(string[i] != '\0') {
		if(string[i] == ' ') {
			spaces += 1;
		}
		i += 1;
	}
	return spaces;
}

int main() {

	char string[] = "Hello world. This is a test.";

	printf("There are %d spaces.\n", count_spaces(string));

	return 0;
}