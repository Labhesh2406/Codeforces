#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll x, y; cin >> x >> y;
    if(x % y ==0) {
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