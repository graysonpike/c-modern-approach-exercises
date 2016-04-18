// Program to print the largest and smallest word from an entered list

#include <stdio.h>
#include <string.h>

char *get_input() {
    int i = 0;
    char c, input[20];
    while(i < 20 && (c = getchar()) != '\n') {
        input[i] = c;
        i += 1;
    }
    return input;
} 

int main() {
    char smallest[20], largest[20], temp[20];
    strcpy(temp, get_input());
    strcpy(smallest, temp);
    strcpy(largest, temp);
    int small_len = strlen(temp), large_len = strlen(temp);
    
    while(strlen(strcpy(temp, get_input()) > 0)) {
        if(strlen(temp) < small_len) {
            strcpy(smallest, temp);
            small_len = strlen(temp);
        }
        if(strlen(temp) > large_len) {
            strcpy(largest, temp);
            large_len = strlen(temp);
        }
    }

    printf("Largest: %s\n", largest);
    printf("Smallest: %s\n", smallest);

    return 0;
}
