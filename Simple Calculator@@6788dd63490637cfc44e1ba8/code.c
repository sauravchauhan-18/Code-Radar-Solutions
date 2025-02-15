#include <stdio.h>

int main() {
    char op; double a, b;
    
    scanf(" %c", &op);
   
    scanf("%lf %lf", &a, &b);

    if (op == '+') printf("%.2lf\n", a + b);
    else if (op == '-') printf("%.2lf\n", a - b);
    else if (op == '*') printf("%.2lf\n", a * b);
    else if (op == '/' && b != 0) printf("%.2lf\n", a / b);
    else printf("Invalid input!\n");

    return 0;
}
