#include <bits/stdc++.h>

#define max_len 11

using namespace std;

string str;
string ret;
bitset <max_len> vis;

// ALGO: Depth-first Search
void dfs(int depth, int n) {
    if (depth == n) {
        printf("%s\n", ret.c_str());
        return;
    }

    for (int i = 0; i < n; i++) {
        if (vis[i] == 0) {
            vis[i] = 1;
            ret.push_back(str[i]);
            dfs(depth + 1, n);
            ret.pop_back();
            vis[i] = 0;
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        str.clear();
        ret.clear();
        vis.reset();

        cin >> str;
        sort(str.begin(), str.end());

        dfs(0, str.length());

        printf("\n");
    }

    return 0;
}