#include <stdio.h>

void decimalToBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int binary[32]; // Array to store binary digits
    int i = 0;

    while (num > 0) {
        binary[i] = num & 1; // Extract the last bit
        num >>= 1;           // Right shift number
        i++;
    }

    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    decimalToBinary(num);
    printf("\n");
    return 0;
}
