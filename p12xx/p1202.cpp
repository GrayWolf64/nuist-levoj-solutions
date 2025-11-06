#include <bits/stdc++.h>

using namespace std;

int main() {
    string str, substr;
    cin >> str >> substr;

    int max_i = 0;
    for (int i = 0; i < str.length(); i++) {
        if (static_cast<int> (str[i]) > str[max_i]) {
            max_i = i;
        } 
    }

    for (int i = 0; i < substr.length(); i++) {
        str.insert(max_i + 1, 1, substr[i]);
        ++max_i;
    }

    cout << str << endl;

    return 0;
}