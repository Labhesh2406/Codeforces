#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n); for(int i = 0; i<n ;i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<ll>());
    for (int i = 0; i + 1 < n; i++) {
        if (a[i] == a[i+1]) { cout << -1 << "\n"; return; }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " \n"[i==n-1];
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