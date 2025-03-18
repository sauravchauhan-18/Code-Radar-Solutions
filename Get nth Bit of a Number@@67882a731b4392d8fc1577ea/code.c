#include <stdio.h>

int main() {
    unsigned int number, position;

    // Input the number and the bit position
   
    scanf("%u", &number);
   
    scanf("%u", &position);

    // Retrieve the nth bit
    unsigned int nth_bit = (number >> position) & 1;

    // Output the result
    printf("%u\n", nth_bit);

    return 0;
}
