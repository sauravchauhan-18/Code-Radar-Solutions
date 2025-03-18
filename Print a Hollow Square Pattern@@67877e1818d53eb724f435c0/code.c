#include <stdio.h>

int main() {
    int n;
    
    // Taking input for side length
    scanf("%d", &n);

    // Looping through rows
    for (int i = 0; i < n; i++) {
        // Looping through columns
        for (int j = 0; j < n; j++) {
            // Print '*' for the border, else print space
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
