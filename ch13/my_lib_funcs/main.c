// My implementation of strlen and srtcat

#include <stdio.h>

int my_strlen(char *test) {
	int len = 0;
	while(*(test + len) != '\0'){
		len += 1;
	}
	return len;
}

// Copy string from source to end of dest
void my_strcat(char *dest, char *src){
	int i = 0;
	int j = my_strlen(dest);
	while(src[i] != '\0'){
		dest[j] = src[i];
		i ++;
		j ++;
	}
}

int main() {
	char part1[50] = "This is ";
	char part2[50] = "a test.";
	my_strcat(part1, part2);
	printf("Combined string: %s\n", part1);
	return 0;
}

