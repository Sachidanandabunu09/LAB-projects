#include <stdio.h>
#include <math.h>

int counting_digits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}


int ArmstrongNumber(int number) {
    int originalNumber = number;
    int numDigits = counting_digits(number);
    int sum = 0;
    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }
    return (sum == originalNumber);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (ArmstrongNumber(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}