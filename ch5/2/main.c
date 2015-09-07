// Program to convert 24 to 12 hour time

#include <stdio.h>

int main(void) {
	int hours, minutes;
	printf("Enter a 24 hour time (XX:XX): ");
	scanf("%d:%d", &hours, &minutes);
	printf("12 hour format: ");
	if(hours < 13) {
		printf("%d", hours);
	} else {
		printf("%d", hours - 12);
	}
	// %02d format used in minutes to preserve format
	// ex: 12:1 -> 12:01
	printf(":%02d ", minutes);
	if(hours < 12) {
		printf("AM\n");
	} else {
		printf("PM\n");
	}
	return 0;
}