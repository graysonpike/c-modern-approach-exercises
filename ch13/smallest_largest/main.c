// Program to print the largest and smallest word from an entered list

#include <stdio.h>
#include <string.h>

void get_input(char *input) {
    int i = 0;
    char c;
    while(i < 19 && (c = getchar()) != '\n') {
        input[i] = c;
        i += 1;
    }
    input[i] = '\0';
} 

int main() {
    
    char smallest[20], largest[20], temp[20];
    get_input(temp);
    strcpy(smallest, temp);
    strcpy(largest, temp);

    int small_len = strlen(temp), large_len = strlen(temp);

    while(strlen(temp) > 0) {
        if(strlen(temp) < small_len) {
            strcpy(smallest, temp);
            small_len = strlen(temp);
        }
        if(strlen(temp) > large_len) {
            strcpy(largest, temp);
            large_len = strlen(temp);
        }
        get_input(temp);
    }

    printf("Largest: %s\n", largest);
    printf("Smallest: %s\n", smallest);

    return 0;
}
