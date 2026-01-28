#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n, x, y; cin >> n >> x >> y;
    string s; cin >> s;
    ll a = 0, b = 0;
    for(ll i = 0; i<n; i++) {
        a += (s[i] == '4');
        b += (s[i] == '8');
    }
    x = abs(x); y = abs(y);
    if(a + 2*b < x + y) cout << "NO" << endl;
    else if(a + b < max(x, y)) cout << "NO" << endl;
    else cout << "YES" << endl;
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