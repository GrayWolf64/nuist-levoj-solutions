#include <stdio.h>

#define max_a 10

int main() {
    int n;
    scanf("%d", &n);

    int stats[max_a + 1];
    stats[0] = -1;
    for (int i = 1; i < max_a + 1; i++) {
        stats[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        int this;
        scanf("%d", &this);

        stats[this]++;
    }

    for (int i = 1; i < max_a + 1; i++) {
        if (stats[i] == 0) continue;
        for (int j = 0; j < stats[i]; j++) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
