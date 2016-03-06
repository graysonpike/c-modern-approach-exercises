// Determine earilest date in given dates

#include <stdio.h>

int main () {
	int month, day, year;
	int e_month, e_day, e_year;
	for (int i = 0; i > -1; i++) {
		printf("Enter a date: (mm/dd/yyyy) (0/0/0 to quit): ");
		scanf("%d/%d/%d", &month, &day, &year);
		if (month == 0 && day == 0 && year == 0){
			printf("Earliest Date: %d/%d/%d\n", e_month, e_day, e_year);
			return 0;
		}
		if (i == 0){
			e_month = month;
			e_day = day;
			e_year = year;
		}
		if (year < e_year) {
			e_month = month;
			e_day = day;
			e_year = year;
		}
		if (year == e_year && month < e_month) {
			e_month = month;
			e_day = day;
			e_year = year;
		}
		if (year == e_year && month == e_month && day < e_day) {
			e_month = month;
			e_day = day;
			e_year = year;
		}
	}
	return 0;
}