#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int score;
        int total = 0;
        int other_scores[20];
        int count = 0;

        for (int j = 0; j < 3; j++) {
            scanf("%d", &score);
            total += score;
        }

        while (1) {
            scanf("%d", &score);
            if (score == -1) break;

            other_scores[count++] = score;
        }

        qsort(other_scores, count, sizeof(int), cmp);

        for (int j = 0; j < 3 && j < count; j++) {
            total += other_scores[j];
        }

        printf("%d\n", total);
    }

    return 0;
}
