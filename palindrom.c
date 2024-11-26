#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber, remainder;
    reversedNumber = 0;

 
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number; 

    while (number != 0) {
        remainder = number % 10; 
        reversedNumber = reversedNumber * 10 + remainder; 
        number /= 10; }
        printf("%d",&number);
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }
    
    return 0;

}