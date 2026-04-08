#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    ll sum = 0;
    for(int i = 0; i<n; i++) { cin >> a[i]; sum += a[i]; }
    if(sum % 2 == 1 || (n * k) % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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