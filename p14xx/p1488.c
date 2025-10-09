#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {
    int a, b, c;

    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        int x = gcd(a, b);
        int y = gcd(x, c);
        printf("%d\n", y);
    }

    return 0;
}
