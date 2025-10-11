#include<stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int v = 1;
        int major;
        int e;
        scanf("%d", &major);
        for (int i = 1; i < n; i++) {
            scanf("%d", &e);
            if (e == major) {
                v++;
            } else {
                v--;
            }
            if (v <= 0) {
                major = e;
                v = 1;
            }
        }
        printf("%d\n", major);
    }

    return 0;
}
