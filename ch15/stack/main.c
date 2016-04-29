// Program to implement stack.h source file

#include <stdio.h>
#include "stack.h"

int main() {

	push(5);
	push(1);
	printf("2 Pops: %d, %d\n", pop(), pop());

	return 0;
}