#include <stdio.h>

#define width 255

char grid[width][width];

void put_x(int x, int y, int depth, int scale) {
    if (depth == 1) {
        grid[x][y] = 'X';
        return;
    }
    
    int new_scale = scale * 3;

    put_x(x - scale, y - scale, depth - 1, new_scale);
    put_x(x - scale, y + scale, depth - 1, new_scale);
    put_x(x, y, depth - 1, new_scale);
    put_x(x + scale, y - scale, depth - 1, new_scale);
    put_x(x + scale, y + scale, depth - 1, new_scale);
}

int main() {
    int n;
    scanf("%d", &n);
    
    int size = 1;
    for (int i = 1; i < n; i++) {
        size *= 3;
    }
    
    int center = width / 2;

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < width; j++) {
            grid[i][j] = ' ';
        }
    }

    put_x(center, center, n, 1);

    int half = size / 2;
    for (int i = center - half; i <= center + half; i++) {
        for (int j = center - half; j <= center + half; j++) {
            printf("%c", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}