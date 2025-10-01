#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int m, n;
        scanf("%d\n", &m);
        scanf("%d\n", &n);

        int damage[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &damage[j]);
        }

        int dmg[n];
        dmg[0] = damage[0];
        dmg[1] = min(damage[0] + damage[1], damage[1]);
        
        for (int j = 2; j < n; j++) {
            dmg[j] = damage[j] + min(dmg[j - 1], dmg[j - 2]);
        }

        int h = m - dmg[n - 1];
        if (h >= 0) {
            printf("%d\n", h);
        } else {
            printf("Can't get the top!\n");
        }
    }

    return 0;
}
