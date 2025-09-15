#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x; cin >> x;
    int n; cin >> n;
    if(n%2==0) {
        cout << 0 << endl;
    }
    else {
        cout << x << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}