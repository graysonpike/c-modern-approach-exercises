#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "line.h"

#define WORD_LEN 20

char words[30][WORD_LEN];
int length = 0;
int num_words = 0;

// Add word to line, return true if successful, false otherwise
bool add_word(char *word) {
	int word_len = strlen(word);
	// Is there room for the word? (With spaces)
	if(60 - length - num_words + 1 > word_len) {
		length += word_len;
		strcpy(words[num_words], word);
		num_words += 1;
		return true;
	} else {
		return false;
	}
}

// Print all words with justification to a line length of 60
void print_line() {
	int num_spaces = 60 - length;
	for(int i = 0; i < num_words; i++) {
		printf("%s", words[i]);
		if((num_words - i - 1) != 0) {
			int spaces_to_add = num_spaces / (num_words - i - 1);
			for(int j = 0; j < spaces_to_add; j++) {
				printf(" ");
			}
			num_spaces -= spaces_to_add;
		}
	}
	printf("\n");
}

void print_line_no_justify() {
	for(int i = 0; i < num_words; i++) {
		printf("%s ", words[i]);
	}
	printf("\n");
}

void clear_line() {
	length = 0;
	num_words = 0;
}