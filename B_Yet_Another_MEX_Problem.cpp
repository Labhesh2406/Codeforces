#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> freq(n + 2, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= n) {
            freq[a[i]]++;
        }
    }
    int m = 0;
    while (freq[m] > 0) {
        m++;
    }
    ll ans = m;
    if (ans > k - 1) {
        ans = k - 1;
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}