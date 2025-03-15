#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for(int i = N; i >= 1; i--) {  // Loop for rows
        for(int j = i; j >= 1; j--) {  // Print numbers from i down to 1
            printf("%d ", j);
        }
        printf("\n");  // Corrected newline character
    }

    return 0;
}
