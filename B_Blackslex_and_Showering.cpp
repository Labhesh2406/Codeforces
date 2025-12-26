#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll total = 0;
    for (int i = 1; i < n; i++) {
        total += abs(a[i] - a[i - 1]);
    }
    ll ans = 0;
    ans = max(ans, (ll)abs(a[1] - a[0]));
    ans = max(ans, (ll)abs(a[n - 1] - a[n - 2]));
    for (int i = 1; i < n - 1; i++) {
        ll remove = abs(a[i] - a[i - 1]) + abs(a[i + 1] - a[i]);
        ll add = abs(a[i + 1] - a[i - 1]);
        ans = max(ans, remove - add);
    }
    cout << total - ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}