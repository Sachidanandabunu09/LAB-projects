// WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI 
// NUBERS.TEST THE FUNCTION FOR N=5,10,AND 15.
#include <stdio.h>


void fibonacci(int n) {

    int a = 0, b = 1, next;


    for (int i = 1; i <= n; i++) {

        printf("%d ", a);

        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {

    printf("First 5 Fibonacci numbers: ");
    fibonacci(5);

    printf("First 10 Fibonacci numbers: ");
    fibonacci(10);

    printf("First 15 Fibonacci numbers: ");
    fibonacci(15);

    return 0;
}
