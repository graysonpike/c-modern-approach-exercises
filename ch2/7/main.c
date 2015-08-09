// Program to return the number of 1, 5, 10, and 20 dollar bills
// for a transaction of a given amount with the fewest bills

#include <stdio.h>

int main(void){
	int amount;
	int ones = 0, fives = 0, tens = 0, twenties = 0;
	printf("Enter the dollar amount:");
	scanf("%d", &amount);
	while(amount >= 20){
		amount -= 20;
		twenties += 1;
	}
	while(amount >= 10){
		amount -= 10;
		tens += 1;
	}
	while(amount >= 5){
		amount -= 5;
		fives += 1;
	}
	ones = amount;

	printf("Bills\n");
	printf("$1  - %d\n", ones);
	printf("$5  - %d\n", fives);
	printf("$10 - %d\n", tens);
	printf("$20 - %d\n", twenties);
	return 0;
}