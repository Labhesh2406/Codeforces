#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    string s; cin >> s;
    ll n = s.size();
    auto poss = [&](char c) {
        ll l = -1, r = -1, cnt = 0;
        char cur = c;
        for (int i = 0; i < n; i++) {
            if (s[i] != cur) {
                if (l == -1) l = i;
                r = i;
                cnt++;
            }
            cur = (cur == 'a') ? 'b' : 'a';
        }
        return cnt == 0 || (r - l + 1 == cnt);
    };
    cout << (poss('a') || poss('b') ? "YES" : "NO") << "\n";
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