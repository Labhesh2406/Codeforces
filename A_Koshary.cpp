#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll x, y; cin >> x >> y;
    if(x % 2 != 0 && y % 2 != 0) cout << "NO" << endl;
    else cout << "YES" << endl;
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