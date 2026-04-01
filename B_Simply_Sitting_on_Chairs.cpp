#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> mark(n, 0);
    ll cnt = 0, ans = 0;
    for(int i = 1; i<= n; i++) {
        ll x; cin >> x;
        if(x > i) {
            mark[i-1] = -1;
        }
        cnt += mark[i-1];
        ans = max(ans, i + cnt);
    }
    cout << ans << "\n";
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