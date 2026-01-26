#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    vector<ll> sMax(n);
    sMax[n - 1] = a[n - 1];
    for (ll i = n - 2; i >= 0; i--) {
        sMax[i] = max(a[i], sMax[i + 1]);
    }
    for (ll i = 0; i < n; i++) {
        if (sMax[i] > a[i]) {
            ll right = i;
            for (ll j = n - 1; j >= i; j--) {
                if (a[j] == sMax[i]) {
                    right = j;
                    break;
                }
            }
            reverse(a.begin() + i, a.begin() + right + 1);
            break;
        }
    }
    for (ll i = 0; i < n; i++) {
        cout << a[i] << (i + 1 < n ? ' ' : '\n');
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}