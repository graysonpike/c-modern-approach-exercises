// Program to create a table of squares 1-n given n

#include <stdio.h>

int main(){
	int n = 0, c = 0;
	printf("How many squares? ");
	scanf("%d", &n);
	getchar();
	int i = 1;
	printf("n\tn^2\n");
	while(i <= n){
		printf("%d\t%d\n", i, i*i);
		i += 1;
		c += 1;
		if (c >= 24) {
			c = 0;
			printf("Press Enter to continue... ");
			getchar();
		}
	}
	return 0;
}