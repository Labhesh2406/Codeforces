#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int query(ll u, ll v) {
    ll res;
    cout << "? " << u << " " << v << "\n";
    cout.flush();
    if (!(cin >> res) || res == -1) {
        exit(0);
    }
    return (int)res;
}

void solve() {
    ll n; ll i;
    ll firstEle[3][2] = {{1, 2}, {2, 3}, {3, 1}};
    bool found;
    if (!(cin >> n)) return;
    found = false;
    for (i = 0; i < 3; i++) {
        if (query(firstEle[i][0], firstEle[i][1]) == 1) {
            cout << "! " << firstEle[i][0] << "\n";
            cout.flush();
            found = true;
            break;
        }
    }
    if (found) return;
    for (i = 4; i < 2 * n; i += 2) {
        if (query(i, i + 1) == 1) {
            cout << "! " << i << "\n";
            cout.flush();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "! " << 2 * n << "\n";
        cout.flush();
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