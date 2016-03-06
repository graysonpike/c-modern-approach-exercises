// Generate a random hand of playing cards

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main () {

	srand((unsigned) time(NULL));

	const char suits[] = { 'c', 's', 'h', 'd' };
	const char ranks[] = { '1', '2', '3', '4', '5', '6',
		'7', '8', '9', 't', 'j', 'q', 'k', 'a' };

	bool used[NUM_SUITS][NUM_RANKS] = {false};

	int remaining;
	printf("Enter number of cards: ");
	scanf("%d", &remaining);

	int suit, rank;

	while (remaining > 0) {
		suit = rand() % NUM_SUITS;
		rank = rand() % NUM_RANKS;
		if(!used[suit][rank]) {
			printf("%c%c ", suits[suit], ranks[rank]);
			used[suit][rank] = true;
			remaining -= 1;
		}
	}
	printf("\n");

	return 0;
}