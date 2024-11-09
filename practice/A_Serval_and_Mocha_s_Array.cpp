#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int y = 0;
    vector<int> a(n);
    for(int i = 0; i<n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i<n; i++) {
        for(int j = i+1; j<n; j++) {
            if(__gcd(a[i], a[j]) < 3) {
                y = 1;
            }
        }
    }
    if(y == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}