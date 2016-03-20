// Program to evaluate reverse polish notation
// NOTE: Because spaces don't work in scanf for strings
//       and this isn't an exercise in string input, only
//       single digit operands are allowed.

#include <stdio.h>
#include <string.h>
#include "stack.h"

#define MAX_SIZE 100

int rpn(char str[]){
	int i = 0;
	while(str[i] != '\0'){
		if(str[i] >= '0' && str[i] <= '9'){
			push(str[i] - '0');
		} else {
			int temp;
			switch(str[i]){
				case '+': push(pop() + pop()); break;
				case '-': 
					temp = pop(); 
					push(pop() - temp); 
					break;
				case '*': push(pop() * pop()); break;
				case '/':
					temp = pop();
					push(pop() / temp);
					break;
				case '=': break;
				default: break;
			}
		}
		i += 1;
	}
	return pop();
}

int main(){
	char str[MAX_SIZE];
	printf("Enter an RPN: ");
	scanf("%s", str);
	printf("= %d\n", rpn(str));

	return 0;

}