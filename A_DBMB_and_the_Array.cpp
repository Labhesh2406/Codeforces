#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s, x; 
    cin >> n >> s >> x;
    int sum = 0;
    for(int i = 0; i<n; i++) {
        int val; cin >> val;
        sum += val;
    }
    if(sum <= s && (s - sum)%x == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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