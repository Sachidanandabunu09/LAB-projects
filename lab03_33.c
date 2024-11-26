//PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS.
#include <stdio.h>

int main() {
    int n, i;
    int number;
    int max, min;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The number of elements should be greater than zero.\n");
        return 1; // Exit the program with an error code
    }

    // Input the first number to initialize max and min
    printf("Enter a number: ");
    scanf("%d", &number);
    max = min = number;

    // Process remaining numbers
    for (i = 1; i < n; i++) {
        printf("Enter another number: ");
        scanf("%d", &number);

        // Update max and min
        if (number > max) {
            max = number;
        }
        if (number < min) {
            min = number;
        }
    }

    // Output the results
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}
