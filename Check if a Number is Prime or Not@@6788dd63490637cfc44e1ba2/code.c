#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    if (n < 2) return printf("Not Prime\n"), 0;
    for (i = 2; i * i <= n; i++)
        if (n % i == 0) return printf("Not Prime\n"), 0;
    printf("Prime\n");
    return 0;
}
