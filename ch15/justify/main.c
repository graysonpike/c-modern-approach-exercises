// Program to justify text to a width of 60

#include <stdio.h>
#include <stdbool.h>
#include "input.h"
#include "line.h"

#define WORD_LEN 20

int main() {

	char word[WORD_LEN];
	bool end = false;

	get_word(word, WORD_LEN);
	while(!end) {
		while(add_word(word) && !end) {
			end = get_word(word, WORD_LEN);
		}
		if(!end) {
			print_line();
			clear_line();
		} else {
			print_line_no_justify();
		}
	}

	return 0;
}