// See size in memory of each data type

#include <stdio.h>

int main () {
	printf("- Size (Bytes) -\n");
	printf("char\t\t%lu\n", sizeof(char));
	printf("short\t\t%lu\n", sizeof(short));
	printf("int\t\t%lu\n", sizeof(int));
	printf("long\t\t%lu\n", sizeof(long));
	printf("float\t\t%lu\n", sizeof(float));
	printf("double\t\t%lu\n", sizeof(double));
	printf("long double\t%lu\n", sizeof(long double));
	return 0;
}