// Program to split time in seconds since midnight into hours, minutes, and seconds.

#include <stdio.h>

void split_time(long total_sec, int *hours, int *minutes, int *seconds) {
	*hours = total_sec / 60 / 60;
	*minutes = total_sec / 60 - *hours * 60;
	*seconds = total_sec - *hours * 3600 - *minutes * 60;
}

int main() {
	int hours, minutes, seconds;
	split_time(2 * 60 * 60 + 5 * 60 + 12, &hours, &minutes, &seconds);
	printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
}