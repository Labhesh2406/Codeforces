#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n); for(ll &i : a) { cin >> i; }

    ll p ; cin >> p;
    ll val1 = a[p - 1];
    ll val2 = val1, cnt1 = 0, cnt2 = 0;
    for(int i = 0; i <= p-1; i++) {
        if( a[i] != val1) {
            cnt1++;
            val1 ^= 1;
        }
    }
    for(int i = n-1; i>= p-1; i--) {
        if( a[i] != val2) {
            cnt2++;
            val2 ^= 1;
        }
    }
    cout << max(cnt1, cnt2) << "\n";
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