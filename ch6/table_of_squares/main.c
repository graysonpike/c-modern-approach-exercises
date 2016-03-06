// Program to create a table of squares 1-n given n

#include <stdio.h>

int main(){
	int n = 0;
	printf("How many squares? ");
	scanf("%d", &n);
	int i = 1;
	printf("n\tn^2\n");
	while(i <= n){
		printf("%d\t%d\n", i, i*i);
		i += 1;
	}
	return 0;
}