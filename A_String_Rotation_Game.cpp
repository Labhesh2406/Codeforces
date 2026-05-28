#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    // int ans = 0;
    // bool block = false;
    // for(int i = 0; i<n; i++) {
    //     if (s[i] != s[(i+1) % n]) ans++;
    //     if (s[i] == s[(i+1) % n]) block = true;
    // }
    // cout << max(1, ans + (block ? 1 : 0)) << endl;
    ll ans = 1 + (int)(s.front() != s.back());
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i-1]) ans++;
    }
    ans = min(ans, n);
    cout << ans << endl;
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