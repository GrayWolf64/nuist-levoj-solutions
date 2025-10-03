#include <stdio.h>
#define max_len 100

int main() {
    int k;
    char str[max_len];
    for (int i = 0; i < max_len; i++) str[i] = '\0';

    scanf("%d", &k);
    scanf("%s", str);

    for (int i = k; str[i] != '\0'; i++) printf("%c", str[i]);

    for (int i = 0; i < k; i++) printf("%c", str[i]);

    printf("\n");

    return 0;
}
