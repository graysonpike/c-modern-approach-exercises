// Program to print a description for given windspeeds

#include <stdio.h>

int main(void){
	int speed;
	printf("Enter the windspeed (knots): ");
	scanf("%d", &speed);
	printf("Description: ");
	if(speed < 1){
		printf("Calm\n");
	} else if (speed <= 3){
		printf("Light Air\n");
	} else if (speed <= 27){
		printf("Breeze\n");
	} else if (speed <= 47){
		printf("Gale\n");
	} else if (speed <= 63){
		printf("Storm\n");
	} else if (speed > 63){
		printf("Hurricane\n");
	}
	return 0;
}