#include <stdio.h>

int main() {
    int n, m, i, j;
    scanf("%d", &n);
    int ranked[n], unique[n], u = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &ranked[i]);
        if (i == 0 || ranked[i] != ranked[i - 1]) unique[u++] = ranked[i];
    }
    scanf("%d", &m);
    for (i = 0, j = u - 1; i < m; i++) {
        int p;
        scanf("%d", &p);
        while (j >= 0 && p >= unique[j]) j--;
        printf("%d\n", j + 2);
    }
}
