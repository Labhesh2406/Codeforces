#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    int count_zero = 0; int count_one = 0;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i<n; i++) {
        if(a[i] == 0) count_zero++;
        if(a[i] == 1) count_one++;
    }
    if(count_zero && count_one) {
        cout << "YES\n";
        return;
    }
    if(count_zero == 1 && !count_one) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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