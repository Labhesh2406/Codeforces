#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i =0; i<n; i++) {
        cin >> a[i];
    }
    if(count(a.begin(), a.end(), 0) == n) {
        cout << 0 << endl;
        return;
    }
    int l = 0, r = n;
    while(a[l] == 0) {
        l++;
    }
    while(a[r-1] == 0) {
        r--;
    }
    if(count(a.begin()+l, a.begin()+r, 0) == 0) {
        cout << 1 << endl;
    }
    else {
        cout << 2 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}