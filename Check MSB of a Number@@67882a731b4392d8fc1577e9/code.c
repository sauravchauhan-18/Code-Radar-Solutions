#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num & 1)
        printf(" Not Set\n");
    else
        printf("Set\n");

    return 0;
}
