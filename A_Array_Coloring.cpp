#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != (i+1) % 2) {
            cnt++;
        }
    }
    cout << (cnt == 0 || cnt == n ? "YES\n" : "NO\n");
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