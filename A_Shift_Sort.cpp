#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int z = 0;
    for (char c : s) {
        if (c == '0') {
            z++;
        }
    }
    int ans = 0;
    for (int i = 0; i < z; ++i) {
        if (s[i] == '1') {
            ans++;
        }
    }
    cout << ans << '\n';
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