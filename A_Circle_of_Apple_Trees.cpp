#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> b(n);
    int distinct = 1;
    for(int i =0; i<n; i++) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    for(int i =1; i<n; i++) {
        if(b[i] != b[i-1]) {
            distinct++;
        }
    }
    cout << distinct << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}