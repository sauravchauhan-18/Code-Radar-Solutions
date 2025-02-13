#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    int msb = 1 << 31;
    
    if (num & msb)
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}
