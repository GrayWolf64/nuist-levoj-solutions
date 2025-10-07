#include <stdio.h>
#include <string.h>

void strrev_mn(char str[], int m, int n) {
    if (n <= m) return;

    for (int i = m; i < m + (n - m + 1) / 2; ++i) {
        int k = m + n - i;
        char temp = str[i];
        str[i] = str[k];
        str[k] = temp;
    }
}

int main() {
    int n;
    scanf("%d\n", &n);

    for (int i = 0; i < n; ++i) {
        char str[501];
        scanf("%500s\n", str);

        char s, e;
        scanf("%c %c\n", &s, &e);

        int start = -1, end = -1;
        int len = strlen(str);

        for (int j = 0; j < len; j++) {
            if (start != -1 && end != -1) break;

            if (str[j] == s) {
                start = j;
            } else if (str[j] == e) {
                end = j;
            }
        }

        strrev_mn(str, start, end);

        printf("%s\n", str);
    }

    return 0;
}
