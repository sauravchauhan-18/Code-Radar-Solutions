#include <stdio.h>

int countTrailingZeros(int num) {
    if (num == 0) return 32; // Special case: all bits are zero

    int count = 0;
    while ((num & 1) == 0) { // Check LSB
        count++;
        num >>= 1; // Right shift to check the next bit
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", countTrailingZeros(num));
    return 0;
}
