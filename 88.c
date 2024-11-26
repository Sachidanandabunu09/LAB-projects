#include <stdio.h>

int main()
{
    int N;
    
    printf("Enter the Array Size: ");
    scanf("%d", &N);

    int A[N];
    int B[N];

    for (int i = 0; i < N; i++)
    {
        printf("Enter A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    int *P = A;

    for (int i = 0; i < N; i++)
    {
        B[i] = *(P + i);
    }

    printf("Array A: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Array B: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}

