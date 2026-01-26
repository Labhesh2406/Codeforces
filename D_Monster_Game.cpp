#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    vector<ll> pref(n + 1, 0);
    for (ll i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + b[i - 1];
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        if (i > 0 && a[i] == a[i - 1]) continue;
        ll x = a[i];
        ll strikes = n - i;
        ll k = upper_bound(pref.begin(), pref.end(), strikes) - pref.begin() - 1;
        ans = max(ans, x * k);
    }
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