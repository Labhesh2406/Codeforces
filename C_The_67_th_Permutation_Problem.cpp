#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    for(int i = 0; i<n; i++) {
        int small = i + 1;
        int medium = 3*n - 2*i - 1;
        int large = 3*n - 2*i;

        cout << small << " " << medium << " " << large;
        if(i < n -1) cout << " ";
    }
    cout << endl;
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