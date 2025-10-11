#include<stdio.h>

int is_prime(int n) {
    if (n == 1) return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }

    return 1;
}

int reverse(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

int main() {
    int n;
    scanf("%d", &n);

    int k;
    for (int i = 0; i < n; i++) {
        scanf("%d", &k);

        if (is_prime(reverse(k)) && is_prime(k)) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }

    return 0;
}
