// PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT
#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; 

    
    while (num != 0) {
        remainder = num % 10;        
        reversedNum = reversedNum * 10 + remainder; 
        num /= 10;                    

    
    if (reversedNum == originalNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
