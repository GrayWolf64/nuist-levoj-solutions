#include <stdio.h>
#include <stdlib.h>

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

int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);

        if (!(is_prime(reverse(nums[i])) && is_prime(nums[i]))) {
            nums[i] = -1;
        }
    }

    qsort(nums, n, sizeof nums[0], cmp);

    for (int i = 0; i < n; i++) {
        if (nums[i] == -1) continue;

        printf("%d\n", nums[i]);
    }

    return 0;
}