#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i =0; i<n; i++) {
        cin >> a[i];
    }
    bool flag = false;
    for(int i = 0; i<n; i++) {
        if(a[i] != a[i+1] || a[i] + a[i+1] != a[i+2]) {
            flag = true;
            break;
        }else {
            flag = false;
        }
    }
    if()
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}