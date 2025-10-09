#include <stdio.h>
#include <string.h>

void str_num_mul(char a[], char b[]) {
    int len_a = strlen(a), len_b = strlen(b);
    int res_len = len_a + len_b;
    int res[res_len];
    int lines[len_a][res_len];

    for (int i = 0; i < len_a; i++) {
        for (int j = 0; j < res_len; j++) {
            lines[i][j] = 0;
        }
    }

    for (int i = len_a - 1; i >= 0; i--) {
        int a_i = a[i] - '0';
        int ri = len_a - 1 - i;

        int prev_carry = 0;
        int k = 0;
        for (int j = len_b - 1; j >= 0; j--, k++) {
            int b_j = b[j] - '0';

            int m = a_i * b_j;

            int this_digit = (m + prev_carry) % 10;
            prev_carry = (m + prev_carry) / 10;

            lines[ri][k + ri] = this_digit;
        }

        lines[ri][k + ri] = prev_carry;
    }

    int carry = 0;
    int j = 0;
    for ( ; j < res_len; j++) {
        int sum = 0;
        for (int i = 0; i < len_a; i++) {
            sum += lines[i][j];
        }
        int this_digit = (carry + sum) % 10;
        carry = (carry + sum) / 10;
        res[j] = this_digit;
    }
    res[j] = carry;

    for (int i = res_len - 1; i >= 0; i--) {
        if (i == res_len - 1 && res[i] == 0) continue;
        printf("%d", res[i]);
    }
    printf("\n");
}

int main() {
    char a[200], b[200];
    scanf("%s\n%s", a, b);
    str_num_mul(a, b);

    return 0;
}
