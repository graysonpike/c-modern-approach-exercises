// Program to take in date in mm/dd/yyyy format and
// return it in yyyy.mm.dd format

#include <stdio.h>

int main(void){
	int month, day, year;
	printf("Input date in mm/dd/yyyy format: ");
	scanf("%d/%d/%d", &month, &day, &year);
	printf("Reformatted: %04d.%02d.%02d\n", year, month, day);
	return 0;
}