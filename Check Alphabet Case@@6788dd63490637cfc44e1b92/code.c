#include <stdio.h>

int main() {
    char ch;
    
   
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
   
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n", ch);
    } else {
        printf("Not an alphabet\n", ch);
    }
    
    return 0;
}
