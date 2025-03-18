#include <stdio.h>

int main() {
    int num, n;

    // Taking input
    scanf("%d %d", &num, &n);

    // Clearing the nth bit
    num = num & ~(1 << n);

    // Printing the result
    printf("%d\n", num);

    return 0;
}
