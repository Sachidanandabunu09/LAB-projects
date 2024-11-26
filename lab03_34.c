//PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…) 
#include <stdio.h>

int main() {
    int n; 
    int a = 0, b = 1, next;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    printf("Fibonacci series:\n");

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", a);
        } else if (i == 1) {
            printf("%d ", b); 
        } else {
            next = a + b; 
            printf("%d ", next); 
            a = b; 
            b = next; 
        }
    }

    printf("\n"); 
    return 0;
}
