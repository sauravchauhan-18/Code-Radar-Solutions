#include <stdio.h>

int main() {
    char op; int a, b;
    
    scanf(" %c", &op);
   
    scanf("%d %d", &a, &b);

    if (op == '+') printf("Result: %d\n", a + b);
    else if (op == '-') printf("Result: %d\n", a - b);
    else if (op == '*') printf("Result: %d\n", a * b);
    else if (op == '/' && b != 0) printf("Result: %d\n", a / b);
    else printf("Invalid input!\n");

    return 0;
}
