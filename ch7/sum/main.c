// Program to sum given int values

#include <stdio.h>

int main () {
	long int sum = 0, entry = -1;
	while (entry != 0) {
		printf("Enter a value: (0 to quit): ");
		scanf("%ld", &entry);
		if (entry == 0) {
			printf("Total: %ld\n", sum);
			return 0;
		}
		sum += entry;
	}
	return 0;
}