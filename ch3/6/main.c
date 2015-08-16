// Program to add two fractions using the input format 
// numerator/denominator
// Note that output fraction is not in simplest form

#include <stdio.h>

int main(void){
	int num1, num2, denom1, denom2;
	printf("Enter the fractions <X/X+X/X>: ");
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
	int result_num = num1 * denom2 + num2 * denom1;
	int result_denom = denom1 * denom2;
	printf("Sum: %d/%d\n", result_num, result_denom);
	printf("In Decimal: %g\n", (double)result_num/(double)result_denom);
}