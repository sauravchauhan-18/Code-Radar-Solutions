#include <stdio.h>

int main() {
    int n;
    
    // Taking input for number of rows
    scanf("%d", &n);

    // Loop through rows
    for (int i = 1; i <= n; i++) {
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d\n", j);
            if (j != i) {  // Avoid trailing space at the end of the row
                printf(" ");
            }
        }
        printf("\n");  // New line after each row
    }

    return 0;
}
