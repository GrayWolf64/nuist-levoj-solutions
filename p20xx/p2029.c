#include <stdio.h>
#include <stdlib.h>

struct stu {
    int id;
    int num_passed;
};

int cmp(const void* a, const void* b) {
    if (((struct stu*)b)->num_passed - ((struct stu*)a)->num_passed != 0) {
        return ((struct stu*)b)->num_passed - ((struct stu*)a)->num_passed;
    } else {
        return ((struct stu*)a)->id - ((struct stu*)b)->id;
    }
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    struct stu stus[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &stus[i].id, &stus[i].num_passed);
    }

    qsort(stus, n, sizeof stus[0], cmp);

    int stu_idx = 0;
    int found_beginning = 0;
    for (int i = m; i >= 0; i--) {
        if (found_beginning == 0 && stus[stu_idx].num_passed < i) {
            printf("%d\n", i);
            continue;
        }

        found_beginning = 1;
        printf("%d", i);

        while (stus[stu_idx].num_passed == i) {
            if (stu_idx > n - 1) break;

            printf(" %d", stus[stu_idx].id);
            stu_idx++;
        }

        printf("\n");
    }

    return 0;
}