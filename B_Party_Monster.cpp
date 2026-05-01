#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    ll cnt = 0;
    for(char c : s) {
        if(c == '(') cnt++;
    }
    cout << (cnt * 2 == n ? "YES" : "NO") << endl;
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