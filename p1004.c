#include <stdio.h>

int strlen(char str[]) {
    int len = 0;
    for (; str[len] != '\0'; ++len) {};
    return len;
}

void str_num_add(char a[], char b[]) {
    int len_a = strlen(a), len_b = strlen(b);
    int len_max = (len_a > len_b) ? len_a : len_b;
    int digits[len_max + 1];

    for (int i = 0; i < len_max + 1; i++) {
        digits[i] = 0;
    }

    unsigned short prev_carry = 0;
    for (int i = len_a - 1, j = len_b - 1, k = 1; ;--i, --j, ++k) {
        if (k > len_max + 1) break;
        int d_a = (i >= 0) ? a[i] - '0' : 0;
        int d_b = (j >= 0) ? b[j] - '0': 0;

        int d_sum = d_a + d_b + prev_carry;
        int digit = 0;

        if (d_sum > 9) {
            digit = d_sum - 10;
            prev_carry = 1;
        } else {
            digit = d_sum;
            prev_carry = 0;
        }

        digits[len_max - k + 1] = digit;
    }

    for (int i = 0; i < len_max + 1; ++i) {
        if (!(i == 0 && len_max > 1 && digits[i] == 0)) {
            printf("%d", digits[i]);
        }
    }
}

int main() {
    char a[41], b[41];
    scanf("%s", a);
    scanf("%s", b);
    str_num_add(a, b);

    return 0;
}
