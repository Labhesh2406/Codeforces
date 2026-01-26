#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) cin >> b[i];

    vector<ll> suffix(n);
    suffix[n-1] = max(a[n-1], b[n-1]);
    for (ll i = n - 2; i >= 0; i--) {
        suffix[i] = max({a[i], b[i], suffix[i+1]});
    }
    vector<ll> prefix(n + 1, 0);
    for (ll i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + suffix[i];
    }
    vector<ll> ans;
    for (ll i = 0; i < q; i++) {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        ll total = prefix[r + 1] - prefix[l];
        ans.push_back(total);
    }
    for (ll i = 0; i < ans.size(); i++) {
        if (i > 0) cout << " ";
        cout << ans[i];
    }
    cout << endl;
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