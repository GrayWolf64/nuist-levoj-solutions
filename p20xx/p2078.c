#include <stdio.h>
#include <stdlib.h>

int dmg_cmp(const void *a, const void *b) {
    // NOTE: `(const int *)` can be removed
    const int *arr1 = (const int *) a;
    const int *arr2 = (const int *) b;

    return arr2[1] - arr1[1];
}

int main() {
    int n;
    scanf("%d", &n);

    int weapons[n][2];
    for (int i = 0; i < n; i++) {
        weapons[i][0] = i;
        scanf("%d", &weapons[i][1]);
    }

    qsort(weapons, n, sizeof(weapons[0]), dmg_cmp);

    int predict[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &predict[i]);
    }

    // dmg = -1, stolen
    int total_dmg = 0;
    int steel_n = 0;
    int t = 0;
    while (t != n) {
        for (int i = 0; i < n; i++) {
            if (weapons[i][1] != -1) {
                total_dmg += weapons[i][1];
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            if (weapons[i][0] == predict[steel_n] - 1) {
                weapons[i][1] = -1;
                steel_n++;
                break;
            }
        }
        ++t;
    }
    printf("%d\n", total_dmg);

    return 0;
}
