#include <stdio.h>

int main() {
    int n;
    
    // Taking input for number of rows
    scanf("%d", &n);

    // Loop through rows
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
