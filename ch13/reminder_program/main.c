// Reminder program: takes input of 'N A~>' where N is the day of the month
// and A is a string, then prints a formatted and sorted reminder list.
// Examples: "3 Haircut at noon"
//           "25 Kyle's Birthday"

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_R 50
#define R_LEN 100

void swap_int(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap_str(char *a, char *b) {
	char temp[R_LEN];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}

bool read_line(char *reminder, int *day) {
	scanf("%2d", day);
	char *start = reminder;
	while((*reminder = getchar()) != '\n' && reminder < start + 100){
		reminder += 1;
	}
	*reminder = '\0';
	return 0;
}

int main() {

	char reminders[MAX_R][R_LEN];
	int days[MAX_R];
	int num_reminders = 0;

	int i = 0;
	while(i < MAX_R) {
		read_line(reminders[i], &days[i]);
		if(days[i] == 0){
			break;
		}
		i += 1;
	}
	num_reminders = i;

	// Sort reminders by day - bubble sort
	bool swapped;
	do {
		swapped = false;
		for(i = 1; i < num_reminders; i++) {
			if(days[i-1] > days[i]){
				// Swap reminders + days
				swapped = true;
				swap_int(&days[i-1], &days[i]);
				swap_str(reminders[i-1], reminders[i]);
			}
		}
	} while (!swapped);

	printf("\nDay   Reminder\n");
	for(i = 0; i < num_reminders; i++) {
		printf(" %2d   %s\n", days[i], reminders[i]);
	}
	printf("\n");

	return 0;
}