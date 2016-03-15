// Program to check if a number is between 0 and n-1

#include <stdio.h>
#include <stdbool.h>
bool check(int x, int y, int n) {
	bool check(int x, int n) {
		return (x > 0 && x < n-1) ? true : false;
	}
	return check(x, n) && check (y, n);
}

int main() {
	printf("%s\n", check(3, 5, 7) ? "true" : "false");
	printf("%s\n", check(5, -3, 7) ? "true" : "false");
	printf("%s\n", check(4, 9, 7) ? "true" : "false");
	return 0;
}