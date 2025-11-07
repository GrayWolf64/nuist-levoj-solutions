#include <stdio.h>
#include <string.h>

char strpool[2000000];
int startpos[20000];
char str[20000];

int main() {
    int n, nop;
    scanf("%d %d", &n, &nop);

    int curpos = 0;
    for (int i = 0; i < n; i++) {
        memset(str, '\0', 20000);
        scanf("%s", str);
        int len = strlen(str);
        
        startpos[i] = curpos;
        
        for (int j = 0; j < len; j++) {
            strpool[curpos + j] = str[j];
        }
        strpool[curpos + len] = '\0';
        
        curpos += (len + 1);
    }

    while (nop--) {
        int l, r;
        scanf("%d %d", &l, &r);
        --l, --r;

        int tmp = startpos[l];
        startpos[l] = startpos[r];
        startpos[r] = tmp;
    }

    for (int i = 0; i < n; i++) {
        printf("%s\n", &strpool[startpos[i]]);
    }

    return 0;
}