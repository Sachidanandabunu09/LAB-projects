 //READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE.
 #include <stdio.h>

int main() {
    int N;
    int isPrime = 1; 

    printf("Enter a number: ");
    scanf("%d", &N);

    if (N <= 1) {
        printf("%d is neither prime nor composite.\n", N);
    } else if (N == 2) {
        printf("%d is a prime number.\n", N);
    } else if (N % 2 == 0) {
        printf("%d is a composite number.\n", N);
    } else {
      
        for (int i = 3; i * i <= N; i += 2) {
            if (N % i == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            printf("%d is a prime number.\n", N);
        } else {
            printf("%d is a composite number.\n", N);
        }
    }

    return 0;
}
