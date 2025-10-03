#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int d = 1 * 4 - 1 * 2;
    int d1 = m * 4 - 1 * n;
    int d2 = 1 * n - m * 2;

    int x = d1 / d, y = d2 / d;

    if (d1 < 0 || d2 < 0 || x + y != m || 2 * x + 4 * y != n) {
        printf("-1 -1\n");
    } else {
        printf("%d %d\n", x, y);
    }

    return 0;
}
