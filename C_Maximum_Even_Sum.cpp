#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll a, b; cin >> a >> b;

    ll res1 = a * b +1;
    if(res1 % 2 == 0) {
        cout << res1 << endl;
        return;
    }

    if(b % 2 == 0) {
        ll res2 = a * (b/2) + 2;
        if(res2 % 2 == 0) {
            cout << res2 << endl;
            return;
        }
    }
    cout << -1 << endl;
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