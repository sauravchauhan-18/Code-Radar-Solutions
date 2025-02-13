#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);

    if (a % b == 0) {
        printf("Yes\n", a,b);
    } else {
        printf("No\n", a,b);
    }

    return 0;
}
