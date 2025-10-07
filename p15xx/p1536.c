#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        int x = 0;
        for (int i = 1; ; i += 2) {
            a -= i; ++x;
            if (a < 0) break;
        }
        int y = 0;
        for (int i = 2; ; i += 2) {
            b -= i; ++y;
            if (b < 0) break;
        }

        printf("%c\n", (x > y) ? 'B' : 'A');
    }
    
    return 0;
}
