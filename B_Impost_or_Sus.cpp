#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int ans = 0;
    int n = s.size();
    if(s[0] != 's') {
        ans++;
        s[0] = 's';
    }
    if(s[n-1] != 's') {
        ans++;
        s[n-1] = 's';
    }
    for(int i = 1, j = 0; i<n; i++){
        if(s[i] == 's'){
            ans += (i - j - 1) / 2;
            j = i;
        }
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}