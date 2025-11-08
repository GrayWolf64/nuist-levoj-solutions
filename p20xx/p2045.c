#include <stdio.h>
#include <string.h>

char str[101];

int main() {
    scanf("%s", str);
    int l = strlen(str);

    int k;
    scanf("%d", &k);

    for (int i = 0; i < l; i++) {
        printf("%c", (i >= k - 1) ? str[k - 1] : str[i]);
    }
    printf("\n");

    for (int i = 0; i < l; i++) {
        printf("%c", (i < k) ? str[k] : str[i]);
    }

    return 0;
}