#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    ll s = 0;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    set<int> ans;
    for (int i = 0; i < n; i++) {
        int b[11], cur = i, last = -1;
        for (int j = 0; j < n; j++) b[j] = a[j];

        for (int k = s; k > 0; cur = (cur + 1) % n)
            if (b[cur] > 0) { b[cur]--; last = cur; k--; }

        ans.insert(last);
    }
    cout << ans.size() << "\n";
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