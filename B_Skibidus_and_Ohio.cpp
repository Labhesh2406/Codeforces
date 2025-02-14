#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    bool adj = false;
    for(size_t i = 0; i < s.size() - 1; i++) {
        if(s[i] == s[i + 1]) {
            adj = true;
            break;
        }
    }
    if(adj) {
        cout << 1 << endl;
    } else {
        cout << s.length() << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}