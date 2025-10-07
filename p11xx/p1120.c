#include <stdio.h>
#include <string.h>

// NOTE: This is identical to that of P1004
void str_num_add(char a[], char b[]) {
    int len_a = strlen(a), len_b = strlen(b);
    int len_max = (len_a > len_b) ? len_a : len_b;
    int digits[len_max + 1];

    for (int i = 0; i < len_max + 1; i++) digits[i] = 0;

    int prev_carry = 0;
    for (int i = len_a - 1, j = len_b - 1, k = 1; k <= len_max + 1; i--, j--, k++) {
        int d_a = (i >= 0) ? a[i] - '0' : 0;
        int d_b = (j >= 0) ? b[j] - '0' : 0;

        int d_sum = d_a + d_b + prev_carry;

        if (d_sum > 9) {
            digits[len_max + 1 - k] = d_sum - 10;
            prev_carry = 1;
        } else {
            digits[len_max + 1 - k] = d_sum;
            prev_carry = 0;
        }
    }

    int start = (digits[0] == 0) ? 1 : 0;
    for (int i = start; i < len_max + 1; ++i) {
        printf("%d", digits[i]);
    }
    printf("\n");
}

int main() {
    char a[202], b[202];
    scanf("%s", a);
    scanf("%s", b);
    str_num_add(a, b);

    return 0;
}
