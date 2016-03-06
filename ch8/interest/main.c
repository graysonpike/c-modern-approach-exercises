// Compares profits of different interest rates on $100 over a number of years

#include <stdio.h>

int main () {

	int years, rate;

	printf("Enter number of years to comapre: ");
	scanf("%d", &years);
	printf("Enter percent interest: ");
	scanf("%d", &rate);

	float amounts[5] = { 0 };
	for(int i = 0; i < 5; i++){
		amounts[i] = 100;
	}

	printf("\nYears");
	for(int i = 0; i < 5; i++) {
		printf("\t%d%%", rate + i);
	}
	printf("\n");

	for(int i = 1; i <= years; i++) {
		printf("%d", i);
		for (int j = 0; j < 5; j++) {
			printf("\t%.2f", amounts[j]);
			amounts[j] *= ((double) 1 + (double)rate / 100 + (double)j / 100);
		}
		printf("\n");
	}

	return 0;
}