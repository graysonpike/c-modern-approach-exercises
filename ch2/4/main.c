// This program prints the price of a given item with tax

#define TAX 1.05 // 5%
#include <stdio.h>

int main(void){
	double amount;
	printf("Enter Dollar Amount: ");
	scanf("%lf", &amount);
	printf("With %d%% tax: %.2lf\n", (int)((TAX - 1.0) * 100.0), amount * TAX);
}