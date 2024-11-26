// WRITE A PROGRAM  TO COPY  ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF 
// SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAy
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
        B[i] = *(P + (N-i-1));
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
