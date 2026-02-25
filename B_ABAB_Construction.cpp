#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    string s; cin >> s;

    bool oddVal = true, evenVal = false;

    for (int i = 0; i < n; i++) {
    int remain = n - i;
    char c = s[i];
    bool odd = false, even = false;

    for (int j = 0; j <= 1; j++) {
        if (j == 1 && !oddVal) continue;
        if (j == 0 && !evenVal) continue;
        char cl = (j == 1) ? 'a' : 'b';
        int rj = (j + remain - 1) % 2;
        char cr = (rj == 1) ? 'a' : 'b';
        if (c == '?' || c == cl) {
            if (j) even = true;
            else odd = true;
        }
        if (c == '?' || c == cr) {
            if (j == 1) odd = true;
            else even = true;
        }
    }
    oddVal = odd;
    evenVal = even;
    if (!oddVal && !evenVal) break;
    }
    cout << ((oddVal || evenVal) ? "YES" : "NO") << "\n";
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