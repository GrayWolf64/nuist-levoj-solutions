#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if (x == 1) {
        printf("-1\n");
        return 0;
    }

    if (x % 2 == 0) {
        for (int i = 0; i <= x; i++) {
            if (i % 2 == 0) printf("1");
            else printf("2");
            if (i != x) printf(" ");
        }
    } else {
        printf("1 2 3 1");
      
        int rem = x - 3;
        for (int i = 0; i < rem; i++) {
            if (i % 2 == 0) printf(" 2");
            else printf(" 1");
        }
    }
    printf("\n");

    return 0;
}
