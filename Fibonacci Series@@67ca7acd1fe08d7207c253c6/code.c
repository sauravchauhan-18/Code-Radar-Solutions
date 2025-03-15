#include <stdio.h>

int fibonacci(int N) {
    if (N == 0) return 0;
    if (N == 1) return 1;
    return fibonacci(N - 1) + fibonacci(N - 2);
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {  // Loop to print first N terms
        printf("%d ", fibonacci(i));
    }
    printf("\n");  // New line for better output formatting

    return 0;
}
