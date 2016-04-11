// Program to censor

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void censor(char *str, char *word) {

	bool compare(char *a, char *b, int len) {
		for(int i = 0; i < len; i++){
			if(*(a+i) != *(b+i)) {
				return true;
			}
		}
		return false; 
	}

	void fill(char *str, char fill, int len) {
		for(int i = 0; i < len; i++) {
			*(str + i) = fill;
		}
	}

	int len = strlen(str);
	int word_len = strlen(word);
	for(int i = 0; i < len - strlen(word); i++) {
		if(!compare(str+i, word, word_len)) {
			fill(str +i, 'x', word_len);
		}
	}
}

int main() {
	char string[50] = "This is a test to see if foo is censored.";
	printf("%s\n", string);
	censor(string, "foo");
	printf("%s\n", string);

	return 0;
}
