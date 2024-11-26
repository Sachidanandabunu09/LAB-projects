#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[100];
    int count = 0;
    char *ptr;

    // Input the string from the user
    printf("Enter your string: ");
    fgets(string, sizeof(string), stdin);  // Read the entire line with spaces

    // Use pointer to iterate through the string
    ptr = string;

    // Traverse the string and count words
    int inWord = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (*(ptr + i) != ' ' && *(ptr + i) != '\0' && inWord == 0) {
            count++;  // Start of a new word
            inWord = 1;  // We are inside a word
        }
        if (*(ptr + i) == ' ') {
            inWord = 0;  // End of the current word
        }
    }

    printf("The total number of words is: %d\n", count);
    
    return 0;
}
