//. PROGRAM TO PRINT 2,4,6,8,10,12………N. 
#include <stdio.h>

int main() {
    int N;

    printf("Enter the maximum value N: ");
    scanf("%d", &N);

    if (N < 2) {
        printf("N should be at least 2.\n");
        return 1;
    }

    printf("Series of even numbers up to %d:\n", N);

    for (int i = 2; i <= N; i += 2) {
        printf("%d ", i);
    }

    printf("\n"); 
    return 0;
}
