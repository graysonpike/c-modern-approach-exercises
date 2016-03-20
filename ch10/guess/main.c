// Guessing game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define MAX 100

void init_rng(){
	srand((unsigned) time(NULL));
}

int get_secret_number(){
	return rand() % MAX + 1;
}

void read_guesses(int secret_number){
	int guess;
	int num_guesses = 1;
	while(1){
		printf("\nEnter a guess: ");
		scanf("%d", &guess);
		if(guess == secret_number){
			printf("Congratulations. You won in %d guesses.\n", num_guesses);
			return;
		} else if (guess > secret_number){
			printf("Try again, too high.\n");
		} else {
			printf("Try again, too low.\n");
		}
		num_guesses += 1;
	}
}

int main(){
	char command;
	/*for(int i = 0; i < 10; i++){
		printf("%d\n", get_secret_number());
	}*/
	init_rng();
	do{
		printf("Guess the secret number between 1 and %d\n", MAX);
		read_guesses(get_secret_number());
		printf("Play again? ");
		scanf("%*c%c", &command);
	} while(toupper(command) == 'Y');
	return 0;
}