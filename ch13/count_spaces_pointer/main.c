// Count the number of spaces in a string using a pointer

#include <stdio.h>

int count_spaces(const char *string){
	int spaces = 0;
	while(*string != '\0') {
		if(*string == ' ') {
			spaces += 1;
		}
		string ++;
	}
	return spaces;
}

int main() {

	char string[] = "Hello world. This is a test.";

	printf("There are %d spaces.\n", count_spaces(string));

	return 0;
}