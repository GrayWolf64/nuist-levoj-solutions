#include <stdio.h>
#include <string.h>
#include <math.h>

#define max_stus 1000
#define max_len_name 8

char names[max_stus][max_len_name + 1];
int scores1[max_stus];
int scores2[max_stus];
int scores3[max_stus];
int sums[max_stus];

int main() {
    int n;
    scanf("%d %d", &n);

    int curpos = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", names[i], &scores1[i], &scores2[i], &scores3[i]);

        sums[i] = scores1[i] + scores2[i] + scores3[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i > j) continue;

            if (abs(sums[i] - sums[j]) <= 10 &&
                abs(scores1[i] - scores1[j]) <= 5 &&
                abs(scores2[i] - scores2[j]) <= 5 &&
                abs(scores3[i] - scores3[j]) <= 5
            ) {
                printf("%s %s\n", names[i], names[j]);
            }
        }
    }

    return 0;
}