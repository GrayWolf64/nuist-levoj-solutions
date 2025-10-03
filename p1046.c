#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int k;
        scanf("%d", &k);

        if (i == (n - 1) / 2) {
            printf("%d\n", k);
            break;
        }
    }

    return 0;
}
