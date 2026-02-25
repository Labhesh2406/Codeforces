#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll x, y; cin >> x >> y;
    if( x < 2*y ) { cout << "NO\n"; return; }
    if(( x - 2*y ) % 3 != 0) { cout << "NO\n"; return; }
    ll k = ( x - 2*y ) / 3;
    if( k < -2*y ) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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