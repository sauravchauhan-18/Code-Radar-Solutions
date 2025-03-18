#include <stdio.h>

int countLeadingZeros(int num) {
    if (num == 0) return 32; // All bits are zero

    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if (num & (1 << i))
            break;
        count++;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", countLeadingZeros(num));
    return 0;
}
