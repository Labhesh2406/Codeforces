#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, a, b;
    cin >> l >> a >> b;
    int mx = a;
    for(int i = 0; i<l; i++) {
        a = (a + b) % l;
        mx = max(mx, a);
    }
    cout << mx << '\n';
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}