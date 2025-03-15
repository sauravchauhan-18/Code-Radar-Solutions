// Fibonacci using recursion

#include <stdio.h>

int fibonacci(int N) {
    if (N == 0) return 0;
    if (N == 1) return 1;
    return fibonacci(N - 1) + fibonacci(N - 2);
}

int main() {
    int N = 5;
    printf("%d", fibonacci(N));
    return 0;
}
