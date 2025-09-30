#include <stdio.h>

int main() {
    float a; int b;
    scanf("%f %d", &a, &b);
    printf("%d", (int)(100 * a) + b);

    return 0;
}
