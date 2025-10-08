#include <stdio.h>
#include <string.h>

#define max_year 2018
#define min_year 1947
#define max_city_len 22
#define max_year_len 5

int simple_getline(char l[]) {
    int i = 0;
    while (1) {
        char c = getchar();
        if (c == '\n' || c == EOF) break;
        l[i++] = c;
    }
    l[i] = '\0';
    return i;
}

void strsub(char s[], char sub[], int m, int n) {
    int j = 0;
    for (int i = m; i <= n && s[i] != '\0'; i++, j++) {
        sub[j] = s[i];
    }
    sub[j] = '\0';
}

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    char t[max_year][max_city_len];
    for (int i = min_year; i < max_year; i++) {
        t[i][0] = '\0';
    }

    for (int i = 0; i < n; i++) {
        char line[max_city_len + max_year_len];
        int l = simple_getline(line);

        int idx_space = -1;
        for (int j = l - 1; j >= 0; j--) {
            if (line[j] == ' ') {
                idx_space = j;
                break;
            }
        }

        if (idx_space == -1) continue;

        char city[max_city_len] = "";
        char year[max_year_len] = "";

        strsub(line, city, 0, idx_space - 1);
        strsub(line, year, idx_space + 1, l - 1);

        int y;
        if (sscanf(year, "%d", &y) == 1) {
            if (y >= min_year && y < max_year) {
                strcpy(t[y], city);
                t[y][max_city_len - 1] = '\0';
            }
        }
    }

    for (int i = min_year; i < max_year; i++) {
        if (t[i][0] != '\0') printf("%d %s\n", i, t[i]);
    }

    return 0;
}
