#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    for(ll i = n; i>=1; i--) {
        cout << i << " ";
    }
    cout << n;
    for(ll i = 1; i<n; i++) {
        cout << " " << i;
    }
    cout << endl;
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