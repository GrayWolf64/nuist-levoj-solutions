#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int a, b, c, p;
        scanf("%d %d %d %d", &a, &b, &c, &p);

        // axis = -b / 2a, q = 2 * axis - p
        // -b / a - a * p / a
        int m = -b;
        m -= a * p;

        printf("%d %d\n", m, a);
    }

    return 0;
}