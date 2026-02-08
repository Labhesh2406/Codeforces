#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n, w; cin >> n >> w;
    ll kept = n/w;
    cout << n - kept << "\n";
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