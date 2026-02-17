#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    int x, y, a;
    cin >> x >> y >> a;
    a %= (x + y);
    cout << (a < x ? "NO\n" : "YES\n");
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