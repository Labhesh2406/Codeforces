#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, z;
    cin >> x >> y >> z;

    for(int i = 0; i<30; i++) {
        if((x >> i & 1) + (y >> i &1) + (z >> i &1) == 2) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}