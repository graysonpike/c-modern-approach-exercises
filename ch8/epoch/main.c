// Prints time since UNIX epoch in seconds, minutes, hours, days, and years.

#include <stdio.h>
#include <time.h>

int main () {

	long int seconds = time(NULL);

	printf("Time since epoch:\n");
	printf("%ld seconds -or-\n", seconds);
	printf("%.1lf minutes -or-\n", seconds / (double) 60);
	printf("%.1lf hours -or-\n", seconds / (double) 60 / 60);
	printf("%.1lf days -or-\n", seconds / (double) 60 / 60 / 24);
	printf("%.2lf years\n", seconds / (double) 60 / 60 / 24 / 365);
	
	return 0;
}