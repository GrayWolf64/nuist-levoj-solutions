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

    for (int p = 2; p <= n / 2; p++) {
        if (is_prime(p) && is_prime(n - p)) {
            printf("%d+%d\n", p, n - p);
            break;
        };
    }
    
    return 0;
}
