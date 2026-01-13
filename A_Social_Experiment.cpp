#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    if(n <= 3) {
        cout << n << endl;
    }
    else {
        cout << n % 2 << endl;
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