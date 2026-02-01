#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'U') cnt++;
    }
    if(cnt % 2 == 1) cout << "YES" << endl;
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