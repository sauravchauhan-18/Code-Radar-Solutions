#include <stdio.h>

void fibonacci_series(int N) {
    int a = 0, b = 1, c;
    
    for (int i = 0; i < N; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int N;
    scanf("%d", &N);
    fibonacci_series(N);
    return 0;
}
