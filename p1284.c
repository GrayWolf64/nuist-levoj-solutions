#include <stdio.h>

const char s[16] = "-----.....-----";

int main() {
    char code;
    char codes[64];
    int n;

    while (1) {
        n = 0;

        while (scanf("%c", &code) == 1) {
            if (code == '\n') break;
            codes[n++] = code;
        }

        if (n == 0) break;

        printf("-");
        for (int k = 0; k < n; k++) {
            int i = codes[k] - '0';
            for (int j = 9 - i; j < 9 - i + 5; ++j) {
                printf("%c", s[j]);
            }
            if (k != n - 1) printf("-");
        }
        printf("-\n");
    }

    return 0;
}
