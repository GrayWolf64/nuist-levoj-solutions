#include <stdio.h>

int main() {
    int n, m, q;
    scanf("%d %d %d", &n, &m, &q);

    int points[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            points[i][j] = 0;
        }
    }

    for (int i = 0; i < q; i++) {
        int t, c;
        scanf("%d %d", &t, &c);

        if (t == 0) {
            for (int j = 0; j < m; j++) {
                points[c - 1][j] = 1;
            }
        } else {
            for (int j = 0; j < n; j++) {
                points[j][c - 1] = 1;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (points[i][j] == 0) {
                ++sum;
            }
        }
    }
    printf("%d\n", sum);

    return 0;
}
