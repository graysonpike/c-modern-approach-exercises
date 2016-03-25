// Find the two largest elements of an int array

#include <stdio.h>

void print_array(int a[], int len) 
{
	printf("{ ");
	for (int i = 0; i < len; i++) {
		if (i < len - 1) {
			printf("%d, ", a[i]);
		} else {
			printf("%d", a[i]);
		}
	}
	printf(" }");
}

void two_largest(int array[], int n, int *first, int *second) {
	int index = 0;
	*first = array[0];
	*second = array[0];
	for(int i = 1; i < n; i++) {
		if(array[i] > *first){
			*first = array[i];
			index = i;
		}
	}
	if(index == 0) {*second = array[1];}
	for(int i = 0; i < n; i++) {
		if(array[i] > *second && i != index){
			*second = array[i];
		}
	}
}

int main(){
	int array[] = {8, 3, 2, 4, 7};
	int first, second;
	printf("Array: ");
	print_array(array, 5);
	two_largest(array, 5, &first, &second);
	printf("\nFirst: %d, Second: %d\n", first, second);

}