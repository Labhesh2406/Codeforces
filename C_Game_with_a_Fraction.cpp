#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll p, q;
    cin >> p >> q;
    // This is also the correct logic
/*    if(q > p && 2LL*q <= 3LL*p){
        cout << "Bob" << "\n";
    } else {
        cout << "Alice" << "\n";
    }
*/
    if(p >= q) {
        cout << "Alice" << "\n";
        return;
    }
    int diff = q - p;
    if(p >= 2*diff && q >= 3*diff) {
        cout << "Bob" << "\n";
    } else {
        cout << "Alice" << "\n";
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