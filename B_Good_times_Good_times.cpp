#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    /* string x; cin >> x;
    cout << "1";
    x.pop_back();
    for(char c : x)
        cout << "0";
        cout << "1";
    cout << "\n";
    */

    // Alternative solution
   ll x, y; cin  >> x;
   for(y = 10; y <= 1e9; y *= 10) if (y > x) break;
   cout << (y + 1) << "\n";
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