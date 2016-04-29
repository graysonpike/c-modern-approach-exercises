// Input related operations for RPN program

#include <stdio.h>
#include "input.h"

// Get one line of input from the user and store it in a char string
void get_input(char *str, int len){
	int i = 0;
	char c;
	while((c = getchar()) != '\n' && i < len-1) {
		str[i] = c;
		i += 1;
	}
	str[i] = '\0';
}

int read_int(char *str){
	int i = 0, n = 0;
	while(str[i] >= '0' && str[i] <= '9') {
		n *= 10;
		n += str[i] - '0';
		i += 1;
	}
	return n;
}

int num_digits(int n) {
	int digits = 0;
	while(n > 0) {
		n /= 10;
		digits += 1;
	}
	return digits;
}