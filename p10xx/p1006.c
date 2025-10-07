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
    int n, a, b;
    scanf("%d\n", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a * b / gcd(a, b));
    }

    return 0;
}
