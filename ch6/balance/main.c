// Program to balance a bank account with
// credits (deposits) and debits (withdrawls)

#include <stdio.h>

int main () {
	int ans;
	double entry, total = 0.0;
	while (1) {
		printf("1-Credit 2-Debit 3-Show Balance 4-Exit\n");
		scanf("%d", &ans);
		switch (ans) {
			case 1:
				printf("Enter credit amount: ");
				scanf("%lf", &entry);
				total += entry;
				break;
			case 2:
				printf("Enter debit amount: ");
				scanf("%lf", &entry);
				total -= entry;
				break;
			case 3:
				printf("Total Balance: %.2lf\n", total);
				break;
			case 4:
				return 0;
			default:
				printf("%d is not a valid option.\n", ans);
				break;
		}
	}
}