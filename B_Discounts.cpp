#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(k);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());
    ll ans = 0;
    for (int i = 0, t = 0; i < n; i++) {
        if (t == k || i + b[t] - 1 >= n) {
            ans += a[i];
        }
        else {
            for (int j = i; j < i + b[t] - 1; j++) {
                ans += a[j];
            }
            i = i + b[t] - 1;
            t++;
        }
    }
    cout << ans << '\n';

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