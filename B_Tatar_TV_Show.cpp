#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    string s; cin >> s;

    for(int i = 0; i < n; i++) {
        if(i + k >= n) break;
        if(s[i] == '1') {
            s[i] = '0';
            if(s[i + k] == '0') s[i + k] = '1';
            else s[i + k] = '0';
        }
    }
    bool ans = true;
    for(char c : s) {
        if(c == '1') ans = false;
    }
    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}