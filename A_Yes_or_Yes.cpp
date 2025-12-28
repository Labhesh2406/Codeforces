#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int y = 0;
    int n = 0;
    for(char it : s) {
        if(it == 'Y') y++;
        else n++;
    }
    if(y <= 1) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}