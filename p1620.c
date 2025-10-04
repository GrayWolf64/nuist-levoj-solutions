#include <stdio.h>

int exists_neg(int n, int arr[], int s) {
    for (int i = 0; i < s; i++) {
        if (arr[i] == -n) return 1;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (exists_neg(arr[i], arr, n)) ++count;
    }
    count /= 2;

    printf("%d", count);

    return 0;
}
