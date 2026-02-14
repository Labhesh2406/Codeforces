#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> value = {0, 1, 9, 29, 56};
    if(n >= 5) {
        cout << 5*(n*(n-1) - 1) << "\n";
    } else {
        cout << value[n] << "\n";
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