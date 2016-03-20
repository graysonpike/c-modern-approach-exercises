// Program to determine if a series of parens and brackets are properly nested.

#include <stdio.h>
#include <stdbool.h>
#include "stack.h"

bool is_valid(char string[]){
	make_empty();
	int i = 0;
	while(string[i] != '\0'){
		switch(string[i]){
			case '{': push(0); break;
			case '(': push(1); break;
			case '}': if(pop() != 0){ return false; }; break;
			case ')': if(pop() != 1){ return false; }; break;
			default: break;
		}
		i += 1;
	}
	return true;
}

int main(){
	char test1[] = "(({({}(){()()})}))";
	char test2[] = "({)}";
	printf("Test 1: %s\n", is_valid(test1) ? "true" : "false");
	printf("Test 2: %s\n", is_valid(test2) ? "true" : "false");
}