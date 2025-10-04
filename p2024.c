#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);

    int arr[k];
    for (int i = 0; i < k; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < k; i++) {
        int k_max = i;
        for (int j = i + 1; j < k; j++) {
            if (arr[j] > arr[k_max]) {
                k_max = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[k_max];
        arr[k_max] = temp;
    }

    for (int i = 0; i < k; i++) {
        if (arr[i] >= 70) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
