// Program to implement an integer linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

struct node *add_node(int value, struct node *first){
	struct node *temp = malloc(sizeof(struct node));
	temp->value = value;
	temp->next = first;
	return temp;
}

void print_list(struct node *first){
	struct node *current = first;
	do{
		printf("%d\n", current->value);
		current = current->next;
	} while (current != NULL);
}

int main() {
	
	// Create a pointer to struct node to hold the first node of our list
	struct node *first = NULL;
	// Allocate enough memory at this pointer for a node struct
	first = malloc(sizeof(struct node));
	// Initialize the node with a null pointer for an address and a value to hold
	first->next = NULL;
	first->value = 1;
	// Begin adding values
	first = add_node(2, first);
	first = add_node(3, first);
	
	print_list(first);
	
	return 0;
	
}