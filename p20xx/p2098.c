#include <stdio.h>
#define num_cubes 6

int main() {
    int stats[num_cubes];
    for (int i = 0; i < num_cubes; i++) {
        scanf("%d", &stats[i]);
    }

    int t;
    scanf("%d", &t);

    int map[6][7] = {
        {-1, 0, 0, 0, 0, 0, 0},
        {-1, 0, 0, 0, 0, 0, 0},
        {-1, 0, 0, 0, 0, 0, 0},
        {-1, 0, 0, 0, 0, 0, 0},
        {-1, 0, 0, 0, 0, 0, 0},
        {-1, 0, 0, 0, 0, 0, 0},
    };

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < num_cubes; j++) {
            map[j][stats[j]] = 1;
            for (int k = num_cubes; k > 0; k--) {
                if (map[j][k] == 0) {
                    stats[j] = k;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < num_cubes; i++) {
        printf("%d ", stats[i]);
    }
    printf("\n");

    return 0;
}
