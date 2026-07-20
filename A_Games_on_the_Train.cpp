#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> h(n);
    for(int i = 0; i<n; i++) {
        cin >> h[i];
    }
    sort(h.begin(), h.end());
    if(h[0] == h[n-1]) {
        cout << 1 << endl;
    } else cout << (h[n-1] - h[0]) + 1 << endl;
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