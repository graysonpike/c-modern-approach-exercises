// Function to return a pointer to the largest of two variables

#include <stdio.h>

int *max(int *i, int *j) {
	if(i < j){
		return i;
	} else {
		return j;
	}
}

int main() {

	int i = 5, j = 7;
	int *p = max(&i, &j);

	printf("The largest value is %d\n", *p);

	return 0;
}