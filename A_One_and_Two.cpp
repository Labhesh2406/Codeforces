#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int sum = 0;
    vector<int> a(n);
    for(int i = 0; i<n; i++) {
        cin >> a[i];
        sum += a[i]-1;
    }

    if(sum % 2 == 1) {
        cout << -1 << endl;
        return;
    }

    int s = 0;
    for(int i = 1; i<n; i++) {
        s += a[i-1] - 1;
        if(s == sum/2) {
            cout << i << "\n";
            return;
        }
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