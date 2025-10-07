#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int res[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = 0;
        }
    }

    int r = 0, c = 0;
    int dir = 0;

    for (int i = 1; i <= n * n; i++) {
        res[r][c] = i;

        if (dir == 0) {
            if (c + 1 < n && res[r][c + 1] == 0) {c++;} else {dir = 1; r++;}
        } else if (dir == 1) {
            if (r + 1 < n && res[r + 1][c] == 0) {r++;} else {dir = 2; c--;}
        } else if (dir == 2) {
            if (c - 1 >= 0 && res[r][c - 1] == 0) {c--;} else {dir = 3; r--;}
        } else if (dir == 3) {
            if (r - 1 >= 0 && res[r - 1][c] == 0) {r--;} else {dir = 0; c++;}
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", res[i][j]);
            if (j != n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
