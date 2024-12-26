#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<string>s(n);
    for(int i = 0; i<n; i++) {
        cin >> s[i];
    }
    int ans=0;
    for(int i = 0; i<n; i++) {
        if(m >= s[i].size()) {
            m -= s[i].size();
            ans++;
        }
        else
            break;
    }
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