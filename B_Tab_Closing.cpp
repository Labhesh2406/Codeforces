#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll a, b, n; cin >> a >> b >> n;
    if(n <= a/b || b == a) cout << 1 << endl;
    else cout << 2 << endl;
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