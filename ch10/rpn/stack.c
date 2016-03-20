#include "stack.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty() {
	top = 0;
}

bool is_empty(){
	return top == 0;
}

bool is_full(){
	return top == STACK_SIZE;
}

void push(int x){
	if(is_full()){
		printf("Stack Overflow\n");
		exit(1);
	}
	contents[top] = x;
	top += 1;
}

int pop(){
	if(is_empty()){
		printf("Stack Underflow\n");
		exit(1);
	}
	top -= 1;
	return contents[top];
}