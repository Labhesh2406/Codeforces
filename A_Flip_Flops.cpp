#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n, c, k; cin >> n >> c >> k;
    vector<ll> a(n); for (ll &x : a) cin >> x;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (a[i] <= c) {
            ll extra = min(k, c - a[i]);
            k -= extra;
            c += (a[i] + extra);
        } else {
            break;
        }
    }
    cout << c << endl;
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