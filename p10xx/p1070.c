#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = k; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    for (int i = 0; i < k; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
