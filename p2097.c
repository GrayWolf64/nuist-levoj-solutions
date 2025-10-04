#include <stdio.h>

int main() {
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);

    int res[n];
    res[0] = a;
    res[1] = b;

    for (int i = 2, j = 2; ; ) {
        if (i >= n) break;

        int t = res[j - 1] * res[j - 2];

        if (t > 9) {
            res[i] = t / 10;
            if (i != n - 1) {
                res[i + 1] = t % 10;
                i += 2;
            } else {
                ++i;
            }
        } else {
            res[i] = t;
            ++i;
        }
        ++j;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");

    return 0;
}
