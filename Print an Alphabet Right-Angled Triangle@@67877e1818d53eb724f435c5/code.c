#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Loop through rows
    for (int i = 1; i <= n; i++) {
        char ch = 'A';  // Start from 'A'
        
        // Print characters from 'A' up to the row number
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;  // Move to next character

            // Print space except for the last character in the row
            if (j != i) {
                printf(" ");
            }
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}
