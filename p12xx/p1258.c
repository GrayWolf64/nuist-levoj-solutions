#include <stdio.h>

int main() {
    char str[128];
    while (scanf("%s", str) != EOF) {
        int meet_start = 0;
        int i = 0;
        int j = 0;
        char out[128];

        while (str[i] != '\0') {
            if (meet_start == 0) {
                out[j] = str[i];
                j++;
            }
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                if (meet_start == 1) {
                    out[j] = str[i];
                    j++;
                }
                meet_start = 1;
            }
            i++;
        }
        out[j] = '\0';
        printf("%s\n", out);
    }
    return 0;
}
