#include <stdio.h>

void selection_sort_asc(int arr[], const int size) {
    for (int i = 0; i < size; i++) {
        int k_min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[k_min]) {
                k_min = j;
            }
        }
        const int temp = arr[i];
        arr[i] = arr[k_min];
        arr[k_min] = temp;
    }
}

int main() {
    int m, n;
    scanf("%d\n%d", &m, &n);

    int arr[m + n];
    for (int i = 0; i < m + n; i++) {
        scanf("%d", &arr[i]);
    }

    selection_sort_asc(arr, m + n);

    for (int i = 0; i < m + n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
