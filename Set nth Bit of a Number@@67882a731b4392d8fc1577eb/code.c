#include <stdio.h>

int main() {
    unsigned int number, position;

    // Input the number and the bit position
    
    scanf("%u", &number);
    
    scanf("%u", &position);

    // Set the nth bit using the bitwise OR operator
    unsigned int updated_number = number | (1 << position);

    // Output the updated number
    printf("%u: %u\n", position, updated_number);

    return 0;
}
