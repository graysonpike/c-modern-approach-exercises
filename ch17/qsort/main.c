// Example of using the qsort stdlib function

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct part {
	int number;
	int quantity;
	char name[40];
};

int compare_parts(const void *p, const void *q) {
	const struct part *p2 = p;
	const struct part *q2 = q;
	if(p2->number > q2->number) {
		return 1;
	} else if(p2->number == q2->number) {
		return 0;
	} else {
		return -1;
	}
}

void print_parts(struct part *first, int n) {
	for(int i = 0; i < n; i++) {
		printf("%d - %s - %d\n", (first + i)->number, (first + i)->name, (first + i)->quantity);
	}
}

int main() {
	
	struct part parts[100];
	
	parts[0].number = 2;
	parts[0].quantity = 5;
	strcpy(parts[0].name, "Potato");
	
	parts[1].number = 1;
	parts[1].quantity = 3;
	strcpy(parts[1].name, "Tomato");
	
	printf("Before sort:\n");
	print_parts(parts, 2);
	
	qsort(parts, (size_t) 2, sizeof(struct part), compare_parts);
	
	printf("After sort:\n");
	print_parts(parts, 2);
	
	return 0;
}