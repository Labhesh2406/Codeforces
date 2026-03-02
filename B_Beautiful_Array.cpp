#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n, k, b, s; cin >> n >> k >> b >> s;
    ll min_s = k * b;
    ll max_s = k * b + (k - 1) * n;
    if(s < min_s || s > max_s) {
        cout << -1 << "\n";
        return;
    }
    else {
        vector<ll> a(n, 0);
        a[0] = min_s;
        s -= min_s;
        for(int i = 0; i<n; i++) {
            ll add = min(k - 1, s);
            a[i] += add;
            s -= add;
        }
        for(int i = 0; i<n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
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