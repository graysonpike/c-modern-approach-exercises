// Program to demo command line args

#include <stdio.h>

int main(int argc, char *argv[]){
	printf("argc = %d", argc);
	printf("Your arguments were:\n");
	for(int i = 1; i < argc; i++){
		printf("%s\n", argv[i]);
	}
	return 0;
}
