// Convert single decimal digit to hex using string literal

#include <stdio.h>

char dec_to_hex(int n){
	return "0123456789ABCDEF"[n];
}

int main(){

	for(int i = 0; i <= 15; i++){
		printf("%d -> %c\n", i, dec_to_hex(i));
	}

	return 0;
}
