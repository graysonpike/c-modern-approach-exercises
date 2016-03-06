// Print a calendar format given number of
// days in the month and first day of the month.

#include <stdio.h>

int main () {
	int days, start;
	printf("Enter number of days in month: ");
	scanf("%d", &days);
	printf("Enter day of the week for first day of the month\n");
	printf("(1-Monday, 2-Tuesday ... 7-Sunday): ");
	scanf("%d", &start);
	start -= 1;
	for (int i = 0; i < days + start; i++){
		if (i-start >= 1){
			printf("%2d", i-start);
		} else {
			printf("  ");
		}
		if (i % 7 == 0){
			printf("\n");
		} else {
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}