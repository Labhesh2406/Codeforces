#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    ll non_zero = 0;
    for(int i =0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
        if(a[i] != 0) non_zero++;
    }
    ll ans = min(non_zero, sum-n+1);
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}