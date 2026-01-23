#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n, h, l;
    ll b = 0, r = 0, c = 0;
    cin >> n >> h >> l;
    for (int i = 0; i < n; i++) {
        ll a;
        cin >> a;
        if (a <= h && a <= l) b++;
        else if (a <= h) r++;
        else if (a <= l) c++;
    }
    ll p = min(r, c);
    cout << p + min(r - p + c - p, b) + (b - min(r - p + c - p, b)) / 2 << endl;
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