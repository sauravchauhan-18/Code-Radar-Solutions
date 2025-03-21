#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the number of rows

    // Loop from row = N down to row = 1
    for (int i = N; i >= 1; i--) {
        // Print characters from 'A' + (i - 1) down to 'A'
        for (int j = 0; j < i; j++) {
            // 'A' + (i - 1 - j) calculates the character in reverse
            printf("%c", 'A' + (i - 1 - j));
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}

