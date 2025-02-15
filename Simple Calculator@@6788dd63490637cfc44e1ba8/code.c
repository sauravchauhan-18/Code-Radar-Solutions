#include <stdio.h>

int main() {
    char op; int a, b;
    
    scanf(" %c", &op);
   
    scanf("%d %d", &a, &b);

    if (op == '+') printf("%d\n", a + b);
    else if (op == '-') printf("%d\n", a - b);
    else if (op == '*') printf("%d\n", a * b);
    else if (op == '/' && b != 0) printf("%d\n", a / b);
    else if (op == '/' && b == 0) printf("error");
 

    return 0;
}
