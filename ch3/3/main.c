// Program to print the individual identifiers of an ISBN number
// input format is XXX-X-XXX-XXXXX-X

#include <stdio.h>

int main(void){
	int gs1, group_id, pub_code, item_num, check;

	printf("Enter the ISBN Number: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &group_id, &pub_code, &item_num, &check);
	printf("\tISBN Information:\n");
	printf("\tGS1 prefix: %d\n", gs1);
	printf("\tGroup Identifier: %d\n", group_id);
	printf("\tPublisher Code: %d\n", pub_code);
	printf("\tItem Number: %d\n", item_num);
	printf("\tCheck Digit: %d\n", check);
	return 0;
}