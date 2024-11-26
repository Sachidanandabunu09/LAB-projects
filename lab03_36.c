//PROGRAM TO PRINT 1,3,5,7,9………N. 
#include <stdio.h>

int main() {
    int N;

 
    printf("Enter the maximum value N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("N should be a positive integer.\n");
        return 1; 
    }

    printf("Series of odd numbers up to %d:\n", N);

    
    for (int i = 1; i <= N; i += 2) {
        printf("%d ", i);
    }

    printf("\n"); 
    return 0;
}
