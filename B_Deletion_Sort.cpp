#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    bool possible = true;
    for(int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            possible = false;
            break;
        }
    }
    if(possible) {
        cout << n << endl;
    } else {
        cout << 1 << endl;
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