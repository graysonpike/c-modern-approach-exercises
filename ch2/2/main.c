#include <stdio.h>
#include <math.h>

// math.h defines pi in decimal format as M_PI
// also we can use pow() from math.h

int main(void){
	float radius = 10.0f;
	// C doesn't have an exponentiation operator, yay
	float volume = 4.0f / 3.0f * M_PI * pow(radius, 3);
	printf("Volume of sphere with radius %f: %f\n", radius, volume);
	return 0;
}