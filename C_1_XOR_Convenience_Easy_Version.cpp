#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    vector<ll> p(n + 1);
    if (n == 1) {
        cout << 1 << '\n';
        return;
    }
    if (n == 2) {
        cout << "2 1\n";
        return;
    }
    p[n] = 1;
    for (ll i = 2; i <= n - 1; i++) {
        p[i] = (i ^ 1);
    }
    p[1] = (n % 2 == 0 ? n : n - 1);

    for (ll i = 1; i <= n; i++) {
        cout << p[i];
        if (i < n) cout << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
