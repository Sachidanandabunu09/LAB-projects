//READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28) 
#include <stdio.h>

int main() {
    int N;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Factors of %d are:\n", N);

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) { 
            printf("%d ", i);
        }
    }

    printf("\n"); 
    return 0;
}
