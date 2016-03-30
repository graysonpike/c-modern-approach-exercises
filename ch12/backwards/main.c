// Take an inputted message and print it in reverse

#include <stdio.h>

#define MAX 100

void print_reverse(char array[], int len){
	
	for(char *p = &array[len-2]; p >= array; p--) {
		printf("%c", *p);
	}
	printf("\n");
}

int main(){
	char c, message[MAX];
	int i = 0;
	printf("Enter a message: ");
	while(i < MAX && (c = getchar()) != '\n') {
		message[i] = c;
		i += 1;
	}
	print_reverse(message, i+1);
}