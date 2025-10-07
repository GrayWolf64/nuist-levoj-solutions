#include <stdio.h>
#include <string.h>

#define max_len 102

int main() {
    int n;
    scanf("%d", &n);

    // ALGO: Boyer-Moore Algorithm for Majority Element (>n/2)
    char candidate[max_len];
    char current[max_len];

    int count = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%s", current);

        if (count == 0) {
            strcpy(candidate, current);
            count = 1;
        } else if (strcmp(current, candidate) == 0) {
            ++count;
        } else {
            --count;
        }
    }

    printf("%s\n", candidate);

    return 0;
}
