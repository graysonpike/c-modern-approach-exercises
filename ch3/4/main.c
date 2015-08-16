// Program to reformat a given phone number

#include <stdio.h>

int main(void){
	int area_code, first, second;
	printf("Enter phone number [ (XXX) XXX-XXXX ] : ");
	scanf("(%d) %d-%d", &area_code, &first, &second);
	printf("Reformatted Number: %d.%d.%d\n", area_code, first, second);
	return 0;
}