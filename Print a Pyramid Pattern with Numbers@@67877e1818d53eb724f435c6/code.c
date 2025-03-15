#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for (int i = 1; i <= N; i++, printf("\n"))
        for (int j = 1; j <= N + i - 1; j++)
            printf(j < N + 1 - i ? " " : "%d");
}
