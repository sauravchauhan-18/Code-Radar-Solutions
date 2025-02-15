#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
   scanf("%c", &ch);

    if (isalpha(ch)) 
        printf("Vowel");
    else if (isdigit(ch)) 
        printf("Digit\n");
    else 
        printf("Special Character\n");

    return 0;
}
