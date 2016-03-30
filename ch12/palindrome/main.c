// Program to check if a string is a palindrome

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool is_letter(char c){
	return toupper(c) >= 'A' && toupper(c) <= 'Z';
}

int get_num_letters(char array[], int len){
	int num_letters = 0;
	for(int i = 0; i < len; i++){
		if(is_letter(array[i])){
			num_letters += 1;
		}
	}
	return num_letters;
}

char get_letter(char array[], int ordinal){
	int i = 0, current = 0;
	while(true){
		if(is_letter(array[i])){
			current += 1;
		}
		if(current == ordinal){
			return array[i];
		}
		i += 1;
	}
}

bool is_palindrome(char array[], int len){
	int n = get_num_letters(array, len);
	for(int i = 0; i < n; i++){
		if(get_letter(array, i+1) != get_letter(array, n-i)){
			return false;
		}
	}
	return true;
}

int main(){

	char pal[] = "abc cba";
	char not_pal[] = "not pal";

	printf("String 1: %s\n", is_palindrome(pal, 7) ? "true" : "false");
	printf("String 2: %s\n", is_palindrome(not_pal, 7) ? "true" : "false");

	return 0;
}