#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
            if (j != i) {  
                printf(" "); // Space between numbers
            }
        }
        if (i != n) {  
            printf("\n"); // Avoids extra newline at the end
        }
    }

    return 0;
}
