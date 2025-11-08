#include <stdio.h>

struct stu {
    char id[17];
    int n1;
    int n2;
};

int main() {
    int n;
    scanf("%d", &n);

    struct stu stus[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", &stus[i].id, &stus[i].n1, &stus[i].n2);
    }

    int nq;
    scanf("%d", &nq);

    int k;
    for (int i = 0; i < nq; i++) {
        scanf("%d", &k);

        for (int j = 0; j < n; j++) {
            if (stus[j].n1 == k) {
                printf("%s %d\n", stus[j].id,  stus[j].n2);
                break;
            }
        }
    }

    return 0;
}