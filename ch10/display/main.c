// Program to create a digit display

#include <stdio.h>
#include "digits.h"

int main() {

	char digit_arrays[10][9];

	set_digit(digit_arrays[0], 0);
	set_digit(digit_arrays[1], 1);
	set_digit(digit_arrays[2], 2);
	set_digit(digit_arrays[3], 3);
	set_digit(digit_arrays[4], 4);
	set_digit(digit_arrays[5], 5);
	set_digit(digit_arrays[6], 6);
	set_digit(digit_arrays[7], 7);
	set_digit(digit_arrays[8], 8);
	set_digit(digit_arrays[9], 9);

	print_digits(digit_arrays, 10);

	return 0;
}