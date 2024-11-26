// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.
#include <stdio.h>

//prototype function
void checkEvenOdd(int number);

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Calling the function
    checkEvenOdd(number);

    return 0;
}

// Function definition
void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
}
