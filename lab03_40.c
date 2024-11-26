// READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A list of number read
#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    printf("Enter numbers (enter a negative number to stop):\n");

    while (1) { 
        scanf("%d", &number);

        if (number < 0) {
            break;
        }

        sum += number; 
    }

    printf("Sum of the entered numbers: %d\n", sum);

    return 0;
}
