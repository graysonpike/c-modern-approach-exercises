// Reverse polish notation program
#include <stdio.h>
#include "input.h"
#include "stack.h"

#define MAX_LEN 200

int main() {

	char input[MAX_LEN];
	// Get string input
	printf("Enter an expression: ");
	get_input(input, MAX_LEN);
	int i = 0, n;
	while(i < MAX_LEN && input[i] != '\0') {
		// If there's a number, read it and push to stack
		if(input[i] >= '0' && input[i] <= '9') {
			// Read numbers that may span multiple chars
			n = read_int(input + i);
			i += num_digits(n) - 1;
			push(n);
		}
		// If there's an operator, pop the last two numbers and apply the operation to them
		switch(input[i]) {
			case '+': {
				push(pop() + pop());
				break;
			}
			case '-': {
				int temp = pop();
				push(pop() - temp);
				break;
			}
			case '*': {
				push(pop() * pop());
				break;
			}
			case '/': {
				int temp = pop();
				push(pop() / temp);
				break;
			}
		}
		i += 1;
	}

	printf("Result: %d\n", pop());

	return 0;
}