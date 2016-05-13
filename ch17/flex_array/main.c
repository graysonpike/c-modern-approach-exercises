// Example use of a Flexible Array Member

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct vstring {
	int len;
	char chars[]; // No array length specifier denotes a flexible array member of this struct
};

int main() {
	
	// Make a struct to fit exactly the length of my first name
	struct vstring *str = malloc(sizeof(struct vstring) + 8);
	strcpy(str->chars, "Grayson");
	
	printf("My name is %s\n", str->chars);
	
}