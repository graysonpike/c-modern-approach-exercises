// Program to print "x and counting" counting down from x
// Grayson Pike Dec 2015

#include <stdio.h>

int main(){
	int x = 10;
	while(x > 0){
		printf("%d and counting\n", x);
		x -= 1;
	}
	printf("Liftoff.\n");
	return 0;
}