#include <stdio.h>

void fibonacciSeries(int N) {
    int a = 0, b = 1, c;
    
    for (int i = 0; i < N; i++) {
        printf("%d", a);
        if (i < N - 1) printf(" "); // Print space except after the last number
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");  // New line at the end
}
