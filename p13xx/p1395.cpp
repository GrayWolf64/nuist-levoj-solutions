#include <bits/stdc++.h>

#define max_len 9

using namespace std;

bitset <max_len> vis;

string out;

void dfs(int depth, int n) {
    if (depth == n) {
        printf("%s\n", out.c_str());
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            vis[i] = 1;
            out.push_back('0' + i);
            dfs(depth + 1, n);
            out.pop_back();
            vis[i] = 0;
        }
    }
}

// NOTE: This is very similar to P1153
int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        vis.reset();
        out.clear();

        dfs(0, n);
    }

    return 0;
}