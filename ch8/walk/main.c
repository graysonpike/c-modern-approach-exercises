// Random walk of 26 steps on a 10x10 matrix, labeled with letters

// p.s. there's probably a much better way to implement this
// TODO: make elegant

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define WIDTH 10
#define HEIGHT 10

int main () {

	char board[HEIGHT][WIDTH] = { 0 };
	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			board[i][j] = '.';
		}
	}

	srand((unsigned) time(NULL));
	char current = 'A';
	int dir;
	int x = 0, y = -1;
	int nx = x, ny = y;
	bool possible;

	while(current <= 'Z') {
		nx = x;
		ny = y;
		dir = rand() % 4;
		switch (dir) {
			case 0:
				nx -= 1;
				break;
			case 1:
				nx += 1;
				break;
			case 2:
				ny -= 1;
				break;
			case 3:
				ny += 1;
			default:
				break;
		}

		bool legal = true;
		if (nx < 0 || ny < 0 || nx > WIDTH || ny > HEIGHT) {
			legal = false;
		}
		if (board[ny][nx] != '.') {
			legal = false;
		}

		// Is there a possible legal move?
		if (!legal) {
			possible = false;
			// Becuase of eval rules, second expression of if statment will not
			// be eval'd if first fails, no problems with out-of-bounds array access
			if (x-1 >= 0 && board[y][x-1] == '.') { possible = true; }
			if (x+1 < WIDTH && board[y][x+1] == '.') { possible = true; }
			if (y+1 < HEIGHT && board[y+1][x] == '.') { possible = true; }
			if (y-1 <= 0 && board[y-1][x] == '.') { possible = true; }
			if (!possible) { 
				break; 
			} else { 
				continue; // Retry with new coords
			}
		}

		// If move is legal, place marker and update coords
		x = nx;
		y = ny;
		board[y][x] = current;
		current += 1;
	}

	// Print finished board
	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

	return 0;
}