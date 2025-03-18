#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    
    scanf("%d %d", &a, &b);

    // Swapping using XOR operator
    a = a ^ b; // Step 1: a now holds the XOR of a and b
    b = a ^ b; // Step 2: b now holds the original value of a
    a = a ^ b; // Step 3: a now holds the original value of b

    // Output the swapped values
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
