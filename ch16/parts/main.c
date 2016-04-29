// Program to maintain an inventory of parts
// i - insert
// s - search
// u - update
// p - print
// q - quit

#include <stdio.h>
#include <string.h>

#define NAME_LEN 30
#define MAX_ITEMS 100

struct item {
	int number;
	char name[NAME_LEN];
	int quantity;
} database[MAX_ITEMS];
int num_items;

void add_item(int number, char *name, int quantity) {
	for(int i = 0; i < num_items; i++) {
		if(database[i].number == number) {
			printf("Item by this number already exists.\n");
			return;
		} else if(strcmp(database[i].name, name) == 0) {
			printf("Item by this name already exists.\n");
			return;
		}
	}
	database[num_items].number = number;
	strcpy(database[num_items].name, name);
	database[num_items].quantity = quantity;
	num_items += 1;
}

void update(int number, int quantity) {
	for(int i = 0; i < num_items; i++) {
		if(database[i].number == number) {
			database[i].quantity = quantity;
			return;
		}
	}
	printf("Could not find item with number: %d\n", number);
}

void search(int number) {
	for(int i = 0; i < num_items; i++) {
		if(database[i].number == number) {
			printf("#%d - %s - %d in stock.\n", 
				number, database[i].name, database[i].quantity);
			return;
		}
	}
	printf("No entries found for item number %d\n", number);
}

void print_database() {
	printf("Number\tName\tQuantity\n");
	for(int i = 0; i < num_items; i++) {
		printf("%d\t%s\t%d\n", database[i].number, database[i].name, database[i].quantity);
	}
	printf("\n");
}

int main() {

	char c;
	printf("Enter a command: ");
	while((c = getchar()) != 'q') {
		switch(c) {
			case 'i': {
				int number, quantity;
				char name[NAME_LEN];
				printf("Enter the item number: ");
				scanf("%d", &number);
				printf("Enter the item name: ");
				scanf("%s", name);
				printf("Enter the quantity in stock: ");
				scanf("%d", &quantity);
				add_item(number, name, quantity);
				break;
			}
			case 's':{
				int number;
				printf("Enter a number: ");
				scanf("%d", &number);
				search(number);
				break;
			}
			case 'u':{
				int number, quantity;
				printf("Enter an item number and quantity, separated by spaces: \n");
				scanf("%d %d", &number, &quantity);
				update(number, quantity);
				break;
			}
			case 'p':{
				print_database();
				break;
			}
			default:
				break;
		}
	}

	return 0;
}