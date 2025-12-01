#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int y, r; cin >> y >> r;
    int card = y/2 + r;
    int ans = min(card, n);
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}