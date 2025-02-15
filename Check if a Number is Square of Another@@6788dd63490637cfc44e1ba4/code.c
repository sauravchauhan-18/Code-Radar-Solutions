#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf(a == b * b ? "Yes\n" : "No\n");
    return 0;
}
