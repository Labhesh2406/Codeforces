#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    string s; cin >> s;

    vector<int> ones, zeros;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') ones.push_back(i + 1);
        else zeros.push_back(i + 1);
    }
    vector<int> ans;
    if (ones.size() % 2 == 0)       ans = ones;
    else if (zeros.size() % 2 == 1) ans = zeros;
    else { cout << -1 << endl; return; }

    cout << ans.size() << endl;
    if (!ans.empty()) {
        for (int i = 0; i < ans.size(); i++) {
            if (i > 0) cout << " ";
            cout << ans[i];
        }
        cout << endl;
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