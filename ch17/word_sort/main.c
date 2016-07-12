// Program to store and sort a list of words

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 50
#define MAX_WORD_SIZE 20

// Get a word from the user, return dynamically allocated string
char *get_word() {
	char *word = malloc(MAX_WORD_SIZE + 1); // +1 for \0
	printf("> ");
	scanf("%s", word);
	if(word[0] == 'q' && strlen(word) == 1){
		return NULL;
	}
	word = realloc(word, strlen(word));
	return word;
}

// Lexographic comparison function for qsort
int compare_words(const void *p, const void *q) {
	return strcmp(*(const char**)p, *(const char**)q);
}

void print_string_array(char **array, int len){
	for(int i = 0; i < len; i++) {
		printf("%s\n", *(array + i));
	}
}

int main() {
	
	char *words[MAX_WORDS];
	
	printf("Enter words to be sorted.\n");
	printf("Enter 'q' when complete\n");
	
	int i = 0;
	while(i < MAX_WORDS && (words[i] = get_word()) != NULL) {
		i += 1;
	}
	
	printf("Before sort:\n");
	print_string_array(words, i);
	qsort(words, i, sizeof(char*), compare_words);
	printf("After sort:\n");
	print_string_array(words, i);
	
	
	
	return 0;
}