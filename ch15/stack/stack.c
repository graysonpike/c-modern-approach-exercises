#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = 0;

void push(int x) {
	if(is_full()) {
		printf("Stack Overflow\n");
		exit(1);
	}
	stack[top] = x;
	top += 1;
}

int pop() {
	if(is_empty()) {
		printf("Stack Underflow\n");
		exit(1);
	}
	top -= 1;
	return stack[top];
}

bool is_empty() {
	return top == 0;
}

bool is_full() {
	return top == STACK_SIZE - 1;
}

void make_empty() {
	top = 0;
}