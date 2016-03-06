// Convert 12-hour time to 24-hour time

#include <stdio.h>
#include <ctype.h>

int main () {

	int hours, minutes;
	char ampm;

	printf("Enter a 12 hour time: ");
	scanf("%d:%d %c", &hours, &minutes, &ampm);

	if (toupper(ampm) == 'P') {
		hours += 12;
	}

	printf("24-hour time: %d:%02d\n", hours, minutes);

	return 0;
}