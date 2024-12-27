#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n),b(n);

    for(int i = 0; i<n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i<n; i++) {
        cin >> b[i];
    }

    int ans = 0;
    for(int i =0; i<n-1; i++) {
        ans += std::max(0, a[i]-b[i+1]);
    }
    ans += a[n-1];
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}