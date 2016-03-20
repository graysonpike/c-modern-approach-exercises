#include "digits.h"
#include <stdio.h>

/*  _     _  _       _   _  _   _   _
   | | |  _| _| |_| |_  |_   | |_| |_|
   |_| | |_  _|   |  _| |_|  | |_|   |
*/

void set_digit(char digit_array[], int digit){
	switch(digit){
		case 0:
			digit_array[0] = ' ';
			digit_array[1] = '_';
			digit_array[2] = ' ';
			digit_array[3] = '|';
			digit_array[4] = ' ';
			digit_array[5] = '|';
			digit_array[6] = '|';
			digit_array[7] = '_';
			digit_array[8] = '|';
			break;
		case 1:
			digit_array[0] = ' ';
			digit_array[1] = ' ';
			digit_array[2] = '\b';
			digit_array[3] = '|';
			digit_array[4] = ' ';
			digit_array[5] = '\b';
			digit_array[6] = '|';
			digit_array[7] = ' ';
			digit_array[8] = '\b';
			break;
		case 2:
			digit_array[0] = ' ';
			digit_array[1] = '_';
			digit_array[2] = ' ';
			digit_array[3] = ' ';
			digit_array[4] = '_';
			digit_array[5] = '|';
			digit_array[6] = '|';
			digit_array[7] = '_';
			digit_array[8] = ' ';
			break;
		case 3:
			digit_array[0] = '_';
			digit_array[1] = ' ';
			digit_array[2] = ' ';
			digit_array[3] = '_';
			digit_array[4] = '|';
			digit_array[5] = ' ';
			digit_array[6] = '_';
			digit_array[7] = '|';
			digit_array[8] = ' ';
			break;
		case 4:
			digit_array[0] = ' ';
			digit_array[1] = ' ';
			digit_array[2] = ' ';
			digit_array[3] = '|';
			digit_array[4] = '_';
			digit_array[5] = '|';
			digit_array[6] = ' ';
			digit_array[7] = ' ';
			digit_array[8] = '|';
			break;
		case 5:
			digit_array[0] = ' ';
			digit_array[1] = '_';
			digit_array[2] = ' ';
			digit_array[3] = '|';
			digit_array[4] = '_';
			digit_array[5] = ' ';
			digit_array[6] = ' ';
			digit_array[7] = '_';
			digit_array[8] = '|';
			break;
		case 6:
			digit_array[0] = ' ';
			digit_array[1] = '_';
			digit_array[2] = ' ';
			digit_array[3] = '|';
			digit_array[4] = '_';
			digit_array[5] = ' ';
			digit_array[6] = '|';
			digit_array[7] = '_';
			digit_array[8] = '|';
			break;
		case 7:
			digit_array[0] = '_';
			digit_array[1] = ' ';
			digit_array[2] = ' ';
			digit_array[3] = ' ';
			digit_array[4] = '|';
			digit_array[5] = ' ';
			digit_array[6] = ' ';
			digit_array[7] = '|';
			digit_array[8] = ' ';
			break;
		case 8:
			digit_array[0] = ' ';
			digit_array[1] = '_';
			digit_array[2] = ' ';
			digit_array[3] = '|';
			digit_array[4] = '_';
			digit_array[5] = '|';
			digit_array[6] = '|';
			digit_array[7] = '_';
			digit_array[8] = '|';
			break;
		case 9:
			digit_array[0] = ' ';
			digit_array[1] = '_';
			digit_array[2] = ' ';
			digit_array[3] = '|';
			digit_array[4] = '_';
			digit_array[5] = '|';
			digit_array[6] = ' ';
			digit_array[7] = ' ';
			digit_array[8] = '|';
			break;
	}
}


void print_digits(char digit_arrays[][9], int len){
	for(int i = 0; i < 3; i ++){
		for(int digit = 0; digit < len; digit++) {
			for(int j = 0; j < 3; j++){
				//printf("[%d][%d]\n", digit, (i*3)+(j%3));
				printf("%c", digit_arrays[digit][(i*3)+(j%3)]);
			}
			printf(" ");
		}
		printf("\n");
	}
}