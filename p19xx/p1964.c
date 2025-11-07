#include <stdio.h>

#define iter(symbol) for (int symbol = 0; symbol < n; symbol++)

int main() {
    int n;
    scanf("%d", &n);

    int mat[n][n];
    int mat2[n][n];
    int mat_res[n][n];
    iter(i)
        iter(j) {
            scanf("%d", &mat[i][j]);
            mat_res[i][j] = 0;
        }

    iter(i)
        iter(j)
            scanf("%d", &mat2[i][j]);

    iter(i) {
        iter(j) {
            if (j >= i) continue;

            int tmp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = tmp;
        }
    }

    iter(j)
        iter(k)
            iter(i)
                mat_res[j][k] += mat[j][i] * mat2[i][k];

    iter(i) {
        iter(j) {
            printf("%d", mat_res[i][j]);

            if (j != n - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}