#include <stdio.h>
#include <string.h>

struct rec
{
    int e1, e2, e3, e4;
    int area;
} input[1000], output[1000];

int fun(struct rec a[],struct rec b[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i].e1 == a[i].e2 &&
            a[i].e2 == a[i].e3 &&
            a[i].e3 == a[i].e4) {
            b[cnt++].area = a[i].e1 * a[i].e1;
        }
    }

    for (int i = cnt - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (b[j + 1].area < b[j].area) {
                int tmp = b[j].area;
                b[j].area = b[j + 1].area;
                b[j + 1].area = tmp;
            }
        }
    }

    return cnt;
}

int main()
{
    int N, i, num;
    scanf("%d", &N);

    for(i = 0; i < N; i++)
        scanf("%d%d%d%d", &input[i].e1, &input[i].e2, &input[i].e3, &input[i].e4);

    num = fun(input, output, N);

    for(i = 0; i < num; i++)
        printf("%d\n", output[i].area);

    return 0;
}