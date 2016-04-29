#include <stdio.h>
#include <stdbool.h>
#include "input.h"

// Grab a single word, ignore spaces
bool get_word(char *word, int len) {
	char c;
	int i = 0;
	bool word_started = false;
	while((c = getchar()) != '\n' && i < len-1) {
		if(word_started == false) {
			if(c == ' ') {
				continue;
			} else {
				word_started = true;
				word[i] = c;
			}
		} else {
			if(c == ' ') {
				break;
			} else {
				word[i] = c;
			}
		}
		i += 1;
	}
	word[i] = '\0';
	if(c == '\n') {
		return true;
	}
	return false;
}