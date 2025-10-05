#include <stdio.h>
#define max_t 102

int fib[max_t];

int main() {
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < max_t; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int n;
    while (scanf("%d", &n) != EOF) {
        double sum = 0;
        double sign = 1.0;
        for (int i = 1; i <= n; i++) {
            sum += sign * fib[i + 1] / fib[i];
            sign *= -1.0;
        }
        printf("%.4lf\n", sum);
    }

    return 0;
}
