#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1}; 

void solve() {
    ll a, b; cin >> a >> b;
    ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    set<pair<ll, ll>> s1, s2;
    for(int i = 0; i < 4; i++) {
        s1.insert({x1 + dx[i] * a, y1 + dy[i] * b});
        s2.insert({x2 + dx[i] * a, y2 + dy[i] * b});
        s1.insert({x1 + dx[i] * b, y1 + dy[i] * a});
        s2.insert({x2 + dx[i] * b, y2 + dy[i] * a});
    }
    int ans = 0;
    for(auto x : s1) {
        if(s2.find(x) != s2.end()) {
            ans++;
        }
    }
    cout << ans << endl;
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