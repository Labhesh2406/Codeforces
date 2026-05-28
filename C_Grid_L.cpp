#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll p, q; cin >> p >> q;
    ll S = 2LL * p + 4LL * q + 1LL;
    for (ll A = 3; A * A <= S; A += 2) {
        if (S % A == 0) {
            cout << (A - 1) / 2 << " " << (S / A - 1) / 2 << "\n";
            return;
        }
    }
    cout << -1 << "\n";
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