#include <stdio.h>

int is_prime(int n) {
    if (n == 1 || n == 0) return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }

    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        if (is_prime(i) && is_prime(i - 2)) {
            printf("%d %d\n", i - 2, i);
            break;
        }
    }

    return 0;
}
