#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int maxi = 0;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }
    cout << maxi << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}