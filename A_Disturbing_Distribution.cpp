#include <bits/stdc++.h>
using ll = long long;
const ll mod = 676767677;
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n + 1);
    for(int i = 1; i<= n; i++) cin >> a[i];
    ll ans = 0;
    if(a[n] == 1) ans++;
    for(int i = 1; i <= n ; i++) {
        if(a[i] == 1) continue;
        ans += a[i];
    }
    cout << ans % mod << endl;
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