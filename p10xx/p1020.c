#include <stdio.h>
#define max_word_len 16

int strlen(char str[]) {
    int len = 0;
    for (; str[len] != '\0'; ++len) {};
    return len;
}

void clear(char str[]) {
    for (int i = 0; i < max_word_len; i++) str[i] ='\0';
}

void simple_strcpy(char dest[], char src[]) {
    clear(dest);
    const int len = strlen(src);

    for (int i = 0; i < len; i++) {
        dest[i] = src[i];
    }
}

int main() {
    char str_in[max_word_len];
    char str_out_min[max_word_len];
    char str_out_max[max_word_len];

    clear(str_in);
    clear(str_out_min);
    clear(str_out_max);

    int min_len = 0;
    int max_len = 0;
    while (scanf("%15s", str_in) != EOF) {
        int len = strlen(str_in);
        if (min_len == 0 || min_len > len) {
            simple_strcpy(str_out_min, str_in);
            min_len = len;
        }
        if (max_len == 0 || max_len < len) {
            simple_strcpy(str_out_max, str_in);
            max_len = len;
        }
    }

    printf("%s\n%s\n", str_out_max, str_out_min);

    return 0;
}
