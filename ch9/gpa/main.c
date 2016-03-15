// Program to calculate gpa given char array of grades and length n

#include <stdio.h>
#include <ctype.h>

double calc_gpa(char grades[], int n) {
	for(int i = 0; i < n; i++){
		grades[i] = toupper(grades[i]);
	}
	double total = 0;
	for(int i = 0; i < n; i++){
		switch(grades[i]){
			case 'A': total += 4; break;
			case 'B': total += 3; break;
			case 'C': total += 2; break;
			case 'F': break;
			default: break;
		}
	}
	return total / n;
}

int main() {
	char grades[] = {'A', 'a', 'b', 'C', 'f'};
	printf("GPA is %g\n", calc_gpa(grades, 5));
}