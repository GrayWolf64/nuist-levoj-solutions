#include <stdio.h>
#include <string.h>

#define max_num_chars 1000000
#define max_num_str 10000
#define max_len_str 100000

int main() {
    int n, nq;
    scanf("%d %d", &n, &nq);

    char strpool[max_num_chars];
    int endpos[max_num_str];
    
    for (int i = 0; i < max_num_str; i++) {
        strpool[i] = '\0';
        endpos[i] = 0;
    }

    for (int i = max_num_str; i < max_num_chars; i++) {
        strpool[i] = '\0';
    }

    for (int i = 1; i <= n; i++) {
        int len;
        char str[max_len_str + 1];

        scanf("%d", &len);
        scanf("%s", str);

        for (int j = 0; j < len; j++) {
            strpool[endpos[i - 1] + j] = str[j];
        }
        endpos[i] = endpos[i - 1] + len;
    }

    while (nq--) {
        int index;
        scanf("%d", &index);

        for (int j = 0; j < endpos[index] - endpos[index - 1]; j++) {
            printf("%c", strpool[endpos[index - 1] + j]);
        }
        printf("\n");
    }

    return 0;
}