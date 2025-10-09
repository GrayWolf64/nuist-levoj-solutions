#include <stdio.h>

#define max_a 10

int fact(int n) {
    if (n == 0 || n == 1) return 1;

    int res = 1;
    while (n != 1) {
        res *= n;
        --n;
    }
    return res;
}

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

    int j = 0;
    for (int i = 1; i < max_a + 1; i++) {
        if (stats[i] == 0) continue;
        j++;
    }

    printf("%d\n", fact(j));

    return 0;
}
