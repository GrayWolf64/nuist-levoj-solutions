#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int lights[n + 1];
    lights[0] = -1;
    for (int i = 1; i <= n; i++) {
        lights[i] = 0;
    }

    int sign = 1;
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            if (j % i == 0) {
                lights[j] = (lights[j] > 0) ? 0 : 1;
            }
        }
        sign = -sign;
    }

    for (int i = 1; i <= n; i++) {
        if (lights[i] == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}
