#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2, result;
    char operator;

    // Input two integers and an operator
    
    scanf("%d %d %c", &num1, &num2, &operator);

    // Perform calculation based on operator
    switch (operator) {
        case '+': // Addition
            result = num1 + num2;
            printf("%d\n", result);
            break;

        case '-': // Subtraction
            result = num1 - num2;
            printf("%d\n", result);
            break;

        case '*': // Multiplication
            result = num1 * num2;
            printf("%d\n", result);
            break;

        case '/': // Division
            if (num2 != 0) { // Ensure divisor is not zero
                result = num1 / num2;
                printf("%d\n", result);
            } else {
                printf("error\n");
            }
            break;

        default: // Invalid operator
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
