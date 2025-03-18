#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Loop through rows
    for (int i = 1; i <= n; i++) {
        int num = i % 2;  // Start with 1 for odd rows, 0 for even rows
        
        // Print alternating 1s and 0s
        for (int j = 1; j <= i; j++) {
            printf("%d", num);
            num = 1 - num;  // Toggle between 1 and 0
            
            // Print space except for the last number in the row
            if (j != i) {
                printf(" ");
            }
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}
