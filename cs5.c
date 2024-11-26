#include <stdio.h>

int isFibo(int N) {
    if (N == 0 || N == 1) {
        return 1; // 0 and 1 are Fibonacci numbers
    }
    int a = 0, b = 1;
    while (b < N) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b == N;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        if (isFibo(N)) {
            printf("IsFibo\n");
        } else {
            printf("IsNotFibo\n");
        }
    }
    return 0;
}
