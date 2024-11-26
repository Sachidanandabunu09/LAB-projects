// 38. PROGRAM TO PRINT 1,4,9,16,25,………N. 
#include <stdio.h>

int main() {
    int N;
    int i = 1; 


    printf("Enter the maximum value N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("N should be at least 1.\n");
        return 1;
    }

    printf("Series of squares up to %d:\n", N);


    while (i * i <= N) {
        printf("%d ", i * i);
        i++;
    }

    printf("\n");
    return 0;
}

