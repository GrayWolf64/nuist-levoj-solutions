#include <stdio.h>

int nrev(int n) {
    int r = 0;

    while (n) {
        r = r * 10 + n % 10;
        n /= 10;
    }

    return r;
}

int main() {
    int n;
    scanf("%d", &n);

    if (nrev(n) == n) {
        printf("yes");
    } else {
        printf("no");
    }

    return 0;
}
