#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        vector<pair<lld, int>> evn;
        for (int j = i + 1; j < n; j++) {
            if (a[j] == a[i]) continue;
            lld mid = (a[i] + a[j]) / 2.0;
            if (a[j] < a[i]) {
                evn.push_back({mid, +1});
            } else {
                evn.push_back({mid, -1});
            }
        }
        sort(evn.begin(), evn.end());
        int cur = 0;
        for (auto &e : evn) if (e.second == +1) cur++;
        int best = cur;
        for (auto &e : evn) {
            if (e.second == +1) cur--;
            else cur++;
            best = max(best, cur);
        }
        ans[i] = best;
    }
    for (int x : ans) cout << x << " ";
    cout << endl;
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