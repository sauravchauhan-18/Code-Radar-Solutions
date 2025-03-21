#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Loop through rows
    for (int i = 1; i <= n; i++) {
        // Print characters in reverse order from i to A
        for (char ch = 'A' + i - 1; ch >= 'A'; ch--) {
            printf("%c ", ch);
            
            // Print space except for the last character in the row
            if (ch != 'A') {
                printf("\n ");
            }
        }
        // printf("\n");  // Move to the next row
    }

    return 0;
}
