// Program to input some sale information and print it in a pseudo-table

#include <stdio.h>

int main(void){
	int day, month, year;
	int item_num;
	double price;

	// Input Data
	printf("Enter item number: ");
	scanf("%d", &item_num);
	printf("Enter price: ");
	scanf("%lf", &price);
	printf("Enter date (mm/dd/yyyy):");
	scanf("%d/%d/%d", &month, &day, &year);

	// Format and Output Data
	printf("Item\tUnit\tPurchase\n");
	printf("\tPrice\tDate\n");
	printf("%d\t$%.2lf\t%d/%d/%d\n", item_num, price, month, day, year);

	return 0;
}