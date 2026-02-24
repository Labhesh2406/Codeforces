#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    bool ok = false;
    for(int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << n / i << ' ' << n - (n / i) << endl;
            ok = true;
            break;
        }
    }
    if (!ok) {
        cout << 1 << ' ' << n - 1 << endl;
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