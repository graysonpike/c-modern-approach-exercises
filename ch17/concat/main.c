// Function to concatenate two strings with malloc

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(char *src1, char *src2) {
	char *dest;
	if((dest = malloc(strlen(src1) + strlen(src2))) == NULL) {
		printf("Error allocating memory for string\n");
		exit(1);
	}
	strcpy(dest, src1);
	strcat(dest, src2);
	return dest;
}

int main() {

	char *str1 = "abcd";
	char *str2 = "efgh";

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", concat(str1, str2));

	return 0;
}