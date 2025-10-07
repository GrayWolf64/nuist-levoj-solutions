#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int score;
        int min = -1, max = -1;
        int sum = 0;
        int n = 0;
        while (1) {
            scanf("%d", &score);
            if (score == -1) break;

            ++n;
            sum += score;
            if (min == -1 || score < min) {
                min = score;
            }
            if (max == -1 || score > max) {
                max = score;
            }
        }
        printf("%d\n%d\n%d\n%.1f\n", n, max, min, 1.0 * sum / n);
    }

    return 0;
}
