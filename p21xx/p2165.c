#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int c = 0;
    int m = -1;
    while (n--) {
        int o;
        scanf("%d", &o);

        if (o >= -100 && o <= 100) {
            ++c;
        } else {
            c = 0;
        }

        if (c > m) {
            m = c;
        }
    }

    printf("%d\n", m);

    return 0;
}