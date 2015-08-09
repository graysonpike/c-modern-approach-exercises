// This program prints the amounts left after the first
// three interest payments of a loan with a given 
// amount, monthly payment, and interest.

#include <stdio.h>

int main(void){
	double amount, rate, monthly;
	printf("Enter loan amount: ");
	scanf("%lf", &amount);
	printf("Enter monthly payment amount: ");
	scanf("%lf", &monthly);
	printf("Enter interest rate: (in %%): ");
	scanf("%lf", &rate);
	double monthly_rate = 1.0 + (rate / 100.0/ 12);
	int i;
	for(i = 1; i <= 3; i++){
		printf("%lf\n", monthly_rate);
		amount *= monthly_rate;
		amount -= monthly;
		printf("Amount due after month %d: %.2lf\n", i, amount); 
	}
	return 0;
}